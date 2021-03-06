//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <IdleTimerServices/ITIdleTimerStateServerDelegate-Protocol.h>

@class ITIdleTimerStateServer, NSMutableDictionary, NSString;
@protocol BSInvalidatable, ITIdleTimerStateServiceDelegate, OS_dispatch_queue;

@interface ITIdleTimerStateService : NSObject <ITIdleTimerStateServerDelegate>
{
    ITIdleTimerStateServer *_server;
    NSObject<OS_dispatch_queue> *_calloutDispatchQueue;
    NSMutableDictionary *_assertionsByReason;
    NSMutableDictionary *_assertionReasonsByClientID;
    id<BSInvalidatable> _stateCaptureAssertion;
    id<ITIdleTimerStateServiceDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ITIdleTimerStateServiceDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addStateCaptureHandler;
- (id)_identifierForClientProcess:(id)arg1;
- (BOOL)addIdleTimerConfiguration:(id)arg1 fromProcess:(id)arg2 forReason:(id)arg3;
- (BOOL)clientConfiguration:(id)arg1 handleIdleEvent:(unsigned long long)arg2;
- (void)clientDidDisconnect:(id)arg1;
- (void)dealloc;
- (id)initWithDispatchQueue:(id)arg1;
- (id)initWithDispatchQueue:(id)arg1 delegate:(id)arg2;
- (BOOL)isIdleTimerServiceAvailable;
- (void)removeIdleTimerConfigurationFromProcess:(id)arg1 forReason:(id)arg2;

@end

