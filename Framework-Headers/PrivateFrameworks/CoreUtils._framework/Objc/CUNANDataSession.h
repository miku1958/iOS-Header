//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreUtils/WiFiAwareDataSessionDelegate-Protocol.h>

@class CUNANEndpoint, NSString, WiFiAwareDataSession, WiFiAwarePublisher, WiFiAwarePublisherDataSessionHandle;
@protocol OS_dispatch_queue;

@interface CUNANDataSession : NSObject <WiFiAwareDataSessionDelegate>
{
    CDUnknownBlockType _activateCompletion;
    BOOL _invalidateCalled;
    BOOL _invalidateDone;
    struct LogCategory *_ucat;
    WiFiAwareDataSession *_wfaDataSessionClient;
    unsigned int _localInterfaceIndex;
    unsigned int _trafficFlags;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    NSString *_identifier;
    NSString *_label;
    CDUnknownBlockType _interruptionHandler;
    CDUnknownBlockType _invalidationHandler;
    CUNANEndpoint *_peerEndpoint;
    WiFiAwarePublisher *_publisher;
    WiFiAwarePublisherDataSessionHandle *_wfaDataSessionServer;
    CDUnion_fab80606 _peerAddress;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (copy, nonatomic) CDUnknownBlockType interruptionHandler; // @synthesize interruptionHandler=_interruptionHandler;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property (copy, nonatomic) NSString *label; // @synthesize label=_label;
@property (nonatomic) unsigned int localInterfaceIndex; // @synthesize localInterfaceIndex=_localInterfaceIndex;
@property (nonatomic) CDUnion_fab80606 peerAddress; // @synthesize peerAddress=_peerAddress;
@property (strong, nonatomic) CUNANEndpoint *peerEndpoint; // @synthesize peerEndpoint=_peerEndpoint;
@property (strong, nonatomic) WiFiAwarePublisher *publisher; // @synthesize publisher=_publisher;
@property (readonly) Class superclass;
@property (nonatomic) unsigned int trafficFlags; // @synthesize trafficFlags=_trafficFlags;
@property (strong, nonatomic) WiFiAwarePublisherDataSessionHandle *wfaDataSessionServer; // @synthesize wfaDataSessionServer=_wfaDataSessionServer;

- (void).cxx_destruct;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (BOOL)_dataSession:(id)arg1 confirmedForPeerDataAddress:(id)arg2 serviceSpecificInfo:(id)arg3 error:(id *)arg4;
- (void)_invalidate;
- (void)_invalidated;
- (void)_terminateServerDataSession;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)dataSession:(id)arg1 confirmedForPeerDataAddress:(id)arg2 serviceSpecificInfo:(id)arg3;
- (void)dataSession:(id)arg1 failedToStartWithError:(long long)arg2;
- (void)dataSession:(id)arg1 terminatedWithReason:(long long)arg2;
- (void)dataSessionRequestStarted:(id)arg1;
- (void)dealloc;
- (id)descriptionWithLevel:(int)arg1;
- (id)init;
- (void)invalidate;
- (void)reportIssue:(id)arg1;

@end

