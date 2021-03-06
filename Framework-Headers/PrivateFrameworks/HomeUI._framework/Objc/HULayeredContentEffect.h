//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class UIColor, UIVibrancyEffect;

@interface HULayeredContentEffect : NSObject
{
    UIVibrancyEffect *_vibrancyEffect;
    UIColor *_tintColor;
}

@property (strong, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property (strong, nonatomic) UIVibrancyEffect *vibrancyEffect; // @synthesize vibrancyEffect=_vibrancyEffect;

+ (id)contentWithTintColor:(id)arg1;
+ (id)contentWithVibrancyEffect:(id)arg1;
- (void).cxx_destruct;

@end

