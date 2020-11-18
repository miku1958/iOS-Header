//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSString;

@interface HMDHomeRemoteNotification : HMFObject <HMFLogging>
{
    NSString *_updateIdentifier;
    id _value;
    NSString *_accessoryUUID;
    NSString *_serviceInstanceID;
    NSString *_characteristicInstanceID;
}

@property (readonly, nonatomic) NSString *accessoryUUID; // @synthesize accessoryUUID=_accessoryUUID;
@property (readonly, nonatomic) NSString *characteristicInstanceID; // @synthesize characteristicInstanceID=_characteristicInstanceID;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *serviceInstanceID; // @synthesize serviceInstanceID=_serviceInstanceID;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *updateIdentifier; // @synthesize updateIdentifier=_updateIdentifier;
@property (readonly, nonatomic) id value; // @synthesize value=_value;

+ (id)logCategory;
- (void).cxx_destruct;
- (id)initWithAccessoryUUID:(id)arg1 serviceInstanceID:(id)arg2 characteristicInstanceID:(id)arg3 updateIdentifier:(id)arg4 value:(id)arg5;
- (id)logIdentifier;
- (BOOL)matchesAccessoryUUID:(id)arg1 serviceInstanceID:(id)arg2 characteristicInstanceID:(id)arg3;
- (BOOL)matchesCharacterisitic:(id)arg1;

@end

