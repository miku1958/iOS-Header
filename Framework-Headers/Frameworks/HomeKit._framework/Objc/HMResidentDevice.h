//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HomeKit/HMFLogging-Protocol.h>
#import <HomeKit/HMFObject-Protocol.h>
#import <HomeKit/HMObjectMerge-Protocol.h>
#import <HomeKit/NSSecureCoding-Protocol.h>

@class HMDevice, HMFUnfairLock, HMHome, NSArray, NSString, NSUUID, _HMContext;
@protocol HMResidentDeviceDelegate;

@interface HMResidentDevice : NSObject <HMFLogging, HMFObject, HMObjectMerge, NSSecureCoding>
{
    HMFUnfairLock *_lock;
    BOOL _enabled;
    NSUUID *_uniqueIdentifier;
    unsigned long long _status;
    HMHome *_home;
    NSUUID *_accountIdentifier;
    unsigned long long _capabilities;
    id<HMResidentDeviceDelegate> _delegate;
    HMDevice *_device;
    _HMContext *_context;
    NSUUID *_uuid;
}

@property (copy, nonatomic) NSUUID *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property unsigned long long capabilities; // @synthesize capabilities=_capabilities;
@property (strong, nonatomic) _HMContext *context; // @synthesize context=_context;
@property (readonly, getter=isCurrentDevice) BOOL currentDevice;
@property (readonly, copy) NSString *debugDescription;
@property (weak) id<HMResidentDeviceDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) HMDevice *device; // @synthesize device=_device;
@property (getter=isEnabled) BOOL enabled; // @synthesize enabled=_enabled;
@property (readonly) unsigned long long hash;
@property (weak) HMHome *home; // @synthesize home=_home;
@property (readonly, copy) NSString *name;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property unsigned long long status; // @synthesize status=_status;
@property (readonly) Class superclass;
@property (readonly, copy) NSUUID *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property (readonly, copy, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;

+ (id)logCategory;
+ (id)shortDescription;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)__configureWithContext:(id)arg1 home:(id)arg2;
- (BOOL)_mergeWithNewObject:(id)arg1 operations:(id)arg2;
- (void)_unconfigure;
- (void)_unconfigureContext;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)handleRuntimeStateUpdate:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)logIdentifier;
- (void)updatedEnabled:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;

@end
