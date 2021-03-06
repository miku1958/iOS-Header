//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDDevice, HMDHome, HMDLogEventDispatcher, HMDMediaProfile, HMFMessageDispatcher, NSArray, NSObject, NSUUID;
@protocol OS_dispatch_queue;

@protocol HMDMediaActionRouterDataSource <NSObject>

@property (readonly, copy, nonatomic) NSArray *appleMediaAccessories;
@property (readonly, weak, nonatomic) HMDDevice *companionDevice;
@property (readonly, nonatomic, getter=isCompanionReachable) BOOL companionReachable;
@property (readonly, copy, nonatomic) NSArray *enabledResidents;
@property (readonly, weak) HMDHome *home;
@property (readonly, nonatomic) HMDLogEventDispatcher *logEventDispatcher;
@property (readonly, nonatomic) HMFMessageDispatcher *msgDispatcher;
@property (readonly, nonatomic) NSUUID *uuid;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue;

- (HMDMediaProfile *)mediaProfileWithUUID:(NSUUID *)arg1;
@end

