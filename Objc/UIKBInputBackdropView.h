//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

@class UIKBBackdropView, _UIVisualEffectBackdropView;

__attribute__((visibility("hidden")))
@interface UIKBInputBackdropView : UIView
{
    UIKBBackdropView *_inputBackdropFullView;
    UIKBBackdropView *_inputBackdropLeftView;
    UIKBBackdropView *_inputBackdropRightView;
    unsigned long long _innerCorners;
    BOOL _isTransitioning;
    double _transitionGap;
    double _transitionLeftOffset;
    long long _style;
    BOOL _hasStartRect;
    BOOL _hasEndRect;
    struct CGRect _savedStartRect;
    struct CGRect _savedEndRect;
    _UIVisualEffectBackdropView *_captureView;
}

@property (strong, nonatomic) _UIVisualEffectBackdropView *captureView; // @synthesize captureView=_captureView;
@property (strong, nonatomic) UIKBBackdropView *inputBackdropFullView; // @synthesize inputBackdropFullView=_inputBackdropFullView;
@property (strong, nonatomic) UIKBBackdropView *inputBackdropLeftView; // @synthesize inputBackdropLeftView=_inputBackdropLeftView;
@property (strong, nonatomic) UIKBBackdropView *inputBackdropRightView; // @synthesize inputBackdropRightView=_inputBackdropRightView;
@property (readonly) long long style; // @synthesize style=_style;

+ (BOOL)requiresConstraintBasedLayout;
- (void)_beginSplitTransitionIfNeeded:(double)arg1 gapWidth:(double)arg2;
- (void)_endSplitTransitionIfNeeded:(BOOL)arg1;
- (BOOL)_isTransitioning;
- (void)_setFrame:(struct CGRect)arg1 leftOffset:(double)arg2 gapWidth:(double)arg3 progress:(double)arg4;
- (void)_setFrame:(struct CGRect)arg1 leftOffset:(double)arg2 gapWidth:(double)arg3 progress:(double)arg4 innerCorners:(unsigned long long)arg5;
- (void)_setInitialProgressWithFrame:(struct CGRect)arg1;
- (void)_setProgress:(double)arg1 withFrame:(struct CGRect)arg2;
- (void)_setRenderConfig:(id)arg1;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutInputBackdropToFullWithRect:(struct CGRect)arg1;
- (void)layoutInputBackdropToSplitWithLeftViewRect:(struct CGRect)arg1 andRightViewRect:(struct CGRect)arg2 innerCorners:(unsigned long long)arg3;
- (void)prepareForSnapshotting;
- (void)restoreFromSnapshotting;
- (int)textEffectsVisibilityLevel;
- (void)transitionToStyle:(long long)arg1 isSplit:(BOOL)arg2;

@end

