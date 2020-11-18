//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthKit/NSCopying-Protocol.h>
#import <HealthKit/NSSecureCoding-Protocol.h>

@class HKDevice, HKSource, HKSourceRevision, NSDate, NSDictionary, NSString, NSUUID;

@interface HKObject : NSObject <NSCopying, NSSecureCoding>
{
    NSUUID *_UUID;
    HKSourceRevision *_sourceRevision;
    HKDevice *_device;
    NSDictionary *_metadata;
    long long _provenanceID;
    NSString *_sourceBundleIdentifier;
    double _creationTimestamp;
}

@property (readonly) NSUUID *UUID;
@property (nonatomic, getter=_creationDate, setter=_setCreationDate:) NSDate *creationDate;
@property (nonatomic, getter=_creationTimestamp, setter=_setCreationTimestamp:) double creationTimestamp; // @synthesize creationTimestamp=_creationTimestamp;
@property (readonly) HKDevice *device; // @synthesize device=_device;
@property (readonly, copy) NSDictionary *metadata;
@property (readonly) HKSource *source;
@property (copy, nonatomic, getter=_sourceBundleIdentifier, setter=_setSourceBundleIdentifier:) NSString *sourceBundleIdentifier; // @synthesize sourceBundleIdentifier=_sourceBundleIdentifier;
@property (readonly) HKSourceRevision *sourceRevision; // @synthesize sourceRevision=_sourceRevision;

+ (BOOL)_isConcreteObjectClass;
+ (id)_newDataObjectWithMetadata:(id)arg1 device:(id)arg2 config:(CDUnknownBlockType)arg3;
+ (id)_objectWithUUID:(id)arg1 metadata:(id)arg2 sourceBundleIdentifier:(id)arg3 creationDate:(double)arg4;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_init;
- (void)_setDevice:(id)arg1;
- (void)_setMetadata:(id)arg1;
- (void)_setSourceRevision:(id)arg1;
- (void)_setUUID:(id)arg1;
- (BOOL)_shouldNotifyOnInsert;
- (id)_source;
- (id)_validateConfiguration;
- (id)_validateConfigurationAllowingPrivateMetadata:(BOOL)arg1;
- (void)_validateForCreation;
- (BOOL)_validateForSavingWithClientEntitlements:(id)arg1 error:(id *)arg2;
- (id)_valueDescription;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (long long)hk_integerValue;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)prepareForDelivery:(id *)arg1;
- (BOOL)prepareForSaving:(id *)arg1;

@end
