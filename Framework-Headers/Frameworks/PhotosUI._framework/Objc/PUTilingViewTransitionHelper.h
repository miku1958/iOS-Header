//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/PUInterruptibleViewControllerTransition-Protocol.h>
#import <PhotosUI/PUTilingViewControllerTransition-Protocol.h>

@class NSString, PUAnimationGroup, PUMaximumChangeRateValueFilter, PUTilingView, PUViewControllerTransition;
@protocol PUTilingViewControllerTransition><PUInterruptibleViewControllerTransition, PUTilingViewControllerTransitionEndPoint;

__attribute__((visibility("hidden")))
@interface PUTilingViewTransitionHelper : NSObject <PUTilingViewControllerTransition, PUInterruptibleViewControllerTransition>
{
    BOOL _transitionPaused;
    BOOL _hasStarted;
    double _presentationDuration;
    double _dismissalDuration;
    PUViewControllerTransition<PUTilingViewControllerTransition><PUInterruptibleViewControllerTransition> *_transition;
    long long __currentOperation;
    double __startTime;
    double __progressSpeed;
    double __transitionProgressOffset;
    double __backgroundProgressOffset;
    PUMaximumChangeRateValueFilter *__transitionProgressValueFilter;
    PUMaximumChangeRateValueFilter *__chromeProgressValueFilter;
    PUAnimationGroup *__tilingViewAnimationGroup;
    PUTilingView *__tilingView;
    id<PUTilingViewControllerTransitionEndPoint> __fromEndPoint;
    id<PUTilingViewControllerTransitionEndPoint> __toEndPoint;
    id<PUTilingViewControllerTransitionEndPoint> __endPointOwningTilingView;
    unsigned long long __interactionOptions;
}

@property (nonatomic, setter=_setBackgroundProgressOffset:) double _backgroundProgressOffset; // @synthesize _backgroundProgressOffset=__backgroundProgressOffset;
@property (strong, nonatomic, setter=_setChromeProgressValueFilter:) PUMaximumChangeRateValueFilter *_chromeProgressValueFilter; // @synthesize _chromeProgressValueFilter=__chromeProgressValueFilter;
@property (nonatomic, setter=_setCurrentOperation:) long long _currentOperation; // @synthesize _currentOperation=__currentOperation;
@property (weak, nonatomic, setter=_setEndPointOwningTilingView:) id<PUTilingViewControllerTransitionEndPoint> _endPointOwningTilingView; // @synthesize _endPointOwningTilingView=__endPointOwningTilingView;
@property (weak, nonatomic, setter=_setFromEndPoint:) id<PUTilingViewControllerTransitionEndPoint> _fromEndPoint; // @synthesize _fromEndPoint=__fromEndPoint;
@property (nonatomic, setter=_setInteractionOptions:) unsigned long long _interactionOptions; // @synthesize _interactionOptions=__interactionOptions;
@property (nonatomic, setter=_setProgressSpeed:) double _progressSpeed; // @synthesize _progressSpeed=__progressSpeed;
@property (nonatomic, setter=_setStartTime:) double _startTime; // @synthesize _startTime=__startTime;
@property (weak, nonatomic, setter=_setTilingView:) PUTilingView *_tilingView; // @synthesize _tilingView=__tilingView;
@property (strong, nonatomic, setter=_setTilingViewAnimationGroup:) PUAnimationGroup *_tilingViewAnimationGroup; // @synthesize _tilingViewAnimationGroup=__tilingViewAnimationGroup;
@property (weak, nonatomic, setter=_setToEndPoint:) id<PUTilingViewControllerTransitionEndPoint> _toEndPoint; // @synthesize _toEndPoint=__toEndPoint;
@property (nonatomic, setter=_setTransitionProgressOffset:) double _transitionProgressOffset; // @synthesize _transitionProgressOffset=__transitionProgressOffset;
@property (strong, nonatomic, setter=_setTransitionProgressValueFilter:) PUMaximumChangeRateValueFilter *_transitionProgressValueFilter; // @synthesize _transitionProgressValueFilter=__transitionProgressValueFilter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) double dismissalDuration; // @synthesize dismissalDuration=_dismissalDuration;
@property (nonatomic) BOOL hasStarted; // @synthesize hasStarted=_hasStarted;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) double presentationDuration; // @synthesize presentationDuration=_presentationDuration;
@property (readonly) Class superclass;
@property (weak, nonatomic) PUViewControllerTransition<PUTilingViewControllerTransition><PUInterruptibleViewControllerTransition> *transition; // @synthesize transition=_transition;
@property (nonatomic, getter=isTransitionPaused) BOOL transitionPaused; // @synthesize transitionPaused=_transitionPaused;

+ (void)registerTransitionEndPoint:(id)arg1 forViewController:(id)arg2;
+ (id)transitionEndPointWithViewController:(id)arg1;
+ (void)unregisterTransitionEndPoint:(id)arg1 forViewController:(id)arg2;
- (void).cxx_destruct;
- (long long)_barStyleForEndPoint:(id)arg1;
- (BOOL)_endPointUsesTransientTilingView:(id)arg1;
- (void)_getTransitionProgress:(double *)arg1 backgroundProgress:(double *)arg2 chromeProgress:(double *)arg3;
- (void)_setHasStarted:(BOOL)arg1;
- (void)_setTransitionPaused:(BOOL)arg1;
- (void)_transferView:(id)arg1 toSuperview:(id)arg2;
- (void)animateTransitionWithOperation:(long long)arg1 startedInteractively:(BOOL)arg2;
- (id)init;
- (id)initWithPresentationDuration:(double)arg1 dismissalDuration:(double)arg2;
- (void)pauseTransition;
- (void)pauseTransitionWithOptions:(unsigned long long)arg1;
- (void)resumeTransition:(BOOL)arg1;
- (void)updatePausedTransitionWithProgress:(double)arg1 interactionProgress:(double)arg2;

@end
