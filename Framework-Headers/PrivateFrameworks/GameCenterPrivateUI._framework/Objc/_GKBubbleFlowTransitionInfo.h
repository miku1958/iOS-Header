//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <GameCenterPrivateUI/NSCopying-Protocol.h>

@class GKBubblePathAnimator, GKBubbleSet, UIViewController, _GKBubbleFlowPathTransitionInfo;
@protocol GKBubbleFlowableViewController;

@interface _GKBubbleFlowTransitionInfo : NSObject <NSCopying>
{
    UIViewController<GKBubbleFlowableViewController> *_toVC;
    UIViewController<GKBubbleFlowableViewController> *_fromVC;
    UIViewController *_toWrapperVC;
    UIViewController *_fromWrapperVC;
    UIViewController *_containingViewController;
    CDStruct_b207fc29 _toFlags;
    CDStruct_b207fc29 _fromFlags;
    GKBubbleSet *_fromBubbles;
    GKBubbleSet *_toBubbles;
    long long _toFocusBubbleType;
    long long _fromFocusBubbleType;
    long long _transitionType;
    long long _transitionPhase;
    double _startTime;
    double _duration;
    double _fadeOutDuration;
    double _crossfadeDuration;
    double _fadeInDuration;
    double _relativeDuration;
    double _relativeStartTime;
    double _relativeFadeOutDuration;
    double _relativeCrossfadeDuration;
    double _relativeFadeInDuration;
    GKBubblePathAnimator *_toPathAnimator;
    GKBubblePathAnimator *_fromPathAnimator;
    GKBubblePathAnimator *_onlyPathAnimator;
    _GKBubbleFlowPathTransitionInfo *_toPathTransitionInfo;
    _GKBubbleFlowPathTransitionInfo *_fromPathTransitionInfo;
    _GKBubbleFlowPathTransitionInfo *_onlyPathTransitionInfo;
    BOOL _fadedOutRealFromView;
    BOOL _disableInteractionDuringTransition;
}

@property (readonly, nonatomic) BOOL animated;
@property (strong, nonatomic) UIViewController *containingViewController; // @synthesize containingViewController=_containingViewController;
@property (nonatomic) double crossfadeDuration; // @synthesize crossfadeDuration=_crossfadeDuration;
@property (nonatomic) BOOL disableInteractionDuringTransition; // @synthesize disableInteractionDuringTransition=_disableInteractionDuringTransition;
@property (nonatomic) double duration; // @synthesize duration=_duration;
@property (nonatomic) double fadeInDuration; // @synthesize fadeInDuration=_fadeInDuration;
@property (nonatomic) double fadeOutDuration; // @synthesize fadeOutDuration=_fadeOutDuration;
@property (nonatomic) BOOL fadedOutRealFromView; // @synthesize fadedOutRealFromView=_fadedOutRealFromView;
@property (strong, nonatomic) GKBubbleSet *fromBubbles; // @synthesize fromBubbles=_fromBubbles;
@property (nonatomic) CDStruct_b207fc29 fromFlags; // @synthesize fromFlags=_fromFlags;
@property (nonatomic) long long fromFocusBubbleType; // @synthesize fromFocusBubbleType=_fromFocusBubbleType;
@property (strong, nonatomic) GKBubblePathAnimator *fromPathAnimator; // @synthesize fromPathAnimator=_fromPathAnimator;
@property (strong, nonatomic) _GKBubbleFlowPathTransitionInfo *fromPathTransitionInfo; // @synthesize fromPathTransitionInfo=_fromPathTransitionInfo;
@property (strong, nonatomic) UIViewController<GKBubbleFlowableViewController> *fromVC; // @synthesize fromVC=_fromVC;
@property (strong, nonatomic) UIViewController *fromWrapperVC; // @synthesize fromWrapperVC=_fromWrapperVC;
@property (readonly, nonatomic) BOOL hasNonFallbackPathAnimator;
@property (strong, nonatomic) GKBubblePathAnimator *onlyPathAnimator; // @synthesize onlyPathAnimator=_onlyPathAnimator;
@property (strong, nonatomic) _GKBubbleFlowPathTransitionInfo *onlyPathTransitionInfo; // @synthesize onlyPathTransitionInfo=_onlyPathTransitionInfo;
@property (readonly, nonatomic) UIViewController *realFromVC;
@property (readonly, nonatomic) UIViewController *realToVC;
@property (nonatomic) double relativeCrossfadeDuration; // @synthesize relativeCrossfadeDuration=_relativeCrossfadeDuration;
@property (nonatomic) double relativeDuration; // @synthesize relativeDuration=_relativeDuration;
@property (nonatomic) double relativeFadeInDuration; // @synthesize relativeFadeInDuration=_relativeFadeInDuration;
@property (nonatomic) double relativeFadeOutDuration; // @synthesize relativeFadeOutDuration=_relativeFadeOutDuration;
@property (nonatomic) double relativeStartTime; // @synthesize relativeStartTime=_relativeStartTime;
@property (nonatomic) double startTime; // @synthesize startTime=_startTime;
@property (strong, nonatomic) GKBubbleSet *toBubbles; // @synthesize toBubbles=_toBubbles;
@property (nonatomic) CDStruct_b207fc29 toFlags; // @synthesize toFlags=_toFlags;
@property (nonatomic) long long toFocusBubbleType; // @synthesize toFocusBubbleType=_toFocusBubbleType;
@property (strong, nonatomic) GKBubblePathAnimator *toPathAnimator; // @synthesize toPathAnimator=_toPathAnimator;
@property (strong, nonatomic) _GKBubbleFlowPathTransitionInfo *toPathTransitionInfo; // @synthesize toPathTransitionInfo=_toPathTransitionInfo;
@property (strong, nonatomic) UIViewController<GKBubbleFlowableViewController> *toVC; // @synthesize toVC=_toVC;
@property (strong, nonatomic) UIViewController *toWrapperVC; // @synthesize toWrapperVC=_toWrapperVC;
@property (nonatomic) long long transitionPhase; // @synthesize transitionPhase=_transitionPhase;
@property (nonatomic) long long transitionType; // @synthesize transitionType=_transitionType;

- (void)adjustDuration:(double)arg1;
- (id)copyForPhase:(long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)init;
- (void)recalculateDurationsAfterAdjustment;

@end

