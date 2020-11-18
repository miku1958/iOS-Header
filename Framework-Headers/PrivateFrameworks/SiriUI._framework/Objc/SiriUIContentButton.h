//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIButton.h>

@class UIColor;

@interface SiriUIContentButton : UIButton
{
    BOOL _isRenderingImageTemplate;
    UIColor *_defaultColorForTemplate;
    UIColor *_highlightColorForTemplate;
    UIColor *_overrideTextColor;
    BOOL _usePlatterStyle;
    struct UIEdgeInsets _hitTestEdgeInsets;
}

@property (nonatomic) struct UIEdgeInsets hitTestEdgeInsets; // @synthesize hitTestEdgeInsets=_hitTestEdgeInsets;
@property (nonatomic) BOOL usePlatterStyle; // @synthesize usePlatterStyle=_usePlatterStyle;

+ (id)button;
+ (id)buttonWithImageMask:(id)arg1;
+ (id)buttonWithImageMask:(id)arg1 style:(long long)arg2;
+ (id)buttonWithImageTemplate:(id)arg1;
+ (id)buttonWithImageTemplate:(id)arg1 style:(long long)arg2;
+ (id)buttonWithLightWeightFont;
+ (id)buttonWithMediumWeightFont;
- (void).cxx_destruct;
- (void)_setIsRenderingImageTemplate:(BOOL)arg1;
- (void)_updateStyling;
- (void)_updateTintColor;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setDefaultColorForTemplate:(id)arg1;
- (void)setHighlightColorForTemplate:(id)arg1;
- (void)setHighlighted:(BOOL)arg1;
- (void)setOverrideTextColor:(id)arg1;

@end
