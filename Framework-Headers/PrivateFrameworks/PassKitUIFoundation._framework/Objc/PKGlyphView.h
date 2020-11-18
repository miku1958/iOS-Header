//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <PassKitUIFoundation/PKFingerprintGlyphViewDelegate-Protocol.h>

@class CALayer, LAUICheckmarkLayer, NSMutableArray, NSObject, NSString, PKFingerprintGlyphView, PKMicaLayer, PKPhoneGlyphLayer, UIColor;
@protocol OS_dispatch_group, PKGlyphViewDelegate;

@interface PKGlyphView : UIView <PKFingerprintGlyphViewDelegate>
{
    long long _style;
    BOOL _isPad;
    unsigned long long _transitionIndex;
    BOOL _transitioning;
    BOOL _transitioningAnimated;
    long long _priorState;
    NSMutableArray *_transitionCompletionHandlers;
    NSObject<OS_dispatch_group> *_lastAnimationGroup;
    double _lastAnimationWillFinish;
    BOOL _phoneWiggling;
    NSString *_phoneWiggleAnimationKey;
    struct {
        unsigned int showingPhone:1;
        unsigned int phoneRotated:1;
        unsigned int showingUserIntentPhone:1;
        unsigned int showingUserIntentArrow:1;
    } _layoutFlags;
    PKFingerprintGlyphView *_fingerprintView;
    PKPhoneGlyphLayer *_phoneLayer;
    LAUICheckmarkLayer *_checkLayer;
    CALayer *_userIntentLayer;
    PKMicaLayer *_userIntentArrowLayer;
    PKMicaLayer *_userIntentDeviceLayer;
    double _phoneAspectRatio;
    CALayer *_customImageLayer;
    struct UIColor *_secondaryColor;
    unsigned int _userIntentEdge;
    long long _colorMode;
    UIColor *_primaryColor;
    struct CGImage *_customImage;
    long long _state;
    id<PKGlyphViewDelegate> _delegate;
    struct UIEdgeInsets _customImageAlignmentEdgeInsets;
}

@property (readonly, nonatomic) long long colorMode; // @synthesize colorMode=_colorMode;
@property (readonly, nonatomic) struct CGImage *customImage; // @synthesize customImage=_customImage;
@property (readonly, nonatomic) struct UIEdgeInsets customImageAlignmentEdgeInsets; // @synthesize customImageAlignmentEdgeInsets=_customImageAlignmentEdgeInsets;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PKGlyphViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL fadeOnRecognized;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) UIColor *primaryColor; // @synthesize primaryColor=_primaryColor;
@property (readonly, nonatomic) long long state; // @synthesize state=_state;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned int userIntentEdge; // @synthesize userIntentEdge=_userIntentEdge;

+ (BOOL)automaticallyNotifiesObserversOfState;
+ (id)sharedStaticResources;
- (void).cxx_destruct;
- (void)_applyColorMode:(BOOL)arg1;
- (void)_endPhoneWiggle;
- (void)_executeAfterMinimumAnimationDurationForStateTransition:(CDUnknownBlockType)arg1;
- (void)_executeAfterMinimumAnimationDurationForStateTransitionWithDelayRatio:(double)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_executeTransitionCompletionHandlers:(BOOL)arg1;
- (void)_finishTransitionForIndex:(unsigned long long)arg1;
- (void)_layoutContentLayer:(id)arg1;
- (void)_performTransitionWithTransitionIndex:(unsigned long long)arg1 animated:(BOOL)arg2;
- (struct CGPoint)_phonePositionDeltaWhileShownFromRotationPercentage:(double)arg1 toPercentage:(double)arg2;
- (struct CGPoint)_phonePositionWhileShownWithRotationPercentage:(double)arg1;
- (struct CATransform3D)_phoneTransformDeltaWhileShownFromRotationPercentage:(double)arg1 toPercentage:(double)arg2;
- (struct UIColor *)_primaryColorForStyle:(long long)arg1 mode:(long long)arg2;
- (struct UIColor *)_secondaryColorForStyle:(long long)arg1 mode:(long long)arg2;
- (void)_setPrimaryColor:(struct UIColor *)arg1 animated:(BOOL)arg2;
- (void)_setRecognizedIfNecessaryWithTransitionIndex:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_setSecondaryColor:(struct UIColor *)arg1 animated:(BOOL)arg2;
- (void)_startPhoneWiggle;
- (void)_updateCheckViewStateAnimated:(BOOL)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_updateCustomImageLayerOpacityAnimated:(BOOL)arg1;
- (void)_updateLastAnimationTimeWithAnimationOfDuration:(double)arg1;
- (void)_updatePhoneLayoutWithTransitionIndex:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)_updatePhoneWiggleIfNecessary;
- (void)_updateUserIntentLayerRotation;
- (void)_updateUserIntentLayoutAnimated:(BOOL)arg1;
- (id)createCustomImageLayer;
- (void)dealloc;
- (void)didMoveToWindow;
- (void)fingerprintGlyphView:(id)arg1 didLayoutContentLayer:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithStyle:(long long)arg1;
- (void)layoutSubviews;
- (void)setColorMode:(long long)arg1 animated:(BOOL)arg2;
- (void)setCustomImage:(struct CGImage *)arg1 withAlignmentEdgeInsets:(struct UIEdgeInsets)arg2;
- (void)setState:(long long)arg1;
- (void)setState:(long long)arg1 animated:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)tintColorDidChange;
- (void)updateRasterizationScale:(double)arg1;
- (void)updateRotation;

@end

