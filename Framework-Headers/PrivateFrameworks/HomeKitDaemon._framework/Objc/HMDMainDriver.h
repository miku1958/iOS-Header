//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class HMDAccessoryBrowser, HMDCentralMessageDispatcher, HMDCloudDataSyncManager, HMDHomeManager, HMDMessageFilterChain, HMDRemoteIdentityRegistry, HMDXpcServer, HMFMessageDispatcher;
@protocol OS_dispatch_queue;

@interface HMDMainDriver : NSObject
{
    NSObject<OS_dispatch_queue> *_workQueue;
    HMDHomeManager *_homeManager;
    HMDAccessoryBrowser *_accessoryBrowser;
    HMDXpcServer *_xpcServer;
    HMDCentralMessageDispatcher *_messageDispatcher;
    HMFMessageDispatcher *_notificationRelayDispatcher;
    HMDCloudDataSyncManager *_cloudDataSyncManager;
    HMDMessageFilterChain *_msgFilterChain;
    HMDRemoteIdentityRegistry *_identityRegistry;
}

@property (strong, nonatomic) HMDAccessoryBrowser *accessoryBrowser; // @synthesize accessoryBrowser=_accessoryBrowser;
@property (strong, nonatomic) HMDCloudDataSyncManager *cloudDataSyncManager; // @synthesize cloudDataSyncManager=_cloudDataSyncManager;
@property (strong, nonatomic) HMDHomeManager *homeManager; // @synthesize homeManager=_homeManager;
@property (strong, nonatomic) HMDRemoteIdentityRegistry *identityRegistry; // @synthesize identityRegistry=_identityRegistry;
@property (strong, nonatomic) HMDCentralMessageDispatcher *messageDispatcher; // @synthesize messageDispatcher=_messageDispatcher;
@property (strong, nonatomic) HMDMessageFilterChain *msgFilterChain; // @synthesize msgFilterChain=_msgFilterChain;
@property (strong, nonatomic) HMFMessageDispatcher *notificationRelayDispatcher; // @synthesize notificationRelayDispatcher=_notificationRelayDispatcher;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property (strong, nonatomic) HMDXpcServer *xpcServer; // @synthesize xpcServer=_xpcServer;

+ (id)driver;
- (void).cxx_destruct;
- (void)executeBTAJob:(const char *)arg1 withXPCDict:(id)arg2;
- (id)init;
- (void)initBackgroundTaskAgent;
- (void)logError:(id)arg1 component:(id)arg2;
- (void)start;

@end
