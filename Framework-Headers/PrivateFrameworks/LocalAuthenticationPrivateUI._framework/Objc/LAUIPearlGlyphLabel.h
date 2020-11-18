//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class CABackdropLayer, LAUIPearlGlyphView, NSObject, NSString, UIColor, UIFont, UILabel;
@protocol OS_dispatch_source;

@interface LAUIPearlGlyphLabel : UIView
{
    UIView *_container;
    CABackdropLayer *_background;
    UIView *_labelContainer;
    UILabel *_label;
    UIView *_glyphContainer;
    LAUIPearlGlyphView *_glyph;
    struct map<CALayer *__unsafe_unretained, CALayer *, std::__1::less<CALayer *__unsafe_unretained>, std::__1::allocator<std::__1::pair<CALayer *const __unsafe_unretained, CALayer *>>> _masks;
    struct vector<UIView *, std::__1::allocator<UIView *>> _labelSnapshots;
    UIColor *_backgroundColor;
    UIColor *_textColor;
    UIFont *_baseFont;
    struct CGSize _currentLabelSize;
    struct CGSize _currentMaximumSize;
    NSObject<OS_dispatch_source> *_visibilityTimer;
    BOOL _inWindow;
    BOOL _textNeedsUpdate;
    BOOL _textUpdateNeedsAnimation;
    BOOL _visible;
    BOOL _visibleNeedsUpdate;
    BOOL _allowDelayedVisibility;
    BOOL _animated;
    BOOL _reduceBlur;
    BOOL _shimmerEnabled;
    long long _style;
    NSString *_text;
    struct CGSize _maximumSize;
}

@property (nonatomic) BOOL inApplicationContext; // @dynamic inApplicationContext;
@property (readonly, nonatomic) struct CGSize maximumSize; // @synthesize maximumSize=_maximumSize;
@property (readonly, nonatomic, getter=isShimmerEnabled) BOOL shimmerEnabled; // @synthesize shimmerEnabled=_shimmerEnabled;
@property (readonly, nonatomic) long long style; // @synthesize style=_style;
@property (readonly, copy, nonatomic) NSString *text; // @synthesize text=_text;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)_applyStyle;
- (void)_applyVisibilityAnimated:(BOOL)arg1;
- (void)_updateBoundsSizeAnimated:(BOOL)arg1;
- (void)_updateFontAnimated:(BOOL)arg1;
- (void)_updateGlyphPaused;
- (void)_updateReduceBlurState;
- (void)_updateText;
- (void)_updateVisibilityAnimated:(BOOL)arg1;
- (void)applicationDidBecomeActive:(id)arg1;
- (void)boldTextStatusDidChange:(id)arg1;
- (void)contentSizeCategoryDidChange:(id)arg1;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithStyle:(long long)arg1;
- (void)invalidate;
- (void)layoutIfNeededAnimated:(BOOL)arg1;
- (void)layoutSubviews;
- (void)reduceMotionDidChange:(id)arg1;
- (void)reduceTransparencyDidChange:(id)arg1;
- (void)setMaximumSize:(struct CGSize)arg1 animated:(BOOL)arg2;
- (void)setShimmerEnabled:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setStyle:(long long)arg1 animated:(BOOL)arg2;
- (void)setText:(id)arg1 animated:(BOOL)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end
