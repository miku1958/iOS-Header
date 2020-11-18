//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UILabel.h>

@class UIButton;

__attribute__((visibility("hidden")))
@interface UIButtonLabel : UILabel
{
    BOOL _reverseShadow;
    UIButton *_button;
}

+ (id)_defaultAttributes;
- (void).cxx_destruct;
- (id)_defaultAttributes;
- (id)_initWithFrame:(struct CGRect)arg1 button:(id)arg2;
- (void)_setMinimumFontSize:(double)arg1;
- (void)_setWantsAutolayout;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)invalidateIntrinsicContentSize;
- (void)setAdjustsFontSizeToFitWidth:(BOOL)arg1;
- (void)setFont:(id)arg1;
- (void)setLineBreakMode:(long long)arg1;
- (void)setMinimumScaleFactor:(double)arg1;
- (void)setReverseShadow:(BOOL)arg1;
- (void)setShadowOffset:(struct CGSize)arg1;
- (void)setTextAlignment:(long long)arg1;
- (struct CGSize)shadowOffset;

@end

