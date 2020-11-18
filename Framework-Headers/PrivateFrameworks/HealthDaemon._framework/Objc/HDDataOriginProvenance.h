//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <HealthDaemon/NSCopying-Protocol.h>
#import <HealthDaemon/NSSecureCoding-Protocol.h>

@class NSNumber, NSString;

@interface HDDataOriginProvenance : NSObject <NSSecureCoding, NSCopying>
{
    long long _syncProvenance;
    NSString *_productType;
    NSString *_systemBuild;
    NSString *_sourceVersion;
    NSString *_timeZoneName;
    NSNumber *_sourceID;
    NSNumber *_deviceID;
    CDStruct_f6aba300 _operatingSystemVersion;
}

@property (strong, nonatomic) NSNumber *deviceID; // @synthesize deviceID=_deviceID;
@property (nonatomic) CDStruct_f6aba300 operatingSystemVersion; // @synthesize operatingSystemVersion=_operatingSystemVersion;
@property (copy, nonatomic) NSString *productType; // @synthesize productType=_productType;
@property (strong, nonatomic) NSNumber *sourceID; // @synthesize sourceID=_sourceID;
@property (copy, nonatomic) NSString *sourceVersion; // @synthesize sourceVersion=_sourceVersion;
@property (nonatomic) long long syncProvenance; // @synthesize syncProvenance=_syncProvenance;
@property (copy, nonatomic) NSString *systemBuild; // @synthesize systemBuild=_systemBuild;
@property (copy, nonatomic) NSString *timeZoneName; // @synthesize timeZoneName=_timeZoneName;

+ (id)dataProvenanceWithSyncProvenance:(long long)arg1 productType:(id)arg2 systemBuild:(id)arg3 operatingSystemVersion:(CDStruct_f6aba300)arg4 sourceVersion:(id)arg5 timeZoneName:(id)arg6 sourceID:(id)arg7 deviceID:(id)arg8;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isValid;

@end

