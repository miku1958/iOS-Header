//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/UIDragGestureRecognizerDelegate-Protocol.h>
#import <UIKitCore/UIInteraction-Protocol.h>
#import <UIKitCore/UIInteraction_Internal-Protocol.h>
#import <UIKitCore/UISpringLoadedInteractionBehaviorDelegate-Protocol.h>

@class NSString, UIDelayedAction, UISpringLoadedInteractionContextImpl, UIView;
@protocol UISpringLoadedInteractionBehavior, UISpringLoadedInteractionEffect;

@interface UISpringLoadedInteraction : NSObject <UISpringLoadedInteractionBehaviorDelegate, UIInteraction_Internal, UIDragGestureRecognizerDelegate, UIInteraction>
{
    UIView *_view;
    double _possibleStateDuration;
    id<UISpringLoadedInteractionBehavior> _interactionBehavior;
    id<UISpringLoadedInteractionEffect> _interactionEffect;
    UISpringLoadedInteractionContextImpl *_context;
    CDUnknownBlockType _handler;
    UIDelayedAction *_emphasizeAction;
    UIDelayedAction *_activateAction;
}

@property (nonatomic, setter=_setPossibleStateDuration:) double _possibleStateDuration; // @synthesize _possibleStateDuration;
@property (strong, nonatomic) UIDelayedAction *activateAction; // @synthesize activateAction=_activateAction;
@property (strong, nonatomic) UISpringLoadedInteractionContextImpl *context; // @synthesize context=_context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UIDelayedAction *emphasizeAction; // @synthesize emphasizeAction=_emphasizeAction;
@property (copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<UISpringLoadedInteractionBehavior> interactionBehavior; // @synthesize interactionBehavior=_interactionBehavior;
@property (readonly, nonatomic) id<UISpringLoadedInteractionEffect> interactionEffect; // @synthesize interactionEffect=_interactionEffect;
@property (readonly) Class superclass;
@property (weak, nonatomic) UIView *view; // @synthesize view=_view;

+ (id)_blinkEffect;
+ (id)_defaultInteractionBehavior;
+ (id)hysteresisBehaviorWithBeginningVelocity:(double)arg1 cancelingVelocity:(double)arg2;
+ (id)springLoadedInteractionWithHandler:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (void)_activateSpringLoading:(id)arg1;
- (void)_cancelActions;
- (id)_dynamicGestureRecognizersForEvent:(id)arg1;
- (void)_emphasizeSpringLoading:(id)arg1;
- (void)_reloadSpringLoadedInteractionBehavior;
- (void)_resetBehavior;
- (BOOL)_shouldAllowInteractionWithContext:(id)arg1;
- (void)_springloadedStateChanged:(id)arg1;
- (void)_startActivateAction;
- (void)_startEmphasizeAction;
- (void)didMoveToView:(id)arg1;
- (id)initWithActivationHandler:(CDUnknownBlockType)arg1;
- (id)initWithInteractionBehavior:(id)arg1 interactionEffect:(id)arg2 activationHandler:(CDUnknownBlockType)arg3;
- (void)setState:(long long)arg1;
- (void)willMoveToView:(id)arg1;

@end

