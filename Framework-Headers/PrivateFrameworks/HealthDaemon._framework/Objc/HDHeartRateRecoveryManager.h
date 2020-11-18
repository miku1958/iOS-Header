//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/HDAssertionObserver-Protocol.h>

@class HDAssertionManager, NSString;
@protocol OS_dispatch_queue;

@interface HDHeartRateRecoveryManager : NSObject <HDAssertionObserver>
{
    NSObject<OS_dispatch_queue> *_queue;
    HDAssertionManager *_assertionManager;
    void *_powerAssertion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)assertionManager:(id)arg1 assertionInvalidated:(id)arg2;
- (void)assertionManager:(id)arg1 assertionTaken:(id)arg2;
- (id)createAndTakeAssertionForOwnerIdentifier:(id)arg1 sessionStateController:(id)arg2;
- (id)init;

@end

