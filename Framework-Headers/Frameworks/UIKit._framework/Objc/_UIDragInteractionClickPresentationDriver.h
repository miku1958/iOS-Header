//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIDragInteractionDriver.h>

@class NSSet, UIDelayedAction;

__attribute__((visibility("hidden")))
@interface _UIDragInteractionClickPresentationDriver : _UIDragInteractionDriver
{
    NSSet *_touches;
    CDUnknownBlockType _itemIterator;
    CDUnknownBlockType _sessionHandler;
    CDUnknownBlockType _liftCompletion;
    UIDelayedAction *_delayedLift;
}

- (void).cxx_destruct;
- (void)_performDelayedLift;
- (void)beginDragWithTouches:(id)arg1 itemIterator:(CDUnknownBlockType)arg2 beginningSessionHandler:(CDUnknownBlockType)arg3;
- (void)beginLiftAtLocation:(struct CGPoint)arg1 useDefaultLiftAnimation:(BOOL)arg2 delay:(double)arg3 completion:(CDUnknownBlockType)arg4;
- (BOOL)canBeginLiftAtLocation:(struct CGPoint)arg1;
- (void)cancel;
- (void)didTransitionToBeginState;
- (void)didTransitionToInactiveState;
- (void)didTransitionToInflightState;
- (BOOL)isLifted;
- (BOOL)isPreparingToDrag;

@end
