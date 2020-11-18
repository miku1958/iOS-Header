//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMDAccessory, HMDCameraSessionID, HMDSnapshotFile, HMDSnapshotRequestHandler, NSDictionary, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDCameraSnapshotReceiver : NSObject <HMFLogging>
{
    NSUUID *_uniqueIdentifier;
    HMDCameraSessionID *_sessionID;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDAccessory *_accessory;
    NSDictionary *_options;
    NSObject<OS_dispatch_queue> *_delegateQueue;
    HMDSnapshotFile *_snapshotFile;
    HMDSnapshotRequestHandler *_snapshotRequestHandler;
}

@property (readonly, weak, nonatomic) HMDAccessory *accessory; // @synthesize accessory=_accessory;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue; // @synthesize delegateQueue=_delegateQueue;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property (readonly, nonatomic) HMDCameraSessionID *sessionID; // @synthesize sessionID=_sessionID;
@property (strong, nonatomic) HMDSnapshotFile *snapshotFile; // @synthesize snapshotFile=_snapshotFile;
@property (readonly, nonatomic) HMDSnapshotRequestHandler *snapshotRequestHandler; // @synthesize snapshotRequestHandler=_snapshotRequestHandler;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

+ (id)logCategory;
- (void).cxx_destruct;
- (void)_sendConfirmationToResident:(CDUnknownBlockType)arg1;
- (void)_sendRequestToResident:(CDUnknownBlockType)arg1;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2 options:(id)arg3 accessory:(id)arg4 delegateQueue:(id)arg5 uniqueIdentifier:(id)arg6 snapshotRequestHandler:(id)arg7;
- (id)logIdentifier;

@end
