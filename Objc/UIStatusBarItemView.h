//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class NSString, UIStatusBarForegroundStyleAttributes, UIStatusBarItem, UIStatusBarLayoutManager, _UILegibilityImageSet, _UILegibilityView;

__attribute__((visibility("hidden")))
@interface UIStatusBarItemView : UIView
{
    double _currentOverlap;
    struct CGContext *_imageContext;
    double _imageContextScale;
    _UILegibilityView *_legibilityView;
    _UILegibilityImageSet *_lastGeneratedTextImage;
    double _lastGeneratedTextImageLetterSpacing;
    NSString *_lastGeneratedTextImageText;
    BOOL _visible;
    BOOL _allowsUpdates;
    UIStatusBarItem *_item;
    UIStatusBarLayoutManager *_layoutManager;
    UIStatusBarForegroundStyleAttributes *_foregroundStyle;
}

@property (nonatomic) BOOL allowsUpdates; // @synthesize allowsUpdates=_allowsUpdates;
@property (readonly, nonatomic) UIStatusBarForegroundStyleAttributes *foregroundStyle; // @synthesize foregroundStyle=_foregroundStyle;
@property (readonly, nonatomic) UIStatusBarItem *item; // @synthesize item=_item;
@property (weak, nonatomic) UIStatusBarLayoutManager *layoutManager; // @synthesize layoutManager=_layoutManager;
@property (nonatomic, getter=isVisible) BOOL visible; // @synthesize visible=_visible;

+ (id)createViewForItem:(id)arg1 withData:(id)arg2 actions:(int)arg3 foregroundStyle:(id)arg4;
- (void).cxx_destruct;
- (BOOL)_shouldAnimatePropertyWithKey:(id)arg1;
- (BOOL)_shouldReverseLayoutDirection;
- (id)accessibilityHUDRepresentation;
- (double)addContentOverlap:(double)arg1;
- (double)adjustFrameToNewSize:(double)arg1;
- (BOOL)allowsUserInteraction;
- (BOOL)animatesDataChange;
- (void)beginDisablingRasterization;
- (void)beginImageContextWithMinimumWidth:(double)arg1;
- (id)cachedImageWithText:(id)arg1 truncatedWithEllipsesAtMaxWidth:(double)arg2 letterSpacing:(double)arg3;
- (void)clearCachedTextImage;
- (id)contentsImage;
- (double)currentLeftOverlap;
- (double)currentOverlap;
- (double)currentRightOverlap;
- (void)dealloc;
- (id)description;
- (void)endDisablingRasterization;
- (void)endImageContext;
- (double)extraLeftPadding;
- (double)extraRightPadding;
- (id)foregroundView;
- (id)imageFromImageContextClippedToWidth:(double)arg1;
- (id)imageWithShadowNamed:(id)arg1;
- (id)imageWithText:(id)arg1;
- (id)initWithItem:(id)arg1 data:(id)arg2 actions:(int)arg3 style:(id)arg4;
- (double)legibilityStrength;
- (long long)legibilityStyle;
- (double)maximumOverlap;
- (double)neededSizeForImageSet:(id)arg1;
- (void)performPendedActions;
- (double)resetContentOverlap;
- (void)setContentMode:(long long)arg1;
- (void)setCurrentOverlap:(double)arg1;
- (void)setLayerContentsImage:(id)arg1;
- (void)setPersistentAnimationsEnabled:(BOOL)arg1;
- (double)setStatusBarData:(id)arg1 actions:(int)arg2;
- (void)setVisible:(BOOL)arg1 frame:(struct CGRect)arg2 duration:(double)arg3;
- (void)setVisible:(BOOL)arg1 settingAlpha:(BOOL)arg2;
- (double)shadowPadding;
- (double)standardPadding;
- (long long)textAlignment;
- (id)textFont;
- (long long)textStyle;
- (double)updateContentsAndWidth;
- (BOOL)updateForNewData:(id)arg1 actions:(int)arg2;
- (void)updateForNewStyle:(id)arg1;
- (void)willMoveToWindow:(id)arg1;

@end

