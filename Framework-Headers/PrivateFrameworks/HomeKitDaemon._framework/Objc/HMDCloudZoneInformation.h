//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMDBackingStoreObjectProtocol-Protocol.h>
#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class NSString, NSUUID;

@interface HMDCloudZoneInformation : HMFObject <NSSecureCoding, HMDBackingStoreObjectProtocol>
{
    BOOL _fetchFailed;
    BOOL _firstFetch;
    BOOL _zoneCreated;
    BOOL _handlesCloudRecord;
    NSUUID *_uuid;
    NSString *_ownerName;
    long long _schemaVersion;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, getter=didFetchFailed) BOOL fetchFailed; // @synthesize fetchFailed=_fetchFailed;
@property (nonatomic, getter=isFirstFetch) BOOL firstFetch; // @synthesize firstFetch=_firstFetch;
@property (nonatomic, getter=doesHandlesCloudRecord) BOOL handlesCloudRecord; // @synthesize handlesCloudRecord=_handlesCloudRecord;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSString *ownerName; // @synthesize ownerName=_ownerName;
@property (nonatomic) long long schemaVersion; // @synthesize schemaVersion=_schemaVersion;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSUUID *uuid; // @synthesize uuid=_uuid;
@property (nonatomic, getter=isZoneCreated) BOOL zoneCreated; // @synthesize zoneCreated=_zoneCreated;

+ (id)cloudZoneInformationWithCloudZones:(id)arg1;
+ (id)cloudZonesArrayWithCloudZones:(id)arg1;
+ (id)cloudZonesWithDictionary:(id)arg1;
+ (id)shortDescription;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)descriptionWithPointer:(BOOL)arg1;
- (id)emptyModelObjectWithChangeType:(unsigned long long)arg1 parent:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithOwnerName:(id)arg1 uuid:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)modelObjectWithChangeType:(unsigned long long)arg1 parent:(id)arg2;
- (id)modelObjectWithChangeType:(unsigned long long)arg1 version:(long long)arg2 parent:(id)arg3;
- (id)shortDescription;
- (void)transactionObjectRemoved:(id)arg1 message:(id)arg2;
- (void)transactionObjectUpdated:(id)arg1 newValues:(id)arg2 message:(id)arg3;
- (void)updateCloudZoneInformationWithModel:(id)arg1 message:(id)arg2;

@end

