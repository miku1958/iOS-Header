//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIPopoverBackgroundView.h>

@class UIColor, UIView, UIVisualEffectView;

__attribute__((visibility("hidden")))
@interface _UIPopoverStandardChromeView : UIPopoverBackgroundView
{
    UIView *_arrowBackgroundView;
    UIVisualEffectView *_blurView;
    UIView *_maskView;
    UIColor *_popoverBackgroundColor;
    UIColor *_arrowBackgroundColor;
    BOOL _popoverBackgroundColorIsOpaque;
    double _arrowOffset;
    unsigned long long _arrowDirection;
    long long _requestedBackgroundStyle;
    long long _backgroundStyle;
    BOOL _arrowVisible;
    BOOL _wasPinned;
    BOOL useShortMode;
    BOOL _debugMode;
    UIView *viewToMaskWhenContentExtendsOverArrow;
    UIColor *_contentBlendingColor;
    UIView *_arrowView;
    UIView *_leftCapView;
    UIView *_rightCapView;
}

@property (copy, nonatomic) UIColor *arrowBackgroundColor;
@property (readonly, nonatomic) UIView *arrowView; // @synthesize arrowView=_arrowView;
@property (nonatomic, getter=isArrowVisible) BOOL arrowVisible;
@property (nonatomic) long long backgroundStyle;
@property (readonly, nonatomic) UIColor *contentBlendingColor; // @synthesize contentBlendingColor=_contentBlendingColor;
@property (nonatomic, getter=isDebugModeEnabled) BOOL debugModeEnabled; // @synthesize debugModeEnabled=_debugMode;
@property (readonly, nonatomic) BOOL hasComponentViews;
@property (readonly, nonatomic) UIView *leftCapView; // @synthesize leftCapView=_leftCapView;
@property (copy, nonatomic) UIColor *popoverBackgroundColor;
@property (readonly, nonatomic) UIView *rightCapView; // @synthesize rightCapView=_rightCapView;
@property (nonatomic) BOOL useShortMode; // @synthesize useShortMode;
@property (weak, nonatomic) UIView *viewToMaskWhenContentExtendsOverArrow; // @synthesize viewToMaskWhenContentExtendsOverArrow;

+ (double)arrowBase;
+ (double)arrowHeight;
+ (struct UIEdgeInsets)contentViewInsets;
- (void).cxx_destruct;
- (void)_configureEffectView;
- (struct CGRect)_contentViewFrame;
- (void)_layoutArrowViewsLeftOrRight;
- (void)_layoutArrowViewsNone;
- (void)_layoutArrowViewsUpOrDown;
- (void)_loadNecessaryViews;
- (void)_removeEffectView;
- (void)_resetComponentViews;
- (long long)_resolvedBackgroundStyle;
- (struct UIEdgeInsets)_shadowInsets;
- (struct CGSize)_shadowOffset;
- (double)_shadowOpacity;
- (id)_shadowPath;
- (double)_shadowRadius;
- (BOOL)_shouldUseEqualContentInsetsOnAllSides;
- (void)_updateBackgroundStyle;
- (void)_updateChrome;
- (unsigned long long)arrowDirection;
- (double)arrowOffset;
- (id)backgroundEffect;
- (void)didMoveToWindow;
- (id)initWithFrame:(struct CGRect)arg1;
- (BOOL)isPinned;
- (BOOL)isRightArrowPinnedToBottom;
- (BOOL)isRightArrowPinnedToTop;
- (void)layoutSubviews;
- (double)maxNonPinnedOffset;
- (double)minNonPinnedOffset;
- (void)motionBegan:(long long)arg1 withEvent:(id)arg2;
- (void)motionCancelled:(long long)arg1 withEvent:(id)arg2;
- (void)motionEnded:(long long)arg1 withEvent:(id)arg2;
- (struct UIEdgeInsets)safeAreaInsetsForContentView;
- (void)setArrowDirection:(unsigned long long)arg1;
- (void)setArrowOffset:(double)arg1;
- (void)setArrowVisible:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setBackgroundStyle:(long long)arg1 animated:(BOOL)arg2;
- (void)touchesBegan:(id)arg1 withEvent:(id)arg2;
- (void)touchesCancelled:(id)arg1 withEvent:(id)arg2;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;
- (void)touchesMoved:(id)arg1 withEvent:(id)arg2;
- (BOOL)wouldPinForOffset:(double)arg1;

@end

