//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOAbAssignInfo, GEOFormattedStringClientCapabilities, GEOLocalTime, GEOLocalizationCapabilities, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOClientCapabilities : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _supportedTransitFeatures;
    GEOAbAssignInfo *_abAssignInfo;
    NSString *_appMajorVersion;
    NSString *_appMinorVersion;
    NSString *_deviceCountryCode;
    NSString *_deviceSku;
    NSMutableArray *_displayLanguages;
    NSString *_displayRegion;
    GEOFormattedStringClientCapabilities *_formattedStringClientCapabilities;
    NSString *_hardwareModel;
    GEOLocalizationCapabilities *_localizationCapabilities;
    GEOLocalTime *_requestTime;
    NSString *_userCurrentTimezone;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _maxFormatterSupported;
    int _maxManeuverTypeSupported;
    int _maxRouteIncidentSupported;
    unsigned int _maxTrafficSpeedSupported;
    unsigned int _maxZilchMessageVersionSupported;
    int _transitMarketSupport;
    BOOL _clusteredTransitRoutesSupported;
    BOOL _includeCrossLanguagePhonetics;
    BOOL _internalInstall;
    BOOL _internalTool;
    BOOL _routeOptionsSupported;
    BOOL _snapToClosestStopSupported;
    BOOL _supportsArrivalMapRegion;
    BOOL _supportsGuidanceEventsInlineShields;
    BOOL _supportsGuidanceEvents;
    BOOL _supportsJunctionView;
    BOOL _supportsLongShieldStrings;
    BOOL _supportsNaturalGuidance;
    struct {
        unsigned int has_maxFormatterSupported:1;
        unsigned int has_maxManeuverTypeSupported:1;
        unsigned int has_maxRouteIncidentSupported:1;
        unsigned int has_maxTrafficSpeedSupported:1;
        unsigned int has_maxZilchMessageVersionSupported:1;
        unsigned int has_transitMarketSupport:1;
        unsigned int has_clusteredTransitRoutesSupported:1;
        unsigned int has_includeCrossLanguagePhonetics:1;
        unsigned int has_internalInstall:1;
        unsigned int has_internalTool:1;
        unsigned int has_routeOptionsSupported:1;
        unsigned int has_snapToClosestStopSupported:1;
        unsigned int has_supportsArrivalMapRegion:1;
        unsigned int has_supportsGuidanceEventsInlineShields:1;
        unsigned int has_supportsGuidanceEvents:1;
        unsigned int has_supportsJunctionView:1;
        unsigned int has_supportsLongShieldStrings:1;
        unsigned int has_supportsNaturalGuidance:1;
        unsigned int read_unknownFields:1;
        unsigned int read_supportedTransitFeatures:1;
        unsigned int read_abAssignInfo:1;
        unsigned int read_appMajorVersion:1;
        unsigned int read_appMinorVersion:1;
        unsigned int read_deviceCountryCode:1;
        unsigned int read_deviceSku:1;
        unsigned int read_displayLanguages:1;
        unsigned int read_displayRegion:1;
        unsigned int read_formattedStringClientCapabilities:1;
        unsigned int read_hardwareModel:1;
        unsigned int read_localizationCapabilities:1;
        unsigned int read_requestTime:1;
        unsigned int read_userCurrentTimezone:1;
        unsigned int wrote_unknownFields:1;
        unsigned int wrote_supportedTransitFeatures:1;
        unsigned int wrote_abAssignInfo:1;
        unsigned int wrote_appMajorVersion:1;
        unsigned int wrote_appMinorVersion:1;
        unsigned int wrote_deviceCountryCode:1;
        unsigned int wrote_deviceSku:1;
        unsigned int wrote_displayLanguages:1;
        unsigned int wrote_displayRegion:1;
        unsigned int wrote_formattedStringClientCapabilities:1;
        unsigned int wrote_hardwareModel:1;
        unsigned int wrote_localizationCapabilities:1;
        unsigned int wrote_requestTime:1;
        unsigned int wrote_userCurrentTimezone:1;
        unsigned int wrote_maxFormatterSupported:1;
        unsigned int wrote_maxManeuverTypeSupported:1;
        unsigned int wrote_maxRouteIncidentSupported:1;
        unsigned int wrote_maxTrafficSpeedSupported:1;
        unsigned int wrote_maxZilchMessageVersionSupported:1;
        unsigned int wrote_transitMarketSupport:1;
        unsigned int wrote_clusteredTransitRoutesSupported:1;
        unsigned int wrote_includeCrossLanguagePhonetics:1;
        unsigned int wrote_internalInstall:1;
        unsigned int wrote_internalTool:1;
        unsigned int wrote_routeOptionsSupported:1;
        unsigned int wrote_snapToClosestStopSupported:1;
        unsigned int wrote_supportsArrivalMapRegion:1;
        unsigned int wrote_supportsGuidanceEventsInlineShields:1;
        unsigned int wrote_supportsGuidanceEvents:1;
        unsigned int wrote_supportsJunctionView:1;
        unsigned int wrote_supportsLongShieldStrings:1;
        unsigned int wrote_supportsNaturalGuidance:1;
    } _flags;
}

