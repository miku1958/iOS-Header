//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIBlurEffect.h>

@class UIColor;

__attribute__((visibility("hidden")))
@interface _UIPopoverBackgroundVisualEffect : UIBlurEffect
{
    BOOL _tintColorIsTranslucent;
    UIColor *_tintColor;
}

@property (readonly, copy, nonatomic) UIColor *tintColor; // @synthesize tintColor=_tintColor;
@property (readonly, nonatomic) BOOL tintColorIsTranslucent; // @synthesize tintColorIsTranslucent=_tintColorIsTranslucent;

+ (id)effectWithStyle:(long long)arg1 tint:(id)arg2;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)effectSettings;

@end
