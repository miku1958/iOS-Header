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

@class HMDApplicationData, HMDHome, HMFMessageDispatcher, NSArray, NSDate, NSMutableArray, NSObject, NSSet, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDActionSet : HMFObject <HMDHomeMessageReceiver, NSSecureCoding, HMFDumpState, HMDBackingStoreObjectProtocol>
{
    BOOL _executionInProgress;
    NSString *_name;
    NSString *_type;
    NSUUID *_uuid;
    NSDate *_lastExecutionDate;
    NSObject<OS_dispatch_queue> *_workQueue;
    HMFMessageDispatcher *_msgDispatcher;
    HMDHome *_home;
    NSMutableArray *_currentActions;
    HMDApplicationData *_appData;
}

@property (readonly, nonatomic) NSArray *actions;
@property (strong, nonatomic) HMDApplicationData *appData; // @synthesize appData=_appData;
@property (strong, nonatomic) NSMutableArray *currentActions; // @synthesize currentActions=_currentActions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL executionInProgress; // @synthesize executionInProgress=_executionInProgress;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) HMDHome *home; // @synthesize home=_home;
@property (strong, nonatomic) NSDate *lastExecutionDate; // @synthesize lastExecutionDate=_lastExecutionDate;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, copy) NSSet *messageReceiverChildren;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (strong, nonatomic) HMFMessageDispatcher *msgDispatcher; // @synthesize msgDispatcher=_msgDispatcher;
@property (strong, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) NSString *serializedIdentifier;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSString *type; // @synthesize type=_type;
@property (readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

+ (BOOL)hasMessageReceiverChildren;
+ (BOOL)isBuiltinActionSetType:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_execute:(id)arg1 captureCurrentState:(BOOL)arg2 writeRequestTuples:(id)arg3;
- (void)_executeWriteAction:(id)arg1 captureCurrentState:(BOOL)arg2 writeRequestTuples:(id)arg3;
- (BOOL)_fixupActions;
- (id)_generateOverallError:(id)arg1 forSource:(unsigned long long)arg2;
- (void)_handleAddActionRequest:(id)arg1;
- (void)_handleAddActionTransaction:(id)arg1 message:(id)arg2;
- (void)_handleRemoveAction:(id)arg1 message:(id)arg2;
- (void)_handleRemoveActionRequest:(id)arg1;
- (void)_handleRemoveActionTransaction:(id)arg1 message:(id)arg2;
- (void)_handleRemoveAppDataModel:(id)arg1 message:(id)arg2;
- (void)_handleRenameActionSetTransaction:(id)arg1 message:(id)arg2;
- (void)_handleRenameRequest:(id)arg1;
- (void)_handleReplaceActionValueRequest:(id)arg1;
- (void)_handleUpdateAppDataModel:(id)arg1 message:(id)arg2;
- (void)_issueReadRequests:(id)arg1;
- (void)_issueWriteRequests:(id)arg1 readResponse:(id)arg2 message:(id)arg3;
- (void)_logDuetEvent:(id)arg1 endDate:(id)arg2 message:(id)arg3;
- (void)_logDuetRoomEvent;
- (id)_logExecuteAction:(id)arg1;
- (void)_processActionSetModelUpdated:(id)arg1 message:(id)arg2;
- (void)_registerForMessages;
- (void)_removeAction:(id)arg1 message:(id)arg2;
- (id)actionWithUUID:(id)arg1;
- (id)allCharacteristicsInActionsForServices:(id)arg1;
- (id)assistantObject;
- (id)backingStoreObjects:(long long)arg1;
- (BOOL)configure:(id)arg1 messageDispatcher:(id)arg2 queue:(id)arg3;
- (BOOL)containsSecureCharacteristic;
- (BOOL)containsUnsecuringAction;
- (void)dealloc;
- (id)dumpState;
- (void)encodeWithCoder:(id)arg1;
- (void)execute:(id)arg1;
- (void)executeWithTriggerSource:(id)arg1 captureCurrentState:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)handleExecutionCompleted:(id)arg1 startDate:(id)arg2 error:(id)arg3 readResponse:(id)arg4 response:(id)arg5;
- (id)initWithCoder:(id)arg1;
- (id)initWithName:(id)arg1 uuid:(id)arg2 type:(id)arg3 home:(id)arg4 queue:(id)arg5;
- (id)messageDestination;
- (id)modelObjectWithChangeType:(unsigned long long)arg1;
- (void)removeAccessory:(id)arg1;
- (void)removeActionForCharacteristic:(id)arg1;
- (void)removeService:(id)arg1;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (id)url;

@end
