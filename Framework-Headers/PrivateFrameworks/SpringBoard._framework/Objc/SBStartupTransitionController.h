//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>
#import <SpringBoard/BSTransactionObserver-Protocol.h>

@class BSTransaction, BSTransactionBlockObserver, NSSet, NSString, SBInitialRestartState, SBStartupTransitionContextPersistence, SBStartupTransitionFactory;
@protocol SBStartupTransition;

@interface SBStartupTransitionController : NSObject <BSTransactionObserver, BSDescriptionProviding>
{
    SBInitialRestartState *_initialRestartState;
    SBStartupTransitionContextPersistence *_transitionContextPersistence;
    SBStartupTransitionFactory *_transitionFactory;
    BSTransaction<SBStartupTransition> *_transition;
    BSTransactionBlockObserver *_transitionObserver;
    BOOL _ranOnce;
    NSSet *_renderOverlayDismissActions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BSTransaction<SBStartupTransition> *startupTransition; // @synthesize startupTransition=_transition;
@property (readonly) Class superclass;
@property (strong, nonatomic, getter=_transitionContextPersistence, setter=_setTransitionContextPersistence:) SBStartupTransitionContextPersistence *transitionContextPersistence; // @synthesize transitionContextPersistence=_transitionContextPersistence;
@property (strong, nonatomic, getter=_transitionFactory, setter=_setTransitionFactory:) SBStartupTransitionFactory *transitionFactory; // @synthesize transitionFactory=_transitionFactory;

- (void).cxx_destruct;
- (void)_saveContextFromTransitionContext:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)initWithInitialRestartState:(id)arg1;
- (void)initializeAndRunStartupTransition:(CDUnknownBlockType)arg1;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)transactionDidBegin:(id)arg1;
- (void)transactionDidComplete:(id)arg1;

@end
