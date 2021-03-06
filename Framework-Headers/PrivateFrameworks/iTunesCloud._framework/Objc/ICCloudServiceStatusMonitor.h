//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iTunesCloud/ICCloudServiceStatusRemoteMonitoringClient-Protocol.h>

@class ICCloudServerListenerEndpointProvider, NSError, NSMutableSet, NSString, NSUUID, NSXPCConnection;
@protocol OS_dispatch_source;

@interface ICCloudServiceStatusMonitor : NSObject <ICCloudServiceStatusRemoteMonitoringClient>
{
    NSXPCConnection *_cloudServiceStatusMonitorConnection;
    NSError *_cloudServiceStatusMonitorConnectionEstablishmentError;
    NSMutableSet *_activeTransactionIdentifiersForCloudServiceStatusMonitorConnection;
    ICCloudServerListenerEndpointProvider *_listenerEndpointProvider;
    long long _privacyAcknowledgementPolicy;
    BOOL _isObservingCloudServiceStatus;
    NSUUID *_observationToken;
    NSString *_transactionIdentifierForActiveObservationToken;
    int _cloudServerLaunchedNotifyToken;
    NSObject<OS_dispatch_source> *_cloudServerLaunchTimeoutTimer;
    unsigned long long _capabilities;
    BOOL _hasValidCapabilities;
    NSString *_storefrontCountryCode;
    NSString *_storefrontIdentifier;
    struct os_unfair_lock_s _lock;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, getter=isObservingCloudServiceStatus) BOOL observingCloudServiceStatus;
@property long long privacyAcknowledgementPolicy;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_beginObservingCloudServiceStatus;
- (void)_beginTransactionForCloudServiceStatusMonitorConnectionWithIdentifier:(id)arg1;
- (void)_cancelCloudServerLaunchedNotifyToken;
- (id)_cloudServiceStatusMonitorConnectionForTransactionIdentifier:(id)arg1 error:(id *)arg2;
- (void)_cloudServiceStatusMonitorConnectionWasInterrupted;
- (void)_cloudServiceStatusMonitorConnectionWasInvalidated;
- (void)_didBeginObservingCloudServiceStatusWithToken:(id)arg1 transactionIdentifier:(id)arg2;
- (void)_didEndObservingCloudServiceStatusWithToken:(id)arg1 transactionIdentifier:(id)arg2;
- (void)_didEndRequestingUserTokenWithTransactionIdentifier:(id)arg1;
- (void)_endObservingCloudServiceStatusWithToken:(id)arg1;
- (void)_endTransactionForCloudServiceStatusMonitorConnectionWithIdentifier:(id)arg1;
- (id)_handleCloudServiceStatusMonitorConnectionRemoteObjectProxyError:(id)arg1 forRequestWithDescription:(id)arg2 transactionIdentifier:(id)arg3;
- (void)_invalidateCloudServerLaunchTimeoutTimer;
- (void)_invalidateTriggersForCloudServiceStatusObservationRecovery;
- (void)_performCloudServiceStatusMonitorRequestWithDescription:(id)arg1 requestHandler:(CDUnknownBlockType)arg2 errorHandler:(CDUnknownBlockType)arg3;
- (void)_recoverObservingCloudServiceStatus;
- (void)_refreshCloudServiceStatus;
- (void)_registerCloudServerLaunchedNotifyToken;
- (void)_requestCapabilitiesWithPrivacyPromptPolicy:(long long)arg1 requestCapabilitiesWithCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_requestStorefrontCountryCodeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_requestStorefrontIdentifierWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_resetCloudServiceStatusMonitorConnectionAllowingExplicitInvalidation:(BOOL)arg1;
- (void)_scheduleCloudServerLaunchTimeoutTimer;
- (void)_scheduleTriggersForCloudServiceStatusObservationRecovery;
- (void)_updateWithCapabilities:(unsigned long long)arg1 hasValidCapabilities:(BOOL)arg2 transactionIdentifier:(id)arg3;
- (void)_updateWithStorefrontCountryCode:(id)arg1 transactionIdentifier:(id)arg2;
- (void)_updateWithStorefrontIdentifier:(id)arg1 transactionIdentifier:(id)arg2;
- (void)beginObservingCloudServiceStatus;
- (void)capabilitiesDidChange:(unsigned long long)arg1;
- (void)dealloc;
- (void)endObservingCloudServiceStatus;
- (id)init;
- (void)requestCapabilitiesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)requestStorefrontCountryCodeWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)requestStorefrontIdentifierWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)requestUserTokenForDeveloperToken:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)storefrontCountryCodeDidChange:(id)arg1;
- (void)storefrontIdentifierDidChange:(id)arg1;

@end

