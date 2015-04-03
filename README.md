# AtSugar

AtSugar gives a little syntax sugar to your `@` sign.

For more background and a deeper dive into AtSugar, check out the [introductory blog post](http://www.dbachrach.com/posts/atsugar-sugar-for-your-at).

Here's a whirlwind tour of what AtSugar adds:

```objc
#import <AtSugar/AtSugar.h> // You can put this in your *.pch

//
// Grab a weak reference to `self`:
//

@weakSelf()
[self saveBlock:^{
    [weakSelf go]; // `weakSelf` will be captured weakly
}];


//
// Easily implement the singleton pattern
//

@interface MyClass : NSObject

+ (instancetype)sharedInstance;

@end

@implementation MyClass

@singleton(sharedInstance)

@end


//
// Easily implement associated objects
//

#import <objc/runtime.h>

@interface UIImage (MyCategory)

@property (strong, nonatomic) NSString* myProperty;

@end

@implementation UIImage (MyCategory)

@associated_object (myProperty, setMyProperty)

@end


//
// Declarative class properties
//

@interface MyCell : UICollectionViewCell

+ (NSString*)xibName;

@end

@implementation MyCell

@declare_class_property (xibName, @"MyCell.xib")

@end

```

Dig into the header files to see what else AtSugar can do!

## Installation

AtSugar is available through [CocoaPods](http://cocoapods.org). To install
it, simply add the following line to your Podfile:

    pod "AtSugar"

## Author

MediaHound

## License

AtSugar is available under the Apache License 2.0. See the LICENSE file for more info.

