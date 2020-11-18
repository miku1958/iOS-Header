//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SpringBoard/BSDescriptionProviding-Protocol.h>
#import <SpringBoard/NSXPCListenerDelegate-Protocol.h>
#import <SpringBoard/SBStatusBarStyleOverridesAssertionServer-Protocol.h>

@class FBWorkspaceEventQueue, NSMapTable, NSMutableArray, NSString, NSXPCListener, SBStatusBarTapManager;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface SBStatusBarStyleOverridesAssertionManager : NSObject <NSXPCListenerDelegate, SBStatusBarStyleOverridesAssertionServer, BSDescriptionProviding>
{
    NSMutableArray *_runningUpdateTransactions;
    int _statusBarStyleOverrides;
    int _exclusiveStatusBarStyleOverrides;
    NSXPCListener *_xpcListener;
    NSMapTable *_assertionsByIdentifierByClientConnection;
    NSMapTable *_assertionsByStyleOverride;
    NSObject<OS_dispatch_queue> *_internalQueue;
    NSMutableArray *_coordinatorConnectionsByStyleOverride;
    NSObject<OS_dispatch_source> *_assertionTimerSource;
    FBWorkspaceEventQueue *_eventQueue;
    SBStatusBarTapManager *_statusBarTapManager;
}

@property (strong, nonatomic) NSObject<OS_dispatch_source> *assertionTimerSource; // @synthesize assertionTimerSource=_assertionTimerSource;
@property (strong, nonatomic) NSMapTable *assertionsByIdentifierByClientConnection; // @synthesize assertionsByIdentifierByClientConnection=_assertionsByIdentifierByClientConnection;
@property (strong, nonatomic) NSMapTable *assertionsByStyleOverride; // @synthesize assertionsByStyleOverride=_assertionsByStyleOverride;
@property (strong, nonatomic) NSMutableArray *coordinatorConnectionsByStyleOverride; // @synthesize coordinatorConnectionsByStyleOverride=_coordinatorConnectionsByStyleOverride;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) FBWorkspaceEventQueue *eventQueue; // @synthesize eventQueue=_eventQueue;
@property (nonatomic) int exclusiveStatusBarStyleOverrides; // @synthesize exclusiveStatusBarStyleOverrides=_exclusiveStatusBarStyleOverrides;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *internalQueue; // @synthesize internalQueue=_internalQueue;
@property (nonatomic) int statusBarStyleOverrides; // @synthesize statusBarStyleOverrides=_statusBarStyleOverrides;
@property (readonly, nonatomic) SBStatusBarTapManager *statusBarTapManager; // @synthesize statusBarTapManager=_statusBarTapManager;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSXPCListener *xpcListener; // @synthesize xpcListener=_xpcListener;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (int)_internalQueue_addAssertionByStyleOverrides:(id)arg1;
- (id)_internalQueue_coordinatorClientForConnection:(id)arg1;
- (id)_internalQueue_coordinatorClientForStyleOverrides:(int)arg1;
- (void)_internalQueue_deactivateStatusBarStyleOverridesAssertionsWithIdentifiers:(id)arg1 forClientConnection:(id)arg2;
- (int)_internalQueue_removeAssertionByStyleOverrides:(id)arg1;
- (void)_invalidateAssertionsWithIdentifiers:(id)arg1 forClientConnection:(id)arg2;
- (void)_mainQueue_getStatusBarStyleOverridesToSuppressAndStatusStringsByStyleForForegroundApplicationSceneHandles:(id)arg1 withHandler:(CDUnknownBlockType)arg2;
- (void)_postStatusStringsByStyle:(id)arg1;
- (id)_statusStringsByStyleForActiveAssertionsByStyleOverride:(id)arg1 inactiveAssertionsByStyleOverride:(id)arg2;
- (void)_updateAppSceneSettingsForForegroundAppsAndPostAddedStyleOverrides:(int)arg1 removedStyleOverrides:(int)arg2;
- (BOOL)_verifyCoordinatorEntitlementForStyleOverride:(id)arg1 onConnection:(id)arg2;
- (void)activateStatusBarStyleOverridesAssertions:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)deactivateStatusBarStyleOverridesAssertionsWithIdentifiers:(id)arg1;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (BOOL)handleTapForStatusBarStyleOverride:(int)arg1;
- (id)init;
- (void)invalidateStatusBarStyleOverridesAssertions:(id)arg1;
- (BOOL)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)setRegisteredOverrides:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)setStatusString:(id)arg1 forAssertionWithIdentifier:(id)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;
- (void)unregisterCoordinatorRegistrationForStyleOverrides:(id)arg1;
- (void)updateForegroundApplicationSceneHandles:(id)arg1 withOptions:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;

@end
