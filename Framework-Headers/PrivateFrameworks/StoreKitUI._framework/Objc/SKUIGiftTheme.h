//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/NSCopying-Protocol.h>

@class NSString, NSURL, UIColor, UIImage;

__attribute__((visibility("hidden")))
@interface SKUIGiftTheme : NSObject <NSCopying>
{
    UIColor *_backgroundColor;
    UIColor *_bodyTextColor;
    UIImage *_headerImage;
    NSURL *_headerImageURL;
    UIColor *_primaryTextColor;
    long long _themeIdentifier;
    NSString *_themeName;
}

@property (copy, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property (copy, nonatomic) UIColor *bodyTextColor; // @synthesize bodyTextColor=_bodyTextColor;
@property (strong, nonatomic) UIImage *headerImage; // @synthesize headerImage=_headerImage;
@property (copy, nonatomic) NSURL *headerImageURL; // @synthesize headerImageURL=_headerImageURL;
@property (copy, nonatomic) UIColor *primaryTextColor; // @synthesize primaryTextColor=_primaryTextColor;
@property (nonatomic) long long themeIdentifier; // @synthesize themeIdentifier=_themeIdentifier;
@property (copy, nonatomic) NSString *themeName; // @synthesize themeName=_themeName;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)initWithThemeDictionary:(id)arg1;

@end

