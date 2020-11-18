//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PassKitUIFoundation/PKMicaResizableView-Protocol.h>

@class CALayer, NSArray, NSMutableArray, NSString, UIColor;
@protocol PKFingerprintGlyphViewDelegate;

@interface PKFingerprintGlyphView : UIView <PKMicaResizableView>
{
    CALayer *_backgroundLayer;
    CALayer *_foregroundLayer;
    CALayer *_foregroundRingContainerLayer;
    NSArray *_backgroundShapeLayers;
    NSArray *_foregroundShapeLayers;
    NSArray *_foregroundRingShapeLayers;
    CALayer *_maskLayer;
    CALayer *_maskForegroundLayer;
    unsigned long long _transitionIndex;
    BOOL _transitioning;
    long long _priorState;
    NSMutableArray *_transitionCompletionHandlers;
    double _lastAnimationWillFinish;
    BOOL _rotatingRing;
    NSString *_rotationAnimationKey;
    BOOL _fadeOnRecognized;
    UIColor *_primaryColor;
    UIColor *_secondaryColor;
    long long _state;
    CALayer *_contentLayer;
    id<PKFingerprintGlyphViewDelegate> _delegate;
}

@property (readonly, nonatomic) CALayer *contentLayer; // @synthesize contentLayer=_contentLayer;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PKFingerprintGlyphViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL fadeOnRecognized; // @synthesize fadeOnRecognized=_fadeOnRecognized;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) UIColor *primaryColor; // @synthesize primaryColor=_primaryColor;
@property (copy, nonatomic) UIColor *secondaryColor; // @synthesize secondaryColor=_secondaryColor;
@property (readonly, nonatomic) long long state; // @synthesize state=_state;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_continueHoldingStateForPathAtIndex:(unsigned long long)arg1 withTransitionIndex:(unsigned long long)arg2;
- (void)_endRotationAnimation;
- (void)_executeAfterMinimumAnimationDurationForStateTransition:(CDUnknownBlockType)arg1;
- (void)_executeTransitionCompletionHandlers:(BOOL)arg1;
- (void)_finishTransitionForIndex:(unsigned long long)arg1;
- (double)_minimumAnimationDurationForStateTransition;
- (void)_performTransitionWithTransitionIndex:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)_restartRotationIfNecessary;
- (void)_setProgress:(double)arg1 withDuration:(double)arg2 forShapeLayerAtIndex:(unsigned long long)arg3;
- (void)_setRingState:(unsigned long long)arg1 withTransitionIndex:(unsigned long long)arg2 animated:(BOOL)arg3;
- (void)_showFingerprintWithTransitionIndex:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)_startRecognitionHoldingStateWithTransitionIndex:(unsigned long long)arg1;
- (void)_startRotationAnimation;
- (void)_updateLastAnimationTimeWithAnimationOfDuration:(double)arg1;
- (void)_updateRotationAnimationsIfNecessary;
- (struct CGSize)boundsSizeToMatchPointScale:(double)arg1;
- (void)dealloc;
- (void)didMoveToWindow;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (id)pathStateForLayer:(id)arg1;
- (double)pointScaleToMatchBoundsSize:(struct CGSize)arg1;
- (void)setContentLayerOpacity:(double)arg1 withDuration:(double)arg2;
- (void)setPathState:(id)arg1 forLayer:(id)arg2;
- (void)setPrimaryColor:(struct UIColor *)arg1 animated:(BOOL)arg2;
- (void)setProgress:(double)arg1 withDuration:(double)arg2;
- (void)setRecognizedIfNecessaryWithCompletion:(CDUnknownBlockType)arg1;
- (void)setSecondaryColor:(struct UIColor *)arg1 animated:(BOOL)arg2;
- (void)setState:(long long)arg1 animated:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
