//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PointerUIServices/BSInvalidatable-Protocol.h>
#import <PointerUIServices/PSPointerDefaultLaunchingServiceServerToClientInterface-Protocol.h>
#import <PointerUIServices/PSPointerDefaultServiceServerToClientInterface-Protocol.h>

@class BSServiceConnection, NSCountedSet, NSMutableArray, NSString;
@protocol OS_dispatch_queue, PSPointerClientControllerDelegate;

@interface PSPointerClientController : NSObject <PSPointerDefaultServiceServerToClientInterface, PSPointerDefaultLaunchingServiceServerToClientInterface, BSInvalidatable>
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    BSServiceConnection *_nonLaunchingConnection;
    BSServiceConnection *_launchingConnection;
    NSObject<OS_dispatch_queue> *_connectionQueue;
    NSCountedSet *_persistentPointerHideReasons;
    NSMutableArray *_serviceKeepAliveAssertions;
    struct os_unfair_lock_s _invalidationAndConfigurationLock;
    BOOL _hasActivatedLaunchingConnection;
    BOOL _isConnectionActive;
    unsigned int _systemCursorInteractionContextID;
    id<PSPointerClientControllerDelegate> _delegate;
    long long _clientInteractionState;
}

@property (readonly, nonatomic, getter=isClientInteractionEnabled) BOOL clientInteractionEnabled;
@property (readonly, nonatomic) long long clientInteractionState; // @synthesize clientInteractionState=_clientInteractionState;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PSPointerClientControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int systemCursorInteractionContextID; // @synthesize systemCursorInteractionContextID=_systemCursorInteractionContextID;

- (void).cxx_destruct;
- (id)_accessQueue_acquireServiceKeepAliveAssertion;
- (void)_connectionQueue_handleLaunchingConnectionInterruption;
- (void)_connectionQueue_handleNonLaunchingConnectionActivation;
- (void)_connectionQueue_handleNonLaunchingConnectionInterruption;
- (id)_connectionQueue_launchingConnection;
- (void)_didInvalidateRemoteSources;
- (id)acquireServiceKeepAliveAssertion;
- (oneway void)adjustedDecelerationTargetPointerPosition:(id)arg1 velocity:(id)arg2 inContextID:(id)arg3 cursorRegionLookupRadius:(id)arg4 cursorRegionLookupResolution:(id)arg5 lookupConeAngle:(id)arg6 completion:(CDUnknownBlockType)arg7;
- (void)autohidePointerForReason:(unsigned long long)arg1;
- (oneway void)clientInteractionStateDidChange:(id)arg1;
- (void)createContentMatchMoveSourcesWithCount:(unsigned long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)createPointerPortalSourceCollectionWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;
- (void)invalidate;
- (void)invalidateContentMatchMoveSources:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)invalidatePointerPortalSourceCollection:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)persistentlyHidePointerAssertionForReason:(unsigned long long)arg1;
- (void)setActiveHoverRegion:(id)arg1 transitionCompletion:(CDUnknownBlockType)arg2;

@end

