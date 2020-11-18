//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitBackingStore/HMBCloudID.h>

#import <HomeKitBackingStore/HMBLocalZoneID-Protocol.h>
#import <HomeKitBackingStore/HMBModelObjectStorage-Protocol.h>

@class CKRecordZoneID, NSArray, NSData, NSString;

@interface HMBCloudZoneID : HMBCloudID <HMBModelObjectStorage, HMBLocalZoneID>
{
    NSData *_token;
    CKRecordZoneID *_zoneID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSArray *labels;
@property (readonly, nonatomic) NSString *name;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSData *token; // @synthesize token=_token;
@property (readonly, copy) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;

+ (id)hmbDecodeData:(id)arg1 fromStorageLocation:(unsigned long long)arg2 error:(id *)arg3;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)hmbEncodeForStorageLocation:(unsigned long long)arg1 error:(id *)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithContainerID:(id)arg1 scope:(long long)arg2 zoneID:(id)arg3;
- (id)initWithContainerID:(id)arg1 scope:(long long)arg2 zoneID:(id)arg3 name:(id)arg4 modelID:(id)arg5;
- (BOOL)isEqual:(id)arg1;

@end
