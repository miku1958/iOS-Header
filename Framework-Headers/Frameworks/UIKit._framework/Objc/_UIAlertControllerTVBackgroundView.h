//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <UIKit/UIInterfaceActionVisualBackgroundDisplaying-Protocol.h>
#import <UIKit/UIInterfaceActionVisualGroupBackgroundDisplaying-Protocol.h>

@class NSMutableDictionary, NSString, _UIFloatingShadowView;

__attribute__((visibility("hidden")))
@interface _UIAlertControllerTVBackgroundView : UIView <UIInterfaceActionVisualBackgroundDisplaying, UIInterfaceActionVisualGroupBackgroundDisplaying>
{
    BOOL _isHighlighted;
    BOOL _isPressed;
    UIView *_backgroundView;
    _UIFloatingShadowView *_shadowView;
    NSMutableDictionary *_alphas;
    BOOL _shouldUseTintColorAsBackgroundColor;
    BOOL _shouldShowShadow;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL shouldShowShadow; // @synthesize shouldShowShadow=_shouldShowShadow;
@property (nonatomic) BOOL shouldUseTintColorAsBackgroundColor; // @synthesize shouldUseTintColorAsBackgroundColor=_shouldUseTintColorAsBackgroundColor;
@property (readonly) Class superclass;

+ (struct CGSize)backgroundInsetAmount;
- (void).cxx_destruct;
- (double)_alphaForHighlighted:(BOOL)arg1 pressed:(BOOL)arg2;
- (id)_displayedBackgroundColor;
- (void)_setContinuousCornerRadius:(double)arg1;
- (double)alphaForState:(unsigned long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setAlpha:(double)arg1 forState:(unsigned long long)arg2;
- (void)setCornerRadius:(double)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setPressed:(BOOL)arg1;
- (void)setRoundedCornerPosition:(unsigned long long)arg1;
- (void)tintColorDidChange;

@end

