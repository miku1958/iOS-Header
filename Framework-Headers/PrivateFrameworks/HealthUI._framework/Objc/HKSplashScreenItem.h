//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, UIImage;

@interface HKSplashScreenItem : NSObject
{
    NSString *_title;
    NSString *_fullDescription;
    UIImage *_icon;
}

@property (strong, nonatomic) NSString *fullDescription; // @synthesize fullDescription=_fullDescription;
@property (strong, nonatomic) UIImage *icon; // @synthesize icon=_icon;
@property (strong, nonatomic) NSString *title; // @synthesize title=_title;

+ (id)splashScreenItemWithDictionary:(id)arg1;
+ (id)splashScreenItemWithTitle:(id)arg1 icon:(id)arg2 fullDescription:(id)arg3;
- (void).cxx_destruct;

@end

