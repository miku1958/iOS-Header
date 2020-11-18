//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/HMDCameraSnapshotIDSRelay.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/IDSServiceDelegate-Protocol.h>
#import <HomeKitDaemon/IDSSessionDelegate-Protocol.h>

@class HMDCameraIDSSessionInviterDeviceVerifier, HMDSnapshotFile, IDSSession, NSMutableData, NSObject, NSString;
@protocol HMDCameraSnapshotIDSRelayReceiverDelegate, OS_dispatch_queue, OS_dispatch_source;

@interface HMDCameraSnapshotIDSRelayReceiver : HMDCameraSnapshotIDSRelay <IDSServiceDelegate, IDSSessionDelegate, HMFLogging>
{
    HMDSnapshotFile *_snapshotFile;
    NSMutableData *_relayData;
    unsigned long long _bytesToReceive;
    unsigned long long _bytesSoFar;
    NSObject<OS_dispatch_source> *_socketSource;
    IDSSession *_idsSession;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id<HMDCameraSnapshotIDSRelayReceiverDelegate> _delegate;
    HMDCameraIDSSessionInviterDeviceVerifier *_sessionInviterDeviceVerifier;
}

@property (nonatomic) unsigned long long bytesSoFar; // @synthesize bytesSoFar=_bytesSoFar;
@property (nonatomic) unsigned long long bytesToReceive; // @synthesize bytesToReceive=_bytesToReceive;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, weak, nonatomic) id<HMDCameraSnapshotIDSRelayReceiverDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) IDSSession *idsSession; // @synthesize idsSession=_idsSession;
@property (strong, nonatomic) NSMutableData *relayData; // @synthesize relayData=_relayData;
@property (readonly, nonatomic) HMDCameraIDSSessionInviterDeviceVerifier *sessionInviterDeviceVerifier; // @synthesize sessionInviterDeviceVerifier=_sessionInviterDeviceVerifier;
@property (readonly, nonatomic) HMDSnapshotFile *snapshotFile; // @synthesize snapshotFile=_snapshotFile;
@property (strong, nonatomic) NSObject<OS_dispatch_source> *socketSource; // @synthesize socketSource=_socketSource;
@property (readonly) Class superclass;

+ (id)logCategory;
- (void).cxx_destruct;
- (void)_callFileReceived:(id)arg1;
- (void)_handleDataFromSocket:(id)arg1;
- (id)_postProcessFileData;
- (void)_startFileReceive;
- (void)dealloc;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 sessionInviterDeviceVerifier:(id)arg3 snapshotFile:(id)arg4 delegate:(id)arg5 delegateQueue:(id)arg6;
- (id)logIdentifier;
- (void)service:(id)arg1 account:(id)arg2 inviteReceivedForSession:(id)arg3 fromID:(id)arg4 withContext:(id)arg5;
- (void)sessionEnded:(id)arg1 withReason:(unsigned int)arg2 error:(id)arg3;
- (void)sessionStarted:(id)arg1;

@end

