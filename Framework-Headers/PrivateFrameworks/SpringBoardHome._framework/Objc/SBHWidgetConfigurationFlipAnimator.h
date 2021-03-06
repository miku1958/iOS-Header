//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/SBHWidgetConfigurationAnimating-Protocol.h>
#import <SpringBoardHome/SBIconViewObserver-Protocol.h>

@class NSString, SBFTouchPassThroughView, SBHWidgetConfigurationTransformView, SBHWidgetSettings, UIView, UIViewFloatAnimatableProperty;

@interface SBHWidgetConfigurationFlipAnimator : NSObject <SBIconViewObserver, SBHWidgetConfigurationAnimating>
{
    SBHWidgetSettings *_widgetSettings;
    SBFTouchPassThroughView *_matchMoveView;
    SBHWidgetConfigurationTransformView *_sourceContainerView;
    UIView *_targetSuperview;
    long long _currentEndpoint;
    double _startingFlipFraction;
    double _endingFlipFraction;
    double _startingRotationAngle;
    double _endingRotationAngle;
    UIViewFloatAnimatableProperty *_flipAnimatableProperty;
    struct CGRect _sourceContentFrame;
    struct CGRect _targetContentFrame;
    struct CGRect _homeScreenContentFrame;
    struct CGRect _sourceContentFrameInMatchMoveViewSpace;
    struct CGRect _targetContentFrameInMatchMoveViewSpace;
}

@property (nonatomic) long long currentEndpoint; // @synthesize currentEndpoint=_currentEndpoint;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double endingFlipFraction; // @synthesize endingFlipFraction=_endingFlipFraction;
@property (nonatomic) double endingRotationAngle; // @synthesize endingRotationAngle=_endingRotationAngle;
@property (strong, nonatomic) UIViewFloatAnimatableProperty *flipAnimatableProperty; // @synthesize flipAnimatableProperty=_flipAnimatableProperty;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGRect homeScreenContentFrame; // @synthesize homeScreenContentFrame=_homeScreenContentFrame;
@property (strong, nonatomic) SBFTouchPassThroughView *matchMoveView; // @synthesize matchMoveView=_matchMoveView;
@property (strong, nonatomic) SBHWidgetConfigurationTransformView *sourceContainerView; // @synthesize sourceContainerView=_sourceContainerView;
@property (nonatomic) struct CGRect sourceContentFrame; // @synthesize sourceContentFrame=_sourceContentFrame;
@property (nonatomic) struct CGRect sourceContentFrameInMatchMoveViewSpace; // @synthesize sourceContentFrameInMatchMoveViewSpace=_sourceContentFrameInMatchMoveViewSpace;
@property (nonatomic) double startingFlipFraction; // @synthesize startingFlipFraction=_startingFlipFraction;
@property (nonatomic) double startingRotationAngle; // @synthesize startingRotationAngle=_startingRotationAngle;
@property (readonly) Class superclass;
@property (nonatomic) struct CGRect targetContentFrame; // @synthesize targetContentFrame=_targetContentFrame;
@property (nonatomic) struct CGRect targetContentFrameInMatchMoveViewSpace; // @synthesize targetContentFrameInMatchMoveViewSpace=_targetContentFrameInMatchMoveViewSpace;
@property (strong, nonatomic) UIView *targetSuperview; // @synthesize targetSuperview=_targetSuperview;
@property (readonly, nonatomic) SBHWidgetSettings *widgetSettings; // @synthesize widgetSettings=_widgetSettings;

- (void).cxx_destruct;
- (void)_configureForEndpoint:(long long)arg1 context:(id)arg2 inMode:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)animateToEndpoint:(long long)arg1 withContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)dealloc;
- (void)finalizeAnimationAtEndpoint:(long long)arg1 withContext:(id)arg2;
- (void)iconViewWasRecycled:(id)arg1;
- (id)init;
- (void)prepareToAnimateFromEndpoint:(long long)arg1 withContext:(id)arg2;

@end

