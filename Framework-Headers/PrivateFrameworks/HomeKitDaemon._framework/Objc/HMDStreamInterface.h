//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDCameraNetworkConfig, HMDCameraSessionID, NSObject, NSString;
@protocol HMDCameraRemoteStreamProtocol, OS_dispatch_queue;

@interface HMDStreamInterface : HMFObject <HMFLogging>
{
    int _localRTPSocket;
    unsigned long long _streamInterfaceState;
    HMDCameraNetworkConfig *_localNetworkConfig;
    HMDCameraSessionID *_sessionID;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    id<HMDCameraRemoteStreamProtocol> _sessionHandler;
    NSObject<OS_dispatch_queue> *_propertyQueue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) HMDCameraNetworkConfig *localNetworkConfig; // @synthesize localNetworkConfig=_localNetworkConfig;
@property (nonatomic) int localRTPSocket; // @synthesize localRTPSocket=_localRTPSocket;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property (readonly, nonatomic) id<HMDCameraRemoteStreamProtocol> sessionHandler; // @synthesize sessionHandler=_sessionHandler;
@property (readonly, nonatomic) HMDCameraSessionID *sessionID; // @synthesize sessionID=_sessionID;
@property (nonatomic) unsigned long long streamInterfaceState; // @synthesize streamInterfaceState=_streamInterfaceState;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

+ (id)logCategory;
- (void).cxx_destruct;
- (void)dealloc;
- (id)extractNetworkConfig:(int)arg1 peerNameExtractor:(CDUnknownFunctionPointerType)arg2;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 delegateQueue:(id)arg3 localNetworkConfig:(id)arg4 sessionHandler:(id)arg5;
- (BOOL)loadMiscFields:(id)arg1;
- (id)logIdentifier;
- (int)openSocket;

@end

