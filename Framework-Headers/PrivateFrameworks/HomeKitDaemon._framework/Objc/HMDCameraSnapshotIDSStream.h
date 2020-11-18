//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/IDSServiceDelegate-Protocol.h>

@class HMDCameraSnapshotSessionID, HMFOSTransaction, IDSService, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface HMDCameraSnapshotIDSStream : HMFObject <IDSServiceDelegate, HMFLogging>
{
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDCameraSnapshotSessionID *_sessionID;
    IDSService *_idsProxyService;
    HMFOSTransaction *_snapshotStreamTransaction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) IDSService *idsProxyService; // @synthesize idsProxyService=_idsProxyService;
@property (readonly, nonatomic) HMDCameraSnapshotSessionID *sessionID; // @synthesize sessionID=_sessionID;
@property (strong, nonatomic) HMFOSTransaction *snapshotStreamTransaction; // @synthesize snapshotStreamTransaction=_snapshotStreamTransaction;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

+ (id)logCategory;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2;
- (id)logIdentifier;

@end
