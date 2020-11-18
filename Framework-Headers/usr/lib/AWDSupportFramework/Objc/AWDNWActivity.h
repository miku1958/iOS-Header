//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@class AWDNWDeviceReport, AWDNWL2Report, NSString;

@interface AWDNWActivity : PBCodable <NSCopying>
{
    unsigned long long _activityDomain;
    unsigned long long _activityLabel;
    unsigned long long _investigationID;
    unsigned long long _timestamp;
    NSString *_activityUUID;
    NSString *_bundleID;
    AWDNWDeviceReport *_deviceReport;
    AWDNWL2Report *_l2Report;
    NSString *_parentActivityUUID;
    BOOL _isRetry;
    struct {
        unsigned int activityDomain:1;
        unsigned int activityLabel:1;
        unsigned int investigationID:1;
        unsigned int timestamp:1;
        unsigned int isRetry:1;
    } _has;
}

@property (nonatomic) unsigned long long activityDomain; // @synthesize activityDomain=_activityDomain;
@property (nonatomic) unsigned long long activityLabel; // @synthesize activityLabel=_activityLabel;
@property (strong, nonatomic) NSString *activityUUID; // @synthesize activityUUID=_activityUUID;
@property (strong, nonatomic) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property (strong, nonatomic) AWDNWDeviceReport *deviceReport; // @synthesize deviceReport=_deviceReport;
@property (nonatomic) BOOL hasActivityDomain;
@property (nonatomic) BOOL hasActivityLabel;
@property (readonly, nonatomic) BOOL hasActivityUUID;
@property (readonly, nonatomic) BOOL hasBundleID;
@property (readonly, nonatomic) BOOL hasDeviceReport;
@property (nonatomic) BOOL hasInvestigationID;
@property (nonatomic) BOOL hasIsRetry;
@property (readonly, nonatomic) BOOL hasL2Report;
@property (readonly, nonatomic) BOOL hasParentActivityUUID;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) unsigned long long investigationID; // @synthesize investigationID=_investigationID;
@property (nonatomic) BOOL isRetry; // @synthesize isRetry=_isRetry;
@property (strong, nonatomic) AWDNWL2Report *l2Report; // @synthesize l2Report=_l2Report;
@property (strong, nonatomic) NSString *parentActivityUUID; // @synthesize parentActivityUUID=_parentActivityUUID;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
