//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFLogging-Protocol.h>

@class HMFMessageDestination, NSString, NSUUID, _HMContext;

@interface HMPersonSettingsManager : NSObject <HMFLogging>
{
    NSUUID *_UUID;
    _HMContext *_context;
}

@property (readonly, copy) NSUUID *UUID; // @synthesize UUID=_UUID;
@property (readonly) _HMContext *context; // @synthesize context=_context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) HMFMessageDestination *messageDestination;
@property (readonly) Class superclass;

+ (id)logCategory;
+ (id)personSettingsManagerUUIDFromHomeUUID:(id)arg1;
- (void).cxx_destruct;
- (void)_sendMessageWithName:(id)arg1 payload:(id)arg2 responseHandler:(CDUnknownBlockType)arg3;
- (void)fetchClassificationNotificationsEnabledForPersonWithUUID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithContext:(id)arg1 UUID:(id)arg2;
- (id)initWithHome:(id)arg1;
- (id)logIdentifier;
- (void)updateClassificationNotificationsEnabled:(BOOL)arg1 forPersonWithUUID:(id)arg2 completion:(CDUnknownBlockType)arg3;

@end

