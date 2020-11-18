//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOAbAssignInfo, GEOFormattedStringClientCapabilities, GEOLocalTime, NSMutableArray, NSString, PBUnknownFields;

@interface GEOClientCapabilities : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    GEOAbAssignInfo *_abAssignInfo;
    NSString *_appMajorVersion;
    NSString *_appMinorVersion;
    NSString *_deviceCountryCode;
    NSMutableArray *_displayLanguages;
    NSString *_displayRegion;
    GEOFormattedStringClientCapabilities *_formattedStringClientCapabilities;
    NSString *_hardwareModel;
    int _maxFormatterSupported;
    int _maxManeuverTypeSupported;
    int _maxRouteIncidentSupported;
    unsigned int _maxTrafficSpeedSupported;
    GEOLocalTime *_requestTime;
    int _transitMarketSupport;
    NSString *_userCurrentTimezone;
    BOOL _clusteredTransitRoutesSupported;
    BOOL _includeCrossLanguagePhonetics;
    BOOL _internalInstall;
    BOOL _internalTool;
    BOOL _routeOptionsSupported;
    BOOL _snapToClosestStopSupported;
    BOOL _supportsGuidanceEvents;
    BOOL _supportsGuidanceEventsInlineShields;
    BOOL _supportsLongShieldStrings;
    struct {
        unsigned int maxFormatterSupported:1;
        unsigned int maxManeuverTypeSupported:1;
        unsigned int maxRouteIncidentSupported:1;
        unsigned int maxTrafficSpeedSupported:1;
        unsigned int transitMarketSupport:1;
        unsigned int clusteredTransitRoutesSupported:1;
        unsigned int includeCrossLanguagePhonetics:1;
        unsigned int internalInstall:1;
        unsigned int internalTool:1;
        unsigned int routeOptionsSupported:1;
        unsigned int snapToClosestStopSupported:1;
        unsigned int supportsGuidanceEvents:1;
        unsigned int supportsGuidanceEventsInlineShields:1;
        unsigned int supportsLongShieldStrings:1;
    } _has;
}

@property (strong, nonatomic) GEOAbAssignInfo *abAssignInfo; // @synthesize abAssignInfo=_abAssignInfo;
@property (strong, nonatomic) NSString *appMajorVersion; // @synthesize appMajorVersion=_appMajorVersion;
@property (strong, nonatomic) NSString *appMinorVersion; // @synthesize appMinorVersion=_appMinorVersion;
@property (nonatomic) BOOL clusteredTransitRoutesSupported; // @synthesize clusteredTransitRoutesSupported=_clusteredTransitRoutesSupported;
@property (strong, nonatomic) NSString *deviceCountryCode; // @synthesize deviceCountryCode=_deviceCountryCode;
@property (strong, nonatomic) NSMutableArray *displayLanguages; // @synthesize displayLanguages=_displayLanguages;
@property (strong, nonatomic) NSString *displayRegion; // @synthesize displayRegion=_displayRegion;
@property (strong, nonatomic) GEOFormattedStringClientCapabilities *formattedStringClientCapabilities; // @synthesize formattedStringClientCapabilities=_formattedStringClientCapabilities;
@property (strong, nonatomic) NSString *hardwareModel; // @synthesize hardwareModel=_hardwareModel;
@property (readonly, nonatomic) BOOL hasAbAssignInfo;
@property (readonly, nonatomic) BOOL hasAppMajorVersion;
@property (readonly, nonatomic) BOOL hasAppMinorVersion;
@property (nonatomic) BOOL hasClusteredTransitRoutesSupported;
@property (readonly, nonatomic) BOOL hasDeviceCountryCode;
@property (readonly, nonatomic) BOOL hasDisplayRegion;
@property (readonly, nonatomic) BOOL hasFormattedStringClientCapabilities;
@property (readonly, nonatomic) BOOL hasHardwareModel;
@property (nonatomic) BOOL hasIncludeCrossLanguagePhonetics;
@property (nonatomic) BOOL hasInternalInstall;
@property (nonatomic) BOOL hasInternalTool;
@property (nonatomic) BOOL hasMaxFormatterSupported;
@property (nonatomic) BOOL hasMaxManeuverTypeSupported;
@property (nonatomic) BOOL hasMaxRouteIncidentSupported;
@property (nonatomic) BOOL hasMaxTrafficSpeedSupported;
@property (readonly, nonatomic) BOOL hasRequestTime;
@property (nonatomic) BOOL hasRouteOptionsSupported;
@property (nonatomic) BOOL hasSnapToClosestStopSupported;
@property (nonatomic) BOOL hasSupportsGuidanceEvents;
@property (nonatomic) BOOL hasSupportsGuidanceEventsInlineShields;
@property (nonatomic) BOOL hasSupportsLongShieldStrings;
@property (nonatomic) BOOL hasTransitMarketSupport;
@property (readonly, nonatomic) BOOL hasUserCurrentTimezone;
@property (nonatomic) BOOL includeCrossLanguagePhonetics; // @synthesize includeCrossLanguagePhonetics=_includeCrossLanguagePhonetics;
@property (nonatomic) BOOL internalInstall; // @synthesize internalInstall=_internalInstall;
@property (nonatomic) BOOL internalTool; // @synthesize internalTool=_internalTool;
@property (nonatomic) int maxFormatterSupported; // @synthesize maxFormatterSupported=_maxFormatterSupported;
@property (nonatomic) int maxManeuverTypeSupported; // @synthesize maxManeuverTypeSupported=_maxManeuverTypeSupported;
@property (nonatomic) int maxRouteIncidentSupported; // @synthesize maxRouteIncidentSupported=_maxRouteIncidentSupported;
@property (nonatomic) unsigned int maxTrafficSpeedSupported; // @synthesize maxTrafficSpeedSupported=_maxTrafficSpeedSupported;
@property (strong, nonatomic) GEOLocalTime *requestTime; // @synthesize requestTime=_requestTime;
@property (nonatomic) BOOL routeOptionsSupported; // @synthesize routeOptionsSupported=_routeOptionsSupported;
@property (nonatomic) BOOL snapToClosestStopSupported; // @synthesize snapToClosestStopSupported=_snapToClosestStopSupported;
@property (nonatomic) BOOL supportsGuidanceEvents; // @synthesize supportsGuidanceEvents=_supportsGuidanceEvents;
@property (nonatomic) BOOL supportsGuidanceEventsInlineShields; // @synthesize supportsGuidanceEventsInlineShields=_supportsGuidanceEventsInlineShields;
@property (nonatomic) BOOL supportsLongShieldStrings; // @synthesize supportsLongShieldStrings=_supportsLongShieldStrings;
@property (nonatomic) int transitMarketSupport; // @synthesize transitMarketSupport=_transitMarketSupport;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (strong, nonatomic) NSString *userCurrentTimezone; // @synthesize userCurrentTimezone=_userCurrentTimezone;

+ (Class)displayLanguagesType;
- (void).cxx_destruct;
- (int)StringAsMaxManeuverTypeSupported:(id)arg1;
- (int)StringAsTransitMarketSupport:(id)arg1;
- (void)addDisplayLanguages:(id)arg1;
- (void)clearDisplayLanguages;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)displayLanguagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)displayLanguagesCount;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)maxManeuverTypeSupportedAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)transitMarketSupportAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
