//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOAutomobileOptions, GEOCyclingOptions, GEOLocation, GEOMapRegion, GEOPDVenueIdentifier, GEOTraitsTransitScheduleFilter, GEOTransitOptions, GEOWalkingOptions, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEOMapServiceTraits : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _engineTypes;
    CDStruct_95bda58d _knownClientResolvedTypes;
    CDStruct_95bda58d _supportedAutocompleteListTypes;
    CDStruct_95bda58d _supportedAutocompleteResultCellTypes;
    CDStruct_95bda58d _supportedChildActions;
    CDStruct_95bda58d _transportTypes;
    struct GEOSessionID _sessionId;
    NSString *_analyticsAppIdentifier;
    NSString *_appIdentifier;
    NSString *_appMajorVersion;
    NSString *_appMinorVersion;
    GEOAutomobileOptions *_automobileOptions;
    NSString *_carHeadunitManufacturer;
    NSString *_carHeadunitModel;
    double _carHeadunitPixelHeight;
    double _carHeadunitPixelWidth;
    GEOCyclingOptions *_cyclingOptions;
    GEOLocation *_deviceLocation;
    NSMutableArray *_deviceDisplayLanguages;
    NSString *_deviceKeyboardLocale;
    NSString *_deviceSpokenLocale;
    NSString *_displayRegion;
    NSMutableArray *_evChargingPorts;
    NSMutableArray *_historicalLocations;
    GEOMapRegion *_mapRegion;
    double _mapZoomLevel;
    NSMutableArray *_photoSizes;
    NSString *_providerID;
    NSMutableArray *_reviewUserPhotoSizes;
    double _sessionRelativeTimestamp;
    GEOTransitOptions *_transitOptions;
    GEOTraitsTransitScheduleFilter *_transitScheduleFilter;
    GEOTraitsTransitScheduleFilter *_transitTripStopTimeFilter;
    GEOPDVenueIdentifier *_venueIdentifier;
    GEOWalkingOptions *_walkingOptions;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    int _carHeadunitConnectionType;
    int _carHeadunitInteractionModel;
    int _deviceBatteryState;
    int _deviceInterfaceOrientation;
    unsigned int _httpRequestPriority;
    int _mode;
    int _navigationTransportType;
    unsigned int _photosCount;
    unsigned int _ratingsCount;
    int _requestPurpose;
    unsigned int _reviewUserPhotosCount;
    unsigned int _sequenceNumber;
    int _source;
    unsigned int _timeSinceMapEnteredForeground;
    unsigned int _timeSinceMapViewportChanged;
    BOOL _appDarkMode;
    BOOL _autocompleteRequestSupportsSectionHeader;
    BOOL _deviceDarkMode;
    BOOL _deviceInVehicle;
    BOOL _isAPICall;
    BOOL _isRedoSearch;
    BOOL _isRefund;
    BOOL _isSettlement;
    BOOL _isWidgetRequest;
    BOOL _navigating;
    BOOL _supportAutocompleteRapAffordance;
    BOOL _supportChildItems;
    BOOL _supportClientRankingFeatureMetadata;
    BOOL _supportDirectionIntentAutocomplete;
    BOOL _supportDirectionIntentSearch;
    BOOL _supportDymSuggestion;
    BOOL _supportUnresolvedDirectionIntent;
    BOOL _supportsBrandFallback;
    BOOL _useBackgroundUrl;
    BOOL _wantsBrandIcon;
    struct {
        unsigned int has_sessionId:1;
        unsigned int has_carHeadunitPixelHeight:1;
        unsigned int has_carHeadunitPixelWidth:1;
        unsigned int has_mapZoomLevel:1;
        unsigned int has_sessionRelativeTimestamp:1;
        unsigned int has_carHeadunitConnectionType:1;
        unsigned int has_carHeadunitInteractionModel:1;
        unsigned int has_deviceBatteryState:1;
        unsigned int has_deviceInterfaceOrientation:1;
        unsigned int has_httpRequestPriority:1;
        unsigned int has_mode:1;
        unsigned int has_navigationTransportType:1;
        unsigned int has_photosCount:1;
        unsigned int has_ratingsCount:1;
        unsigned int has_requestPurpose:1;
        unsigned int has_reviewUserPhotosCount:1;
        unsigned int has_sequenceNumber:1;
        unsigned int has_source:1;
        unsigned int has_timeSinceMapEnteredForeground:1;
        unsigned int has_timeSinceMapViewportChanged:1;
        unsigned int has_appDarkMode:1;
        unsigned int has_autocompleteRequestSupportsSectionHeader:1;
        unsigned int has_deviceDarkMode:1;
        unsigned int has_deviceInVehicle:1;
        unsigned int has_isAPICall:1;
        unsigned int has_isRedoSearch:1;
        unsigned int has_isRefund:1;
        unsigned int has_isSettlement:1;
        unsigned int has_isWidgetRequest:1;
        unsigned int has_navigating:1;
        unsigned int has_supportAutocompleteRapAffordance:1;
        unsigned int has_supportChildItems:1;
        unsigned int has_supportClientRankingFeatureMetadata:1;
        unsigned int has_supportDirectionIntentAutocomplete:1;
        unsigned int has_supportDirectionIntentSearch:1;
        unsigned int has_supportDymSuggestion:1;
        unsigned int has_supportUnresolvedDirectionIntent:1;
        unsigned int has_supportsBrandFallback:1;
        unsigned int has_useBackgroundUrl:1;
        unsigned int has_wantsBrandIcon:1;
        unsigned int read_unknownFields:1;
        unsigned int read_engineTypes:1;
        unsigned int read_knownClientResolvedTypes:1;
        unsigned int read_supportedAutocompleteListTypes:1;
        unsigned int read_supportedAutocompleteResultCellTypes:1;
        unsigned int read_supportedChildActions:1;
        unsigned int read_transportTypes:1;
        unsigned int read_analyticsAppIdentifier:1;
        unsigned int read_appIdentifier:1;
        unsigned int read_appMajorVersion:1;
        unsigned int read_appMinorVersion:1;
        unsigned int read_automobileOptions:1;
        unsigned int read_carHeadunitManufacturer:1;
        unsigned int read_carHeadunitModel:1;
        unsigned int read_cyclingOptions:1;
        unsigned int read_deviceLocation:1;
        unsigned int read_deviceDisplayLanguages:1;
        unsigned int read_deviceKeyboardLocale:1;
        unsigned int read_deviceSpokenLocale:1;
        unsigned int read_displayRegion:1;
        unsigned int read_evChargingPorts:1;
        unsigned int read_historicalLocations:1;
        unsigned int read_mapRegion:1;
        unsigned int read_photoSizes:1;
        unsigned int read_providerID:1;
        unsigned int read_reviewUserPhotoSizes:1;
        unsigned int read_transitOptions:1;
        unsigned int read_transitScheduleFilter:1;
        unsigned int read_transitTripStopTimeFilter:1;
        unsigned int read_venueIdentifier:1;
        unsigned int read_walkingOptions:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

@property (strong, nonatomic) NSString *analyticsAppIdentifier;
@property (nonatomic) BOOL appDarkMode;
@property (strong, nonatomic) NSString *appIdentifier;
@property (strong, nonatomic) NSString *appMajorVersion;
@property (strong, nonatomic) NSString *appMinorVersion;
@property (nonatomic) BOOL autocompleteRequestSupportsSectionHeader;
@property (strong, nonatomic) GEOAutomobileOptions *automobileOptions;
@property (nonatomic) int carHeadunitConnectionType;
@property (nonatomic) int carHeadunitInteractionModel;
@property (strong, nonatomic) NSString *carHeadunitManufacturer;
@property (strong, nonatomic) NSString *carHeadunitModel;
@property (nonatomic) double carHeadunitPixelHeight;
@property (nonatomic) double carHeadunitPixelWidth;
@property (strong, nonatomic) GEOCyclingOptions *cyclingOptions;
@property (nonatomic) int deviceBatteryState;
@property (nonatomic) BOOL deviceDarkMode;
@property (strong, nonatomic) NSMutableArray *deviceDisplayLanguages;
@property (nonatomic) BOOL deviceInVehicle;
@property (nonatomic) int deviceInterfaceOrientation;
@property (strong, nonatomic) NSString *deviceKeyboardLocale;
@property (strong, nonatomic) GEOLocation *deviceLocation;
@property (strong, nonatomic) NSString *deviceSpokenLocale;
@property (strong, nonatomic) NSString *displayRegion;
@property (readonly, nonatomic) int *engineTypes;
@property (readonly, nonatomic) unsigned long long engineTypesCount;
@property (strong, nonatomic) NSMutableArray *evChargingPorts;
@property (readonly, nonatomic) BOOL hasAnalyticsAppIdentifier;
@property (nonatomic) BOOL hasAppDarkMode;
@property (readonly, nonatomic) BOOL hasAppIdentifier;
@property (readonly, nonatomic) BOOL hasAppMajorVersion;
@property (readonly, nonatomic) BOOL hasAppMinorVersion;
@property (nonatomic) BOOL hasAutocompleteRequestSupportsSectionHeader;
@property (readonly, nonatomic) BOOL hasAutomobileOptions;
@property (nonatomic) BOOL hasCarHeadunitConnectionType;
@property (nonatomic) BOOL hasCarHeadunitInteractionModel;
@property (readonly, nonatomic) BOOL hasCarHeadunitManufacturer;
@property (readonly, nonatomic) BOOL hasCarHeadunitModel;
@property (nonatomic) BOOL hasCarHeadunitPixelHeight;
@property (nonatomic) BOOL hasCarHeadunitPixelWidth;
@property (readonly, nonatomic) BOOL hasCyclingOptions;
@property (nonatomic) BOOL hasDeviceBatteryState;
@property (nonatomic) BOOL hasDeviceDarkMode;
@property (nonatomic) BOOL hasDeviceInVehicle;
@property (nonatomic) BOOL hasDeviceInterfaceOrientation;
@property (readonly, nonatomic) BOOL hasDeviceKeyboardLocale;
@property (readonly, nonatomic) BOOL hasDeviceLocation;
@property (readonly, nonatomic) BOOL hasDeviceSpokenLocale;
@property (readonly, nonatomic) BOOL hasDisplayRegion;
@property (nonatomic) BOOL hasHttpRequestPriority;
@property (nonatomic) BOOL hasIsAPICall;
@property (nonatomic) BOOL hasIsRedoSearch;
@property (nonatomic) BOOL hasIsRefund;
@property (nonatomic) BOOL hasIsSettlement;
@property (nonatomic) BOOL hasIsWidgetRequest;
@property (readonly, nonatomic) BOOL hasMapRegion;
@property (nonatomic) BOOL hasMapZoomLevel;
@property (nonatomic) BOOL hasMode;
@property (nonatomic) BOOL hasNavigating;
@property (nonatomic) BOOL hasNavigationTransportType;
@property (nonatomic) BOOL hasPhotosCount;
@property (readonly, nonatomic) BOOL hasProviderID;
@property (nonatomic) BOOL hasRatingsCount;
@property (nonatomic) BOOL hasRequestPurpose;
@property (nonatomic) BOOL hasReviewUserPhotosCount;
@property (nonatomic) BOOL hasSequenceNumber;
@property (nonatomic) BOOL hasSessionId;
@property (nonatomic) BOOL hasSessionRelativeTimestamp;
@property (nonatomic) BOOL hasSource;
@property (nonatomic) BOOL hasSupportAutocompleteRapAffordance;
@property (nonatomic) BOOL hasSupportChildItems;
@property (nonatomic) BOOL hasSupportClientRankingFeatureMetadata;
@property (nonatomic) BOOL hasSupportDirectionIntentAutocomplete;
@property (nonatomic) BOOL hasSupportDirectionIntentSearch;
@property (nonatomic) BOOL hasSupportDymSuggestion;
@property (nonatomic) BOOL hasSupportUnresolvedDirectionIntent;
@property (nonatomic) BOOL hasSupportsBrandFallback;
@property (nonatomic) BOOL hasTimeSinceMapEnteredForeground;
@property (nonatomic) BOOL hasTimeSinceMapViewportChanged;
@property (readonly, nonatomic) BOOL hasTransitOptions;
@property (readonly, nonatomic) BOOL hasTransitScheduleFilter;
@property (readonly, nonatomic) BOOL hasTransitTripStopTimeFilter;
@property (nonatomic) BOOL hasUseBackgroundUrl;
@property (readonly, nonatomic) BOOL hasVenueIdentifier;
@property (readonly, nonatomic) BOOL hasWalkingOptions;
@property (nonatomic) BOOL hasWantsBrandIcon;
@property (strong, nonatomic) NSMutableArray *historicalLocations;
@property (nonatomic) unsigned int httpRequestPriority;
@property (nonatomic) BOOL isAPICall;
@property (nonatomic) BOOL isRedoSearch;
@property (nonatomic) BOOL isRefund;
@property (nonatomic) BOOL isSettlement;
@property (nonatomic) BOOL isWidgetRequest;
@property (readonly, nonatomic) int *knownClientResolvedTypes;
@property (readonly, nonatomic) unsigned long long knownClientResolvedTypesCount;
@property (strong, nonatomic) GEOMapRegion *mapRegion;
@property (nonatomic) double mapZoomLevel;
@property (nonatomic) int mode;
@property (nonatomic) BOOL navigating;
@property (nonatomic) int navigationTransportType;
@property (strong, nonatomic) NSMutableArray *photoSizes;
@property (nonatomic) unsigned int photosCount;
@property (strong, nonatomic) NSString *providerID;
@property (nonatomic) unsigned int ratingsCount;
@property (nonatomic) int requestPurpose;
@property (strong, nonatomic) NSMutableArray *reviewUserPhotoSizes;
@property (nonatomic) unsigned int reviewUserPhotosCount;
@property (nonatomic) unsigned int sequenceNumber;
@property (nonatomic) struct GEOSessionID sessionId;
@property (nonatomic) double sessionRelativeTimestamp;
@property (nonatomic) int source;
@property (nonatomic) BOOL supportAutocompleteRapAffordance;
@property (nonatomic) BOOL supportChildItems;
@property (nonatomic) BOOL supportClientRankingFeatureMetadata;
@property (nonatomic) BOOL supportDirectionIntentAutocomplete;
@property (nonatomic) BOOL supportDirectionIntentSearch;
@property (nonatomic) BOOL supportDymSuggestion;
@property (nonatomic) BOOL supportUnresolvedDirectionIntent;
@property (readonly, nonatomic) int *supportedAutocompleteListTypes;
@property (readonly, nonatomic) unsigned long long supportedAutocompleteListTypesCount;
@property (readonly, nonatomic) int *supportedAutocompleteResultCellTypes;
@property (readonly, nonatomic) unsigned long long supportedAutocompleteResultCellTypesCount;
@property (readonly, nonatomic) int *supportedChildActions;
@property (readonly, nonatomic) unsigned long long supportedChildActionsCount;
@property (nonatomic) BOOL supportsBrandFallback;
@property (nonatomic) unsigned int timeSinceMapEnteredForeground;
@property (nonatomic) unsigned int timeSinceMapViewportChanged;
@property (strong, nonatomic) GEOTransitOptions *transitOptions;
@property (strong, nonatomic) GEOTraitsTransitScheduleFilter *transitScheduleFilter;
@property (strong, nonatomic) GEOTraitsTransitScheduleFilter *transitTripStopTimeFilter;
@property (readonly, nonatomic) int *transportTypes;
@property (readonly, nonatomic) unsigned long long transportTypesCount;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (nonatomic) BOOL useBackgroundUrl;
@property (strong, nonatomic) GEOPDVenueIdentifier *venueIdentifier;
@property (strong, nonatomic) GEOWalkingOptions *walkingOptions;
@property (nonatomic) BOOL wantsBrandIcon;

+ (Class)deviceDisplayLanguageType;
+ (Class)evChargingPortType;
+ (Class)historicalLocationsType;
+ (BOOL)isValid:(id)arg1;
+ (Class)photoSizesType;
+ (Class)reviewUserPhotoSizesType;
- (void).cxx_destruct;
- (int)StringAsCarHeadunitConnectionType:(id)arg1;
- (int)StringAsCarHeadunitInteractionModel:(id)arg1;
- (int)StringAsDeviceBatteryState:(id)arg1;
- (int)StringAsDeviceInterfaceOrientation:(id)arg1;
- (int)StringAsEngineTypes:(id)arg1;
- (int)StringAsKnownClientResolvedTypes:(id)arg1;
- (int)StringAsMode:(id)arg1;
- (int)StringAsNavigationTransportType:(id)arg1;
- (int)StringAsRequestPurpose:(id)arg1;
- (int)StringAsSource:(id)arg1;
- (int)StringAsSupportedAutocompleteListTypes:(id)arg1;
- (int)StringAsSupportedAutocompleteResultCellTypes:(id)arg1;
- (int)StringAsSupportedChildActions:(id)arg1;
- (int)StringAsTransportTypes:(id)arg1;
- (void)_internal_incrementSessionCounters;
- (void)addDeviceDisplayLanguage:(id)arg1;
- (void)addEngineType:(int)arg1;
- (void)addEvChargingPort:(id)arg1;
- (void)addHistoricalLocations:(id)arg1;
- (void)addKnownClientResolvedType:(int)arg1;
- (void)addPhotoSizes:(id)arg1;
- (void)addReviewUserPhotoSizes:(id)arg1;
- (void)addSupportedAutocompleteListType:(int)arg1;
- (void)addSupportedAutocompleteResultCellType:(int)arg1;
- (void)addSupportedChildAction:(int)arg1;
- (void)addTransportType:(int)arg1;
- (id)carHeadunitConnectionTypeAsString:(int)arg1;
- (id)carHeadunitInteractionModelAsString:(int)arg1;
- (void)clearDeviceDisplayLanguages;
- (void)clearEngineTypes;
- (void)clearEvChargingPorts;
- (void)clearHistoricalLocations;
- (void)clearKnownClientResolvedTypes;
- (void)clearLocations;
- (void)clearPhotoSizes;
- (void)clearReviewUserPhotoSizes;
- (void)clearSensitiveFields;
- (void)clearSessionId;
- (void)clearSupportedAutocompleteListTypes;
- (void)clearSupportedAutocompleteResultCellTypes;
- (void)clearSupportedChildActions;
- (void)clearTransportTypes;
- (void)clearUnknownFields:(BOOL)arg1;
- (id)copyByIncrementingSessionCounters;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)deviceBatteryStateAsString:(int)arg1;
- (id)deviceDisplayLanguageAtIndex:(unsigned long long)arg1;
- (unsigned long long)deviceDisplayLanguagesCount;
- (id)deviceInterfaceOrientationAsString:(int)arg1;
- (id)dictionaryRepresentation;
- (int)engineTypeAtIndex:(unsigned long long)arg1;
- (id)engineTypesAsString:(int)arg1;
- (id)evChargingPortAtIndex:(unsigned long long)arg1;
- (unsigned long long)evChargingPortsCount;
- (unsigned long long)hash;
- (id)historicalLocationsAtIndex:(unsigned long long)arg1;
- (unsigned long long)historicalLocationsCount;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (int)knownClientResolvedTypeAtIndex:(unsigned long long)arg1;
- (id)knownClientResolvedTypesAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (id)modeAsString:(int)arg1;
- (id)navigationTransportTypeAsString:(int)arg1;
- (id)photoSizesAtIndex:(unsigned long long)arg1;
- (unsigned long long)photoSizesCount;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)requestPurposeAsString:(int)arg1;
- (id)reviewUserPhotoSizesAtIndex:(unsigned long long)arg1;
- (unsigned long long)reviewUserPhotoSizesCount;
- (void)setEngineTypes:(int *)arg1 count:(unsigned long long)arg2;
- (void)setKnownClientResolvedTypes:(int *)arg1 count:(unsigned long long)arg2;
- (void)setSupportedAutocompleteListTypes:(int *)arg1 count:(unsigned long long)arg2;
- (void)setSupportedAutocompleteResultCellTypes:(int *)arg1 count:(unsigned long long)arg2;
- (void)setSupportedChildActions:(int *)arg1 count:(unsigned long long)arg2;
- (void)setTransportTypes:(int *)arg1 count:(unsigned long long)arg2;
- (id)sourceAsString:(int)arg1;
- (int)supportedAutocompleteListTypeAtIndex:(unsigned long long)arg1;
- (id)supportedAutocompleteListTypesAsString:(int)arg1;
- (int)supportedAutocompleteResultCellTypeAtIndex:(unsigned long long)arg1;
- (id)supportedAutocompleteResultCellTypesAsString:(int)arg1;
- (int)supportedChildActionAtIndex:(unsigned long long)arg1;
- (id)supportedChildActionsAsString:(int)arg1;
- (int)transportTypeAtIndex:(unsigned long long)arg1;
- (id)transportTypesAsString:(int)arg1;
- (void)updateAnalyticsShortSession;
- (void)writeTo:(id)arg1;

@end
