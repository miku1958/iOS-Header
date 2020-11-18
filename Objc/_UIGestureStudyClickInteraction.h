//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIInteraction-Protocol.h>
#import <UIKitCore/_UIClickInteractionProgressProvidingDelegate-Protocol.h>
#import <UIKitCore/_UIGestureStudyParticipating-Protocol.h>

@class NSString, UIView;
@protocol _UIClickInteractionProgressProviding;

__attribute__((visibility("hidden")))
@interface _UIGestureStudyClickInteraction : NSObject <_UIClickInteractionProgressProvidingDelegate, UIInteraction, _UIGestureStudyParticipating>
{
    BOOL _usesForce;
    UIView *_view;
    id<_UIClickInteractionProgressProviding> _progressProvider;
    long long _currentState;
    id _target;
    SEL _action;
    double _startTimestamp;
    struct CGPoint _originalCentroid;
}

@property (nonatomic) SEL action; // @synthesize action=_action;
@property (nonatomic) long long currentState; // @synthesize currentState=_currentState;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) double duration;
@property (readonly, nonatomic) NSString *eventName;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) double movement;
@property (nonatomic) struct CGPoint originalCentroid; // @synthesize originalCentroid=_originalCentroid;
@property (strong, nonatomic) id<_UIClickInteractionProgressProviding> progressProvider; // @synthesize progressProvider=_progressProvider;
@property (nonatomic) double startTimestamp; // @synthesize startTimestamp=_startTimestamp;
@property (readonly) Class superclass;
@property (weak, nonatomic) id target; // @synthesize target=_target;
@property (nonatomic) BOOL usesForce; // @synthesize usesForce=_usesForce;
@property (readonly, weak, nonatomic) UIView *view; // @synthesize view=_view;

- (void).cxx_destruct;
- (void)clickProgressProvider:(id)arg1 didUpdateWithOverallProgress:(double)arg2 currentState:(long long)arg3;
- (void)clickProgressProviderDidBegin:(id)arg1;
- (void)clickProgressProviderDidEnd:(id)arg1;
- (void)didMoveToView:(id)arg1;
- (id)initWithTarget:(id)arg1 action:(SEL)arg2 useForce:(BOOL)arg3;
- (struct CGPoint)locationInCoordinateSpace:(id)arg1;
- (void)willMoveToView:(id)arg1;

@end

