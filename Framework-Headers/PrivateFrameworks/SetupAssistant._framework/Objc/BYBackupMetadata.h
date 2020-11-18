//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SetupAssistant/NSCopying-Protocol.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface BYBackupMetadata : PBCodable <NSCopying>
{
    unsigned int _appAnalyticsOptIn;
    unsigned int _deviceAnalyticsOptIn;
    unsigned int _homeButtonHapticKind;
    NSData *_nanoRegistryData;
    unsigned int _version;
    BOOL _autoUpdateEnabled;
    BOOL _didSeeTrueTonePane;
    BOOL _findMyiPhoneOptIn;
    BOOL _locationServicesOptIn;
    BOOL _screenTimeEnabled;
    BOOL _siriOptIn;
    struct {
        unsigned int appAnalyticsOptIn:1;
        unsigned int deviceAnalyticsOptIn:1;
        unsigned int homeButtonHapticKind:1;
        unsigned int autoUpdateEnabled:1;
        unsigned int didSeeTrueTonePane:1;
        unsigned int findMyiPhoneOptIn:1;
        unsigned int locationServicesOptIn:1;
        unsigned int screenTimeEnabled:1;
        unsigned int siriOptIn:1;
    } _has;
}

@property (nonatomic) unsigned int appAnalyticsOptIn; // @synthesize appAnalyticsOptIn=_appAnalyticsOptIn;
@property (nonatomic) BOOL autoUpdateEnabled; // @synthesize autoUpdateEnabled=_autoUpdateEnabled;
@property (nonatomic) unsigned int deviceAnalyticsOptIn; // @synthesize deviceAnalyticsOptIn=_deviceAnalyticsOptIn;
@property (nonatomic) BOOL didSeeTrueTonePane; // @synthesize didSeeTrueTonePane=_didSeeTrueTonePane;
@property (nonatomic) BOOL findMyiPhoneOptIn; // @synthesize findMyiPhoneOptIn=_findMyiPhoneOptIn;
@property (nonatomic) BOOL hasAppAnalyticsOptIn;
@property (nonatomic) BOOL hasAutoUpdateEnabled;
@property (nonatomic) BOOL hasDeviceAnalyticsOptIn;
@property (nonatomic) BOOL hasDidSeeTrueTonePane;
@property (nonatomic) BOOL hasFindMyiPhoneOptIn;
@property (nonatomic) BOOL hasHomeButtonHapticKind;
@property (nonatomic) BOOL hasLocationServicesOptIn;
@property (readonly, nonatomic) BOOL hasNanoRegistryData;
@property (nonatomic) BOOL hasScreenTimeEnabled;
@property (nonatomic) BOOL hasSiriOptIn;
@property (nonatomic) unsigned int homeButtonHapticKind; // @synthesize homeButtonHapticKind=_homeButtonHapticKind;
@property (nonatomic) BOOL locationServicesOptIn; // @synthesize locationServicesOptIn=_locationServicesOptIn;
@property (strong, nonatomic) NSData *nanoRegistryData; // @synthesize nanoRegistryData=_nanoRegistryData;
@property (nonatomic) BOOL screenTimeEnabled; // @synthesize screenTimeEnabled=_screenTimeEnabled;
@property (nonatomic) BOOL siriOptIn; // @synthesize siriOptIn=_siriOptIn;
@property (nonatomic) unsigned int version; // @synthesize version=_version;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

