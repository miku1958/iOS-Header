//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <C2/NSCopying-Protocol.h>

@class C2MPCloudKitInfo, C2MPDeviceInfo, C2MPGenericEvent, C2MPNetworkEvent, C2MPServerInfo, NSString;

__attribute__((visibility("hidden")))
@interface C2MPMetric : PBCodable <NSCopying>
{
    unsigned long long _reportFrequency;
    unsigned long long _reportFrequencyBase;
    unsigned long long _triggers;
    C2MPCloudKitInfo *_cloudkitInfo;
    C2MPDeviceInfo *_deviceInfo;
    C2MPGenericEvent *_genericEvent;
    int _metricType;
    C2MPNetworkEvent *_networkEvent;
    NSString *_reportTransportSourceApplicationBundleIdentifier;
    NSString *_reportTransportSourceApplicationSecondaryIdentifier;
    C2MPServerInfo *_serverInfo;
    BOOL _reportTransportAllowExpensiveAccess;
    BOOL _reportTransportAllowPowerNapScheduling;
    struct {
        unsigned int reportFrequency:1;
        unsigned int reportFrequencyBase:1;
        unsigned int triggers:1;
        unsigned int metricType:1;
        unsigned int reportTransportAllowExpensiveAccess:1;
        unsigned int reportTransportAllowPowerNapScheduling:1;
    } _has;
}

@property (strong, nonatomic) C2MPCloudKitInfo *cloudkitInfo; // @synthesize cloudkitInfo=_cloudkitInfo;
@property (strong, nonatomic) C2MPDeviceInfo *deviceInfo; // @synthesize deviceInfo=_deviceInfo;
@property (strong, nonatomic) C2MPGenericEvent *genericEvent; // @synthesize genericEvent=_genericEvent;
@property (readonly, nonatomic) BOOL hasCloudkitInfo;
@property (readonly, nonatomic) BOOL hasDeviceInfo;
@property (readonly, nonatomic) BOOL hasGenericEvent;
@property (nonatomic) BOOL hasMetricType;
@property (readonly, nonatomic) BOOL hasNetworkEvent;
@property (nonatomic) BOOL hasReportFrequency;
@property (nonatomic) BOOL hasReportFrequencyBase;
@property (nonatomic) BOOL hasReportTransportAllowExpensiveAccess;
@property (nonatomic) BOOL hasReportTransportAllowPowerNapScheduling;
@property (readonly, nonatomic) BOOL hasReportTransportSourceApplicationBundleIdentifier;
@property (readonly, nonatomic) BOOL hasReportTransportSourceApplicationSecondaryIdentifier;
@property (readonly, nonatomic) BOOL hasServerInfo;
@property (nonatomic) BOOL hasTriggers;
@property (nonatomic) int metricType; // @synthesize metricType=_metricType;
@property (strong, nonatomic) C2MPNetworkEvent *networkEvent; // @synthesize networkEvent=_networkEvent;
@property (nonatomic) unsigned long long reportFrequency; // @synthesize reportFrequency=_reportFrequency;
@property (nonatomic) unsigned long long reportFrequencyBase; // @synthesize reportFrequencyBase=_reportFrequencyBase;
@property (nonatomic) BOOL reportTransportAllowExpensiveAccess; // @synthesize reportTransportAllowExpensiveAccess=_reportTransportAllowExpensiveAccess;
@property (nonatomic) BOOL reportTransportAllowPowerNapScheduling; // @synthesize reportTransportAllowPowerNapScheduling=_reportTransportAllowPowerNapScheduling;
@property (strong, nonatomic) NSString *reportTransportSourceApplicationBundleIdentifier; // @synthesize reportTransportSourceApplicationBundleIdentifier=_reportTransportSourceApplicationBundleIdentifier;
@property (strong, nonatomic) NSString *reportTransportSourceApplicationSecondaryIdentifier; // @synthesize reportTransportSourceApplicationSecondaryIdentifier=_reportTransportSourceApplicationSecondaryIdentifier;
@property (strong, nonatomic) C2MPServerInfo *serverInfo; // @synthesize serverInfo=_serverInfo;
@property (nonatomic) unsigned long long triggers; // @synthesize triggers=_triggers;

- (void).cxx_destruct;
- (int)StringAsMetricType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)metricTypeAsString:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

