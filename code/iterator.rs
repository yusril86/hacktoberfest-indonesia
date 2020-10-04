use std::fmt::Display;

fn main() {
    let strng1 = String::from("Huawei");
    let strng2 = "Apple";

    let lngstStr = longest(&strng1.as_str(), &strng2);
    println!("{}", lngstStr);
}

fn longest<'a>(x: &'a str, y: &'a str) -> &'a str {
    if x.len() > y.len() {
        x
    } else {
        y
    }
}

fn longest_with_an_announcement<'a, T>(x: &'a str, y: &'a str, ann: T) -> &'a str
    where T: Display
{
    println!("Announcement! {}", ann);
    if x.len() > y.len() {
        x
    } else {
        y
    }
}