@property (strong, nonatomic) GEOAbAssignInfo *abAssignInfo;
@property (strong, nonatomic) NSString *appMajorVersion;
@property (strong, nonatomic) NSString *appMinorVersion;
@property (nonatomic) BOOL clusteredTransitRoutesSupported;
@property (strong, nonatomic) NSString *deviceCountryCode;
@property (strong, nonatomic) NSString *deviceSku;
@property (strong, nonatomic) NSMutableArray *displayLanguages;
@property (strong, nonatomic) NSString *displayRegion;
@property (strong, nonatomic) GEOFormattedStringClientCapabilities *formattedStringClientCapabilities;
@property (strong, nonatomic) NSString *hardwareModel;
@property (readonly, nonatomic) BOOL hasAbAssignInfo;
@property (readonly, nonatomic) BOOL hasAppMajorVersion;
@property (readonly, nonatomic) BOOL hasAppMinorVersion;
@property (nonatomic) BOOL hasClusteredTransitRoutesSupported;
@property (readonly, nonatomic) BOOL hasDeviceCountryCode;
@property (readonly, nonatomic) BOOL hasDeviceSku;
@property (readonly, nonatomic) BOOL hasDisplayRegion;
@property (readonly, nonatomic) BOOL hasFormattedStringClientCapabilities;
@property (readonly, nonatomic) BOOL hasHardwareModel;
@property (nonatomic) BOOL hasIncludeCrossLanguagePhonetics;
@property (nonatomic) BOOL hasInternalInstall;
@property (nonatomic) BOOL hasInternalTool;
@property (readonly, nonatomic) BOOL hasLocalizationCapabilities;
@property (nonatomic) BOOL hasMaxFormatterSupported;
@property (nonatomic) BOOL hasMaxManeuverTypeSupported;
@property (nonatomic) BOOL hasMaxRouteIncidentSupported;
@property (nonatomic) BOOL hasMaxTrafficSpeedSupported;
@property (nonatomic) BOOL hasMaxZilchMessageVersionSupported;
@property (readonly, nonatomic) BOOL hasRequestTime;
@property (nonatomic) BOOL hasRouteOptionsSupported;
@property (nonatomic) BOOL hasSnapToClosestStopSupported;
@property (nonatomic) BOOL hasSupportsArrivalMapRegion;
@property (nonatomic) BOOL hasSupportsGuidanceEvents;
@property (nonatomic) BOOL hasSupportsGuidanceEventsInlineShields;
@property (nonatomic) BOOL hasSupportsJunctionView;
@property (nonatomic) BOOL hasSupportsLongShieldStrings;
@property (nonatomic) BOOL hasSupportsNaturalGuidance;
@property (nonatomic) BOOL hasTransitMarketSupport;
@property (readonly, nonatomic) BOOL hasUserCurrentTimezone;
@property (nonatomic) BOOL includeCrossLanguagePhonetics;
@property (nonatomic) BOOL internalInstall;
@property (nonatomic) BOOL internalTool;
@property (strong, nonatomic) GEOLocalizationCapabilities *localizationCapabilities;
@property (nonatomic) int maxFormatterSupported;
@property (nonatomic) int maxManeuverTypeSupported;
@property (nonatomic) int maxRouteIncidentSupported;
@property (nonatomic) unsigned int maxTrafficSpeedSupported;
@property (nonatomic) unsigned int maxZilchMessageVersionSupported;
@property (strong, nonatomic) GEOLocalTime *requestTime;
@property (nonatomic) BOOL routeOptionsSupported;
@property (nonatomic) BOOL snapToClosestStopSupported;
@property (readonly, nonatomic) int *supportedTransitFeatures;
@property (readonly, nonatomic) unsigned long long supportedTransitFeaturesCount;
@property (nonatomic) BOOL supportsArrivalMapRegion;
@property (nonatomic) BOOL supportsGuidanceEvents;
@property (nonatomic) BOOL supportsGuidanceEventsInlineShields;
@property (nonatomic) BOOL supportsJunctionView;
@property (nonatomic) BOOL supportsLongShieldStrings;
@property (nonatomic) BOOL supportsNaturalGuidance;
@property (nonatomic) int transitMarketSupport;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (strong, nonatomic) NSString *userCurrentTimezone;

+ (Class)displayLanguagesType;
+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (int)StringAsMaxManeuverTypeSupported:(id)arg1;
- (int)StringAsSupportedTransitFeatures:(id)arg1;
- (int)StringAsTransitMarketSupport:(id)arg1;
- (void)_addNoFlagsDisplayLanguages:(id)arg1;
- (void)_addNoFlagsSupportedTransitFeature:(int)arg1;
- (void)_readAbAssignInfo;
- (void)_readAppMajorVersion;
- (void)_readAppMinorVersion;
- (void)_readDeviceCountryCode;
- (void)_readDeviceSku;
- (void)_readDisplayLanguages;
- (void)_readDisplayRegion;
- (void)_readFormattedStringClientCapabilities;
- (void)_readHardwareModel;
- (void)_readLocalizationCapabilities;
- (void)_readRequestTime;
- (void)_readSupportedTransitFeatures;
- (void)_readUserCurrentTimezone;
- (void)addDisplayLanguages:(id)arg1;
- (void)addSupportedTransitFeature:(int)arg1;
- (void)clearDisplayLanguages;
- (void)clearSupportedTransitFeatures;
- (void)clearUnknownFields:(BOOL)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayLanguagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)displayLanguagesCount;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)maxManeuverTypeSupportedAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setSupportedTransitFeatures:(int *)arg1 count:(unsigned long long)arg2;
- (int)supportedTransitFeatureAtIndex:(unsigned long long)arg1;
- (id)supportedTransitFeaturesAsString:(int)arg1;
- (id)transitMarketSupportAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
