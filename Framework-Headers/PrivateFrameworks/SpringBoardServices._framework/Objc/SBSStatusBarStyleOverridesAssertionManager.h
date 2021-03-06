//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoardServices/BSDescriptionProviding-Protocol.h>
#import <SpringBoardServices/SBSStatusBarStyleOverridesAssertionClient-Protocol.h>

@class NSMapTable, NSMutableDictionary, NSString, NSXPCConnection, SBSStatusBarStyleOverridesCoordinator;
@protocol OS_dispatch_queue;

@interface SBSStatusBarStyleOverridesAssertionManager : NSObject <BSDescriptionProviding, SBSStatusBarStyleOverridesAssertionClient>
{
    NSMapTable *_assertionsByIdentifier;
    NSMutableDictionary *_acquisitionHandlerEntriesByIdentifier;
    NSXPCConnection *_sbXPCConnection;
    NSObject<OS_dispatch_queue> *_internalQueue;
    SBSStatusBarStyleOverridesCoordinator *_internalQueue_styleOverrideCoordinator;
    NSObject<OS_dispatch_queue> *_coordinatorCalloutQueue;
}

@property (strong, nonatomic) NSMutableDictionary *acquisitionHandlerEntriesByIdentifier; // @synthesize acquisitionHandlerEntriesByIdentifier=_acquisitionHandlerEntriesByIdentifier;
@property (strong, nonatomic) NSMapTable *assertionsByIdentifier; // @synthesize assertionsByIdentifier=_assertionsByIdentifier;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *coordinatorCalloutQueue; // @synthesize coordinatorCalloutQueue=_coordinatorCalloutQueue;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property (weak, nonatomic) SBSStatusBarStyleOverridesCoordinator *internalQueue_styleOverrideCoordinator; // @synthesize internalQueue_styleOverrideCoordinator=_internalQueue_styleOverrideCoordinator;
@property (strong, nonatomic) NSXPCConnection *sbXPCConnection; // @synthesize sbXPCConnection=_sbXPCConnection;
@property (readonly) Class superclass;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_handleXPCConnectionInvalidation;
- (void)_internalQueue_removeStatusBarStyleOverridesAssertionWithIdentifier:(id)arg1 invalidate:(BOOL)arg2;
- (void)_internalQueue_setupXPCConnectionIfNecessary;
- (void)_internalQueue_updateRegistrationForCoordinator:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)_reactivateAssertions;
- (void)_registerStyleOverrideCoordinatorAfterInterruption;
- (void)addStatusBarStyleOverridesAssertion:(id)arg1 withHandler:(CDUnknownBlockType)arg2 onQueue:(id)arg3;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)init;
- (void)invalidateStatusBarStyleOverridesAssertionsWithIdentifiers:(id)arg1;
- (void)removeStatusBarStyleOverridesAssertion:(id)arg1;
- (void)statusBarTappedWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)unregisterCoordinator;
- (void)updateRegistrationForCoordinator:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)updateStatusStringForAssertion:(id)arg1;

@end

