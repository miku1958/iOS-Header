//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFMessageReceiver-Protocol.h>
#import <HomeKit/HMObjectMerge-Protocol.h>

@class HMAccessory, HMSoftwareUpdate, NSString, NSUUID, _HMContext;
@protocol HMSoftwareUpdateControllerDelegate, OS_dispatch_queue;

@interface HMSoftwareUpdateController : NSObject <HMFMessageReceiver, HMObjectMerge>
{
    HMSoftwareUpdate *_availableUpdate;
    HMAccessory *_accessory;
    id<HMSoftwareUpdateControllerDelegate> _delegate;
    NSUUID *_uniqueIdentifier;
    _HMContext *_context;
    NSObject<OS_dispatch_queue> *_propertyQueue;
}

@property (weak) HMAccessory *accessory; // @synthesize accessory=_accessory;
@property (strong) HMSoftwareUpdate *availableUpdate; // @synthesize availableUpdate=_availableUpdate;
@property (strong, nonatomic) _HMContext *context; // @synthesize context=_context;
@property (readonly, getter=isControllable) BOOL controllable;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<HMSoftwareUpdateControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *messageReceiveQueue;
@property (readonly, nonatomic) NSUUID *messageTargetUUID;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *propertyQueue; // @synthesize propertyQueue=_propertyQueue;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;

+ (id)logCategory;
+ (id)namespace;
- (void).cxx_destruct;
- (BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)configureWithContext:(id)arg1;
- (void)fetchAvailableUpdateWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithAccessory:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)logIdentifier;
- (id)messageDestination;
- (void)startUpdate:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end

