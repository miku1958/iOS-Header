//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMDCameraRemoteStreamProtocol-Protocol.h>
#import <HomeKitDaemon/HMFLogging-Protocol.h>
#import <HomeKitDaemon/IDSServiceDelegate-Protocol.h>

@class HMDCameraSessionID, IDSService, IDSSession, NSString;
@protocol OS_dispatch_queue;

@interface HMDCameraIDSSessionHandler : NSObject <HMFLogging, IDSServiceDelegate, HMDCameraRemoteStreamProtocol>
{
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDCameraSessionID *_sessionID;
    IDSService *_idsStreamService;
    IDSSession *_idsSession;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) IDSSession *idsSession; // @synthesize idsSession=_idsSession;
@property (readonly, nonatomic) IDSService *idsStreamService; // @synthesize idsStreamService=_idsStreamService;
@property (readonly, nonatomic) HMDCameraSessionID *sessionID; // @synthesize sessionID=_sessionID;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

+ (id)logCategory;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithSessionID:(id)arg1 workQueue:(id)arg2;
- (id)logIdentifier;
- (void)startKeepAlive;

@end
