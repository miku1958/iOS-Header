//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/HFHomeKitObject-Protocol.h>

@class HMAccessory, NSDate, NSError, NSString, NSUUID, SFDevice;

@interface HFDiscoveredAccessory : NSObject <HFHomeKitObject>
{
    NSUUID *_accessoryUUID;
    NSString *_accessoryName;
    HMAccessory *_accessory;
    SFDevice *_sharingDevice;
    NSDate *_discoveryDate;
    unsigned long long _status;
    NSError *_error;
}

@property (strong, nonatomic) HMAccessory *accessory; // @synthesize accessory=_accessory;
@property (strong, nonatomic) NSString *accessoryName; // @synthesize accessoryName=_accessoryName;
@property (readonly, nonatomic) NSUUID *accessoryUUID; // @synthesize accessoryUUID=_accessoryUUID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDate *discoveryDate; // @synthesize discoveryDate=_discoveryDate;
@property (readonly, nonatomic) NSError *error; // @synthesize error=_error;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) SFDevice *sharingDevice; // @synthesize sharingDevice=_sharingDevice;
@property (readonly, nonatomic) unsigned long long status; // @synthesize status=_status;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSUUID *uniqueIdentifier;

- (void).cxx_destruct;
- (id)_descriptionForStatus:(unsigned long long)arg1;
- (id)identify;
- (id)init;
- (id)initWithAccessory:(id)arg1;
- (id)initWithAccessoryUUID:(id)arg1 accessoryName:(id)arg2;
- (id)initWithSharingDevice:(id)arg1;
- (void)updateStatus:(unsigned long long)arg1 error:(id)arg2;

@end

