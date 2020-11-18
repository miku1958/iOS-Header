//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIVisualEffect.h>

@class UIColor;

@interface UIBlurEffect : UIVisualEffect
{
    long long _style;
    UIColor *_tintColor;
    BOOL _invertAutomaticStyle;
}

@property (readonly, nonatomic) BOOL _invertAutomaticStyle;
@property (readonly, nonatomic) long long _style;

+ (id)_effectWithStyle:(long long)arg1 invertAutomaticStyle:(BOOL)arg2;
+ (id)_effectWithStyle:(long long)arg1 tintColor:(id)arg2 invertAutomaticStyle:(BOOL)arg3;
+ (id)_effectWithTintColor:(id)arg1;
+ (id)effectWithStyle:(long long)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (BOOL)_isATVStyle;
- (BOOL)_isAutomaticStyle;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)effectForUserInterfaceStyle:(long long)arg1;
- (id)effectSettings;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

