//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDCameraGetSnapshotProtocol-Protocol.h>
#import <HomeKitDaemon/HMDCameraStreamSnapshotCaptureDelegate-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSMapTable, NSMutableDictionary, NSMutableSet, NSString;
@protocol OS_dispatch_queue;

@interface HMDCameraStreamSnapshotHandler : NSObject <HMFLogging, HMDCameraStreamSnapshotCaptureDelegate, HMDCameraGetSnapshotProtocol>
{
    BOOL _streamAvailable;
    BOOL _streamSetupInProgress;
    NSMutableSet *_streamSnapshotCaptures;
    NSMutableSet *_retiredStreamSnapshotCaptures;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_propertyQueue;
    NSString *_logID;
    NSMutableDictionary *_serviceInstanceStreamStatus;
    NSMapTable *_delegateTable;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) NSMapTable *delegateTable; // @synthesize delegateTable=_delegateTable;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *logID; // @synthesize logID=_logID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property (readonly, nonatomic) NSMutableSet *retiredStreamSnapshotCaptures; // @synthesize retiredStreamSnapshotCaptures=_retiredStreamSnapshotCaptures;
@property (readonly, nonatomic) NSMutableDictionary *serviceInstanceStreamStatus; // @synthesize serviceInstanceStreamStatus=_serviceInstanceStreamStatus;
@property (readonly, nonatomic, getter=isStreamAvailable) BOOL streamAvailable; // @synthesize streamAvailable=_streamAvailable;
@property (readonly, nonatomic, getter=isStreamSetupInProgress) BOOL streamSetupInProgress; // @synthesize streamSetupInProgress=_streamSetupInProgress;
@property (readonly, nonatomic) NSMutableSet *streamSnapshotCaptures; // @synthesize streamSnapshotCaptures=_streamSnapshotCaptures;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

+ (id)logCategory;
- (void).cxx_destruct;
- (void)_callDidGetLastSnapshot:(id)arg1;
- (void)_callDidGetNewSnapshot:(id)arg1;
- (void)_callStreamSetupInProgress:(BOOL)arg1;
- (void)addDelegate:(id)arg1 delegateQueue:(id)arg2;
- (void)addVideoStreamInterface:(id)arg1;
- (void)callStreamSetupInProgress:(BOOL)arg1;
- (void)getSnapshot;
- (id)initWithWorkQueue:(id)arg1 services:(id)arg2 logID:(id)arg3;
- (id)logIdentifier;
- (void)removeDelegate:(id)arg1;
- (void)removeVideoStreamInterface:(id)arg1;
- (void)setStreamAvailable:(BOOL)arg1;
- (void)setStreamSetupInProgress:(BOOL)arg1;
- (void)setStreamSetupStatusForService:(id)arg1 inProgress:(BOOL)arg2;
- (void)streamSnapshotCapture:(id)arg1 didGetLastSnapshot:(id)arg2;
- (void)streamSnapshotCapture:(id)arg1 didGetNewSnapshot:(id)arg2;

@end

