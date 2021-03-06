//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/HKUUIDProvider-Protocol.h>
#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKContributor, HKDevice, HKSource, HKSourceRevision, NSDate, NSDictionary, NSString, NSUUID;

@interface HKObject : NSObject <HKUUIDProvider, NSCopying, NSSecureCoding>
{
    NSUUID *_UUID;
    HKSourceRevision *_sourceRevision;
    HKDevice *_device;
    NSDictionary *_metadata;
    long long _provenanceID;
    NSString *_sourceBundleIdentifier;
    double _creationTimestamp;
    HKContributor *_contributor;
}

@property (readonly) NSUUID *UUID;
@property (readonly, nonatomic) HKContributor *contributor; // @synthesize contributor=_contributor;
@property (copy, nonatomic, getter=_creationDate, setter=_setCreationDate:) NSDate *creationDate;
@property (nonatomic, getter=_creationTimestamp, setter=_setCreationTimestamp:) double creationTimestamp; // @synthesize creationTimestamp=_creationTimestamp;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) HKDevice *device; // @synthesize device=_device;
@property (readonly) unsigned long long hash;
@property (readonly, copy) NSDictionary *metadata;
@property (readonly) HKSource *source;
@property (copy, nonatomic, getter=_sourceBundleIdentifier, setter=_setSourceBundleIdentifier:) NSString *sourceBundleIdentifier; // @synthesize sourceBundleIdentifier=_sourceBundleIdentifier;
@property (readonly) HKSourceRevision *sourceRevision; // @synthesize sourceRevision=_sourceRevision;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic, getter=_timeZoneName) NSString *timeZoneName;

+ (BOOL)_isConcreteObjectClass;
+ (id)_newDataObjectWithMetadata:(id)arg1 device:(id)arg2 config:(CDUnknownBlockType)arg3;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_copyByArchiving;
- (long long)_externalSyncObjectCode;
- (id)_init;
- (void)_setContributor:(id)arg1;
- (void)_setDevice:(id)arg1;
- (void)_setMetadata:(id)arg1;
- (void)_setSourceRevision:(id)arg1;
- (void)_setUUID:(id)arg1;
- (BOOL)_shouldNotifyOnInsert;
- (id)_source;
- (id)_validateConfiguration;
- (id)_validateConfigurationAllowingPrivateMetadata:(BOOL)arg1 applicationSDKVersion:(unsigned int)arg2;
- (void)_validateForCreation;
- (BOOL)_validateForSavingWithClientEntitlements:(id)arg1 applicationSDKVersion:(unsigned int)arg2 error:(id *)arg3;
- (id)_validateWithConfiguration:(struct HKObjectValidationConfiguration)arg1;
- (id)_valueDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)hk_UUID;
- (long long)hk_integerValue;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)prepareForDelivery:(id *)arg1;
- (BOOL)prepareForSaving:(id *)arg1;

@end

