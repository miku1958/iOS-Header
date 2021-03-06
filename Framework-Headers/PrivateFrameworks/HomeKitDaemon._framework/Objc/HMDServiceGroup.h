//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDBackingStoreObjectProtocol-Protocol.h>
#import <HomeKitDaemon/HMDHomeMessageReceiver-Protocol.h>
#import <HomeKitDaemon/HMFDumpState-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDApplicationData, HMDHome, HMFMessageDispatcher, NSMutableArray, NSMutableDictionary, NSObject, NSSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDServiceGroup : HMFObject <HMDHomeMessageReceiver, HMFDumpState, NSSecureCoding, HMDBackingStoreObjectProtocol>
{
    NSString *_name;
    NSUUID *_uuid;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSMutableArray *_serviceUUIDs;
    NSMutableDictionary *_serviceMapping;
    HMDHome *_home;
    HMFMessageDispatcher *_msgDispatcher;
    HMDApplicationData *_appData;
}

@property (strong, nonatomic) HMDApplicationData *appData; // @synthesize appData=_appData;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) HMDHome *home; // @synthesize home=_home;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (strong, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property (strong, nonatomic) NSString *name; // @synthesize name=_name;
@property (strong, nonatomic) NSMutableDictionary *serviceMapping; // @synthesize serviceMapping=_serviceMapping;
@property (strong, nonatomic) NSMutableArray *serviceUUIDs; // @synthesize serviceUUIDs=_serviceUUIDs;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

+ (BOOL)hasMessageReceiverChildren;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_handleAddServiceRequest:(id)arg1;
- (void)_handleRemoveAppDataModel:(id)arg1 message:(id)arg2;
- (void)_handleRemoveServiceRequest:(id)arg1;
- (void)_handleRenameRequest:(id)arg1;
- (void)_handleUpdateAppDataModel:(id)arg1 message:(id)arg2;
- (id)_handleUpdateNameTransaction:(id)arg1 requestMessage:(id)arg2;
- (id)_handleUpdateServicesTransaction:(id)arg1 requestMessage:(id)arg2;
- (void)_registerForMessages;
- (void)_transactionServiceGroupUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)assistantObject;
- (id)backingStoreObjects:(long long)arg1;
- (void)configure:(id)arg1 queue:(id)arg2;
- (void)dealloc;
- (id)dumpState;
- (void)encodeWithCoder:(id)arg1;
- (void)fixupServiceGroup;
- (void)fixupServicesForReplacementAccessory:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 uuid:(id)arg2 home:(id)arg3 queue:(id)arg4;
- (id)modelObjectWithChangeType:(unsigned long long)arg1;
- (void)removeService:(id)arg1;
- (void)removeServicesForAccessory:(id)arg1;
- (void)setServiceIfPresent:(id)arg1;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)updateServiceGroupWithModel:(id)arg1 message:(id)arg2;
- (id)urlString;

@end

