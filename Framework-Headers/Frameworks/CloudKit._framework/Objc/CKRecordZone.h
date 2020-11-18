//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudKit/NSCopying-Protocol.h>
#import <CloudKit/NSSecureCoding-Protocol.h>

@class CKContainerID, CKRecordZoneID, NSData, NSString;

@interface CKRecordZone : NSObject <NSSecureCoding, NSCopying>
{
    int _deviceCount;
    CKRecordZoneID *_zoneID;
    unsigned long long _capabilities;
    NSData *_currentServerContinuationToken;
    NSData *_clientChangeToken;
    NSData *_protectionData;
    NSString *_protectionEtag;
    NSString *_previousProtectionEtag;
    long long _assetQuotaUsage;
    long long _metadataQuotaUsage;
    CKContainerID *_containerID;
}

@property (nonatomic) long long assetQuotaUsage; // @synthesize assetQuotaUsage=_assetQuotaUsage;
@property (nonatomic) unsigned long long capabilities; // @synthesize capabilities=_capabilities;
@property (strong, nonatomic) NSData *clientChangeToken; // @synthesize clientChangeToken=_clientChangeToken;
@property (copy, nonatomic) CKContainerID *containerID; // @synthesize containerID=_containerID;
@property (strong, nonatomic) NSData *currentServerContinuationToken; // @synthesize currentServerContinuationToken=_currentServerContinuationToken;
@property (nonatomic) int deviceCount; // @synthesize deviceCount=_deviceCount;
@property (nonatomic) long long metadataQuotaUsage; // @synthesize metadataQuotaUsage=_metadataQuotaUsage;
@property (strong, nonatomic) NSString *previousProtectionEtag; // @synthesize previousProtectionEtag=_previousProtectionEtag;
@property (strong, nonatomic) NSData *protectionData; // @synthesize protectionData=_protectionData;
@property (strong, nonatomic) NSString *protectionEtag; // @synthesize protectionEtag=_protectionEtag;
@property (strong, nonatomic) CKRecordZoneID *zoneID; // @synthesize zoneID=_zoneID;

+ (id)defaultRecordZone;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)CKAssignToContainerWithID:(id)arg1;
- (id)CKPropertiesDescription;
- (id)_initZoneWithIdentifier:(id)arg1 capabilities:(unsigned long long)arg2;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithZoneID:(id)arg1;
- (id)initWithZoneName:(id)arg1;

@end

