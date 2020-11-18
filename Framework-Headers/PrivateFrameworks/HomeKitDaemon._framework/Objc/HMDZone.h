//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKitDaemon/HMFDumpState-Protocol.h>
#import <HomeKitDaemon/HMFMessageReceiver-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDHome, HMFMessageDispatcher, NSMutableArray, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDZone : NSObject <HMFMessageReceiver, HMFDumpState, NSSecureCoding>
{
    NSString *_name;
    NSUUID *_uuid;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableArray *_currentRooms;
    HMDHome *_home;
    HMFMessageDispatcher *_msgDispatcher;
}

@property (strong, nonatomic) NSMutableArray *currentRooms; // @synthesize currentRooms=_currentRooms;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) HMDHome *home; // @synthesize home=_home;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (strong, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property (strong, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_handleAddRoom:(id)arg1;
- (void)_handleRemoveRoom:(id)arg1;
- (void)_handleRename:(id)arg1;
- (void)_registerForMessages;
- (id)assistantObject;
- (void)configure:(id)arg1 queue:(id)arg2;
- (void)dealloc;
- (id)dumpState;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 uuid:(id)arg2 home:(id)arg3 queue:(id)arg4;
- (void)removeRoom:(id)arg1;
- (id)roomWithName:(id)arg1;
- (id)roomWithUUID:(id)arg1;
- (id)rooms;
- (id)url;

@end

