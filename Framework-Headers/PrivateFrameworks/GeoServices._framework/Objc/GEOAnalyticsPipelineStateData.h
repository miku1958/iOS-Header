//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOCarInfo, GEOLocation, GEOLogMsgEventPredExTrainingData, GEOLogMsgStateCuratedCollection, GEOLogMsgStateUGCPhoto, GEOMapRegion, GEOMapsServerMetadata, GEORouteDetails, NSData, NSMutableArray, NSString, PBDataReader;

@interface GEOAnalyticsPipelineStateData : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    CDStruct_95bda58d _placeCardPossibleactions;
    CDStruct_95bda58d _placeCardUnactionableuielements;
    GEOCarInfo *_carPlayInfo;
    GEOLogMsgStateCuratedCollection *_curatedCollectionState;
    NSString *_deviceInputLocale;
    NSString *_deviceOutputLocale;
    GEOLocation *_lookaroundLocation;
    double _lookaroundSessionEndTime;
    double _lookaroundSessionStartTime;
    double _lookaroundZoom;
    NSString *_mapLaunchLaunchuri;
    NSString *_mapLaunchReferringwebsite;
    NSString *_mapLaunchSourceappid;
    double _mapViewLocationTouristTimestamp;
    GEOMapRegion *_mapViewMapRegion;
    double _mapViewZoomLevel;
    NSMutableArray *_mapsServerMetadataSuggestionEntryDisplayeds;
    NSData *_mapsServerMetadataSuggestionEntryTappedOn;
    GEOMapsServerMetadata *_mapsServerMetadata;
    NSString *_metroRegion;
    NSString *_placeCardPlaceactiondetailsActionurl;
    unsigned long long _placeCardPlaceactiondetailsAnimationid;
    unsigned long long _placeCardPlaceactiondetailsBusinessid;
    NSString *_placeCardPlaceactiondetailsDestinationapp;
    NSString *_placeCardPlaceactiondetailsPhotoid;
    long long _placeCardPlaceactiondetailsPlaceid;
    NSString *_placeCardPlaceactiondetailsRichproviderid;
    double _placeCardPlaceactiondetailsSearchresponserelativetimestamp;
    unsigned long long _placeCardPlaceactiondetailsTargetid;
    NSString *_placeCardPlaceactiondetailsTransitplacecardIncidenttype;
    NSString *_placeCardPlaceactiondetailsTransitplacecardTransitdeparturesequenceusageDirection;
    NSString *_placeCardPlaceactiondetailsTransitplacecardTransitdeparturesequenceusageHeadsign;
    unsigned long long _placeCardPlaceactiondetailsTransitplacecardTransitdeparturesequenceusageLineid;
    NSString *_placeCardPlaceactiondetailsTransitplacecardTransitsystemname;
    NSString *_placeCardPlacecardcategory;
    GEOLogMsgEventPredExTrainingData *_predExTrainingData;
    GEORouteDetails *_routeRouteDetails;
    NSMutableArray *_suggestionsDisplayedresults;
    NSString *_suggestionsSearchstring;
    GEOLogMsgStateUGCPhoto *_ugcPhotoState;
    NSString *_userHomecountry;
    NSString *_userHomemetro;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    unsigned int _lookaroundHeading;
    unsigned int _lookaroundNumberPoisInView;
    int _mapSettingsLocationprecisiontype;
    int _mapSettingsNavVolume;
    int _mapSettingsTransportMode;
    unsigned int _mapUiCurrentTabIndex;
    int _mapUiLayoutInfo;
    int _mapUiLayoutStyle;
    unsigned int _mapUiNumberOfTabsOpen;
    int _mapViewMapType;
    int _placeCardPlaceactiondetailsLocalsearchproviderid;
    int _placeCardPlaceactiondetailsResultindex;
    int _placeCardPlaceactiondetailsTransitplacecardTransitcategory;
    int _placeCardPlacecardtype;
    int _restoreLayoutinfo;
    int _restoreLayoutstyle;
    int _restoreUitarget;
    int _suggestionsAcsequencenumber;
    int _suggestionsSearchfieldtype;
    int _suggestionsSelectedindex;
    BOOL _deviceInDarkMode;
    BOOL _landscape;
    BOOL _lookAroundEntryIconShown;
    BOOL _lookaroundIsLabelingShown;
    BOOL _lookaroundSessionHadMoveAction;
    BOOL _lookaroundSessionHadPanAction;
    BOOL _lookaroundSessionHadShareAction;
    BOOL _lookaroundSessionHadTapPoiAction;
    BOOL _lookaroundSessionHadZoomAction;
    BOOL _mapSettingsAvoidBusyRoads;
    BOOL _mapSettingsAvoidHighways;
    BOOL _mapSettingsAvoidHills;
    BOOL _mapSettingsAvoidStairs;
    BOOL _mapSettingsAvoidTolls;
    BOOL _mapSettingsEBike;
    BOOL _mapSettingsFindMyCarEnabled;
    BOOL _mapSettingsHeadingEnabled;
    BOOL _mapSettingsLabelEnabled;
    BOOL _mapSettingsPauseSpokenAudioEnabled;
    BOOL _mapSettingsSpeedLimitEnabled;
    BOOL _mapSettingsTrafficEnabled;
    BOOL _mapUiShownAqiShown;
    BOOL _mapUiShownWeatherShown;
    BOOL _mapViewLocationIsTourist;
    BOOL _mapViewLocationPuckInViewport;
    BOOL _placeCardTransitadvisorybanner;
    BOOL _rideBookingAppEnabled;
    BOOL _rideBookingAppInstalled;
    BOOL _tableBookingAppEnabled;
    BOOL _tableBookingAppInstalled;
    BOOL _venueExperienceShown;
    struct {
        unsigned int has_lookaroundSessionEndTime:1;
        unsigned int has_lookaroundSessionStartTime:1;
        unsigned int has_lookaroundZoom:1;
        unsigned int has_mapViewLocationTouristTimestamp:1;
        unsigned int has_mapViewZoomLevel:1;
        unsigned int has_placeCardPlaceactiondetailsAnimationid:1;
        unsigned int has_placeCardPlaceactiondetailsBusinessid:1;
        unsigned int has_placeCardPlaceactiondetailsPlaceid:1;
        unsigned int has_placeCardPlaceactiondetailsSearchresponserelativetimestamp:1;
        unsigned int has_placeCardPlaceactiondetailsTargetid:1;
        unsigned int has_placeCardPlaceactiondetailsTransitplacecardTransitdeparturesequenceusageLineid:1;
        unsigned int has_lookaroundHeading:1;
        unsigned int has_lookaroundNumberPoisInView:1;
        unsigned int has_mapSettingsLocationprecisiontype:1;
        unsigned int has_mapSettingsNavVolume:1;
        unsigned int has_mapSettingsTransportMode:1;
        unsigned int has_mapUiCurrentTabIndex:1;
        unsigned int has_mapUiLayoutInfo:1;
        unsigned int has_mapUiLayoutStyle:1;
        unsigned int has_mapUiNumberOfTabsOpen:1;
        unsigned int has_mapViewMapType:1;
        unsigned int has_placeCardPlaceactiondetailsLocalsearchproviderid:1;
        unsigned int has_placeCardPlaceactiondetailsResultindex:1;
        unsigned int has_placeCardPlaceactiondetailsTransitplacecardTransitcategory:1;
        unsigned int has_placeCardPlacecardtype:1;
        unsigned int has_restoreLayoutinfo:1;
        unsigned int has_restoreLayoutstyle:1;
        unsigned int has_restoreUitarget:1;
        unsigned int has_suggestionsAcsequencenumber:1;
        unsigned int has_suggestionsSearchfieldtype:1;
        unsigned int has_suggestionsSelectedindex:1;
        unsigned int has_deviceInDarkMode:1;
        unsigned int has_landscape:1;
        unsigned int has_lookAroundEntryIconShown:1;
        unsigned int has_lookaroundIsLabelingShown:1;
        unsigned int has_lookaroundSessionHadMoveAction:1;
        unsigned int has_lookaroundSessionHadPanAction:1;
        unsigned int has_lookaroundSessionHadShareAction:1;
        unsigned int has_lookaroundSessionHadTapPoiAction:1;
        unsigned int has_lookaroundSessionHadZoomAction:1;
        unsigned int has_mapSettingsAvoidBusyRoads:1;
        unsigned int has_mapSettingsAvoidHighways:1;
        unsigned int has_mapSettingsAvoidHills:1;
        unsigned int has_mapSettingsAvoidStairs:1;
        unsigned int has_mapSettingsAvoidTolls:1;
        unsigned int has_mapSettingsEBike:1;
        unsigned int has_mapSettingsFindMyCarEnabled:1;
        unsigned int has_mapSettingsHeadingEnabled:1;
        unsigned int has_mapSettingsLabelEnabled:1;
        unsigned int has_mapSettingsPauseSpokenAudioEnabled:1;
        unsigned int has_mapSettingsSpeedLimitEnabled:1;
        unsigned int has_mapSettingsTrafficEnabled:1;
        unsigned int has_mapUiShownAqiShown:1;
        unsigned int has_mapUiShownWeatherShown:1;
        unsigned int has_mapViewLocationIsTourist:1;
        unsigned int has_mapViewLocationPuckInViewport:1;
        unsigned int has_placeCardTransitadvisorybanner:1;
        unsigned int has_rideBookingAppEnabled:1;
        unsigned int has_rideBookingAppInstalled:1;
        unsigned int has_tableBookingAppEnabled:1;
        unsigned int has_tableBookingAppInstalled:1;
        unsigned int has_venueExperienceShown:1;
        unsigned int read_placeCardPossibleactions:1;
        unsigned int read_placeCardUnactionableuielements:1;
        unsigned int read_carPlayInfo:1;
        unsigned int read_curatedCollectionState:1;
        unsigned int read_deviceInputLocale:1;
        unsigned int read_deviceOutputLocale:1;
        unsigned int read_lookaroundLocation:1;
        unsigned int read_mapLaunchLaunchuri:1;
        unsigned int read_mapLaunchReferringwebsite:1;
        unsigned int read_mapLaunchSourceappid:1;
        unsigned int read_mapViewMapRegion:1;
        unsigned int read_mapsServerMetadataSuggestionEntryDisplayeds:1;
        unsigned int read_mapsServerMetadataSuggestionEntryTappedOn:1;
        unsigned int read_mapsServerMetadata:1;
        unsigned int read_metroRegion:1;
        unsigned int read_placeCardPlaceactiondetailsActionurl:1;
        unsigned int read_placeCardPlaceactiondetailsDestinationapp:1;
        unsigned int read_placeCardPlaceactiondetailsPhotoid:1;
        unsigned int read_placeCardPlaceactiondetailsRichproviderid:1;
        unsigned int read_placeCardPlaceactiondetailsTransitplacecardIncidenttype:1;
        unsigned int read_placeCardPlaceactiondetailsTransitplacecardTransitdeparturesequenceusageDirection:1;
        unsigned int read_placeCardPlaceactiondetailsTransitplacecardTransitdeparturesequenceusageHeadsign:1;
        unsigned int read_placeCardPlaceactiondetailsTransitplacecardTransitsystemname:1;
        unsigned int read_placeCardPlacecardcategory:1;
        unsigned int read_predExTrainingData:1;
        unsigned int read_routeRouteDetails:1;
        unsigned int read_suggestionsDisplayedresults:1;
        unsigned int read_suggestionsSearchstring:1;
        unsigned int read_ugcPhotoState:1;
        unsigned int read_userHomecountry:1;
        unsigned int read_userHomemetro:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

@property (strong, nonatomic) GEOCarInfo *carPlayInfo;
@property (strong, nonatomic) GEOLogMsgStateCuratedCollection *curatedCollectionState;
@property (nonatomic) BOOL deviceInDarkMode;
@property (strong, nonatomic) NSString *deviceInputLocale;
@property (strong, nonatomic) NSString *deviceOutputLocale;
@property (readonly, nonatomic) BOOL hasCarPlayInfo;
@property (readonly, nonatomic) BOOL hasCuratedCollectionState;
@property (nonatomic) BOOL hasDeviceInDarkMode;
@property (readonly, nonatomic) BOOL hasDeviceInputLocale;
@property (readonly, nonatomic) BOOL hasDeviceOutputLocale;
@property (nonatomic) BOOL hasLandscape;
@property (nonatomic) BOOL hasLookAroundEntryIconShown;
@property (nonatomic) BOOL hasLookaroundHeading;
@property (nonatomic) BOOL hasLookaroundIsLabelingShown;
@property (readonly, nonatomic) BOOL hasLookaroundLocation;
@property (nonatomic) BOOL hasLookaroundNumberPoisInView;
@property (nonatomic) BOOL hasLookaroundSessionEndTime;
@property (nonatomic) BOOL hasLookaroundSessionHadMoveAction;
@property (nonatomic) BOOL hasLookaroundSessionHadPanAction;
@property (nonatomic) BOOL hasLookaroundSessionHadShareAction;
@property (nonatomic) BOOL hasLookaroundSessionHadTapPoiAction;
@property (nonatomic) BOOL hasLookaroundSessionHadZoomAction;
@property (nonatomic) BOOL hasLookaroundSessionStartTime;
@property (nonatomic) BOOL hasLookaroundZoom;
@property (readonly, nonatomic) BOOL hasMapLaunchLaunchuri;
@property (readonly, nonatomic) BOOL hasMapLaunchReferringwebsite;
@property (readonly, nonatomic) BOOL hasMapLaunchSourceappid;
@property (nonatomic) BOOL hasMapSettingsAvoidBusyRoads;
@property (nonatomic) BOOL hasMapSettingsAvoidHighways;
@property (nonatomic) BOOL hasMapSettingsAvoidHills;
@property (nonatomic) BOOL hasMapSettingsAvoidStairs;
@property (nonatomic) BOOL hasMapSettingsAvoidTolls;
@property (nonatomic) BOOL hasMapSettingsEBike;
@property (nonatomic) BOOL hasMapSettingsFindMyCarEnabled;
@property (nonatomic) BOOL hasMapSettingsHeadingEnabled;
@property (nonatomic) BOOL hasMapSettingsLabelEnabled;
@property (nonatomic) BOOL hasMapSettingsLocationprecisiontype;
@property (nonatomic) BOOL hasMapSettingsNavVolume;
@property (nonatomic) BOOL hasMapSettingsPauseSpokenAudioEnabled;
@property (nonatomic) BOOL hasMapSettingsSpeedLimitEnabled;
@property (nonatomic) BOOL hasMapSettingsTrafficEnabled;
@property (nonatomic) BOOL hasMapSettingsTransportMode;
@property (nonatomic) BOOL hasMapUiCurrentTabIndex;
@property (nonatomic) BOOL hasMapUiLayoutInfo;
@property (nonatomic) BOOL hasMapUiLayoutStyle;
@property (nonatomic) BOOL hasMapUiNumberOfTabsOpen;
@property (nonatomic) BOOL hasMapUiShownAqiShown;
@property (nonatomic) BOOL hasMapUiShownWeatherShown;
@property (nonatomic) BOOL hasMapViewLocationIsTourist;
@property (nonatomic) BOOL hasMapViewLocationPuckInViewport;
@property (nonatomic) BOOL hasMapViewLocationTouristTimestamp;
@property (readonly, nonatomic) BOOL hasMapViewMapRegion;
@property (nonatomic) BOOL hasMapViewMapType;
@property (nonatomic) BOOL hasMapViewZoomLevel;
@property (readonly, nonatomic) BOOL hasMapsServerMetadata;
@property (readonly, nonatomic) BOOL hasMapsServerMetadataSuggestionEntryTappedOn;
@property (readonly, nonatomic) BOOL hasMetroRegion;
@property (readonly, nonatomic) BOOL hasPlaceCardPlaceactiondetailsActionurl;
@property (nonatomic) BOOL hasPlaceCardPlaceactiondetailsAnimationid;
@property (nonatomic) BOOL hasPlaceCardPlaceactiondetailsBusinessid;
@property (readonly, nonatomic) BOOL hasPlaceCardPlaceactiondetailsDestinationapp;
@property (nonatomic) BOOL hasPlaceCardPlaceactiondetailsLocalsearchproviderid;
@property (readonly, nonatomic) BOOL hasPlaceCardPlaceactiondetailsPhotoid;
@property (nonatomic) BOOL hasPlaceCardPlaceactiondetailsPlaceid;
@property (nonatomic) BOOL hasPlaceCardPlaceactiondetailsResultindex;
@property (readonly, nonatomic) BOOL hasPlaceCardPlaceactiondetailsRichproviderid;
@property (nonatomic) BOOL hasPlaceCardPlaceactiondetailsSearchresponserelativetimestamp;
@property (nonatomic) BOOL hasPlaceCardPlaceactiondetailsTargetid;
@property (readonly, nonatomic) BOOL hasPlaceCardPlaceactiondetailsTransitplacecardIncidenttype;
@property (nonatomic) BOOL hasPlaceCardPlaceactiondetailsTransitplacecardTransitcategory;
@property (readonly, nonatomic) BOOL hasPlaceCardPlaceactiondetailsTransitplacecardTransitdeparturesequenceusageDirection;
@property (readonly, nonatomic) BOOL hasPlaceCardPlaceactiondetailsTransitplacecardTransitdeparturesequenceusageHeadsign;
@property (nonatomic) BOOL hasPlaceCardPlaceactiondetailsTransitplacecardTransitdeparturesequenceusageLineid;
@property (readonly, nonatomic) BOOL hasPlaceCardPlaceactiondetailsTransitplacecardTransitsystemname;
@property (readonly, nonatomic) BOOL hasPlaceCardPlacecardcategory;
@property (nonatomic) BOOL hasPlaceCardPlacecardtype;
@property (nonatomic) BOOL hasPlaceCardTransitadvisorybanner;
@property (readonly, nonatomic) BOOL hasPredExTrainingData;
@property (nonatomic) BOOL hasRestoreLayoutinfo;
@property (nonatomic) BOOL hasRestoreLayoutstyle;
@property (nonatomic) BOOL hasRestoreUitarget;
@property (nonatomic) BOOL hasRideBookingAppEnabled;
@property (nonatomic) BOOL hasRideBookingAppInstalled;
@property (readonly, nonatomic) BOOL hasRouteRouteDetails;
@property (nonatomic) BOOL hasSuggestionsAcsequencenumber;
@property (nonatomic) BOOL hasSuggestionsSearchfieldtype;
@property (readonly, nonatomic) BOOL hasSuggestionsSearchstring;
@property (nonatomic) BOOL hasSuggestionsSelectedindex;
@property (nonatomic) BOOL hasTableBookingAppEnabled;
@property (nonatomic) BOOL hasTableBookingAppInstalled;
@property (readonly, nonatomic) BOOL hasUgcPhotoState;
@property (readonly, nonatomic) BOOL hasUserHomecountry;
@property (readonly, nonatomic) BOOL hasUserHomemetro;
@property (nonatomic) BOOL hasVenueExperienceShown;
@property (nonatomic) BOOL landscape;
@property (nonatomic) BOOL lookAroundEntryIconShown;
@property (nonatomic) unsigned int lookaroundHeading;
@property (nonatomic) BOOL lookaroundIsLabelingShown;
@property (strong, nonatomic) GEOLocation *lookaroundLocation;
@property (nonatomic) unsigned int lookaroundNumberPoisInView;
@property (nonatomic) double lookaroundSessionEndTime;
@property (nonatomic) BOOL lookaroundSessionHadMoveAction;
@property (nonatomic) BOOL lookaroundSessionHadPanAction;
@property (nonatomic) BOOL lookaroundSessionHadShareAction;
@property (nonatomic) BOOL lookaroundSessionHadTapPoiAction;
@property (nonatomic) BOOL lookaroundSessionHadZoomAction;
@property (nonatomic) double lookaroundSessionStartTime;
@property (nonatomic) double lookaroundZoom;
@property (strong, nonatomic) NSString *mapLaunchLaunchuri;
@property (strong, nonatomic) NSString *mapLaunchReferringwebsite;
@property (strong, nonatomic) NSString *mapLaunchSourceappid;
@property (nonatomic) BOOL mapSettingsAvoidBusyRoads;
@property (nonatomic) BOOL mapSettingsAvoidHighways;
@property (nonatomic) BOOL mapSettingsAvoidHills;
@property (nonatomic) BOOL mapSettingsAvoidStairs;
@property (nonatomic) BOOL mapSettingsAvoidTolls;
@property (nonatomic) BOOL mapSettingsEBike;
@property (nonatomic) BOOL mapSettingsFindMyCarEnabled;
@property (nonatomic) BOOL mapSettingsHeadingEnabled;
@property (nonatomic) BOOL mapSettingsLabelEnabled;
@property (nonatomic) int mapSettingsLocationprecisiontype;
@property (nonatomic) int mapSettingsNavVolume;
@property (nonatomic) BOOL mapSettingsPauseSpokenAudioEnabled;
@property (nonatomic) BOOL mapSettingsSpeedLimitEnabled;
@property (nonatomic) BOOL mapSettingsTrafficEnabled;
@property (nonatomic) int mapSettingsTransportMode;
@property (nonatomic) unsigned int mapUiCurrentTabIndex;
@property (nonatomic) int mapUiLayoutInfo;
@property (nonatomic) int mapUiLayoutStyle;
@property (nonatomic) unsigned int mapUiNumberOfTabsOpen;
@property (nonatomic) BOOL mapUiShownAqiShown;
@property (nonatomic) BOOL mapUiShownWeatherShown;
@property (nonatomic) BOOL mapViewLocationIsTourist;
@property (nonatomic) BOOL mapViewLocationPuckInViewport;
@property (nonatomic) double mapViewLocationTouristTimestamp;
@property (strong, nonatomic) GEOMapRegion *mapViewMapRegion;
@property (nonatomic) int mapViewMapType;
@property (nonatomic) double mapViewZoomLevel;
@property (strong, nonatomic) GEOMapsServerMetadata *mapsServerMetadata;
@property (strong, nonatomic) NSMutableArray *mapsServerMetadataSuggestionEntryDisplayeds;
@property (strong, nonatomic) NSData *mapsServerMetadataSuggestionEntryTappedOn;
@property (strong, nonatomic) NSString *metroRegion;
@property (strong, nonatomic) NSString *placeCardPlaceactiondetailsActionurl;
@property (nonatomic) unsigned long long placeCardPlaceactiondetailsAnimationid;
@property (nonatomic) unsigned long long placeCardPlaceactiondetailsBusinessid;
@property (strong, nonatomic) NSString *placeCardPlaceactiondetailsDestinationapp;
@property (nonatomic) int placeCardPlaceactiondetailsLocalsearchproviderid;
@property (strong, nonatomic) NSString *placeCardPlaceactiondetailsPhotoid;
@property (nonatomic) long long placeCardPlaceactiondetailsPlaceid;
@property (nonatomic) int placeCardPlaceactiondetailsResultindex;
@property (strong, nonatomic) NSString *placeCardPlaceactiondetailsRichproviderid;
@property (nonatomic) double placeCardPlaceactiondetailsSearchresponserelativetimestamp;
@property (nonatomic) unsigned long long placeCardPlaceactiondetailsTargetid;
@property (strong, nonatomic) NSString *placeCardPlaceactiondetailsTransitplacecardIncidenttype;
@property (nonatomic) int placeCardPlaceactiondetailsTransitplacecardTransitcategory;
@property (strong, nonatomic) NSString *placeCardPlaceactiondetailsTransitplacecardTransitdeparturesequenceusageDirection;
@property (strong, nonatomic) NSString *placeCardPlaceactiondetailsTransitplacecardTransitdeparturesequenceusageHeadsign;
@property (nonatomic) unsigned long long placeCardPlaceactiondetailsTransitplacecardTransitdeparturesequenceusageLineid;
@property (strong, nonatomic) NSString *placeCardPlaceactiondetailsTransitplacecardTransitsystemname;
@property (strong, nonatomic) NSString *placeCardPlacecardcategory;
@property (nonatomic) int placeCardPlacecardtype;
@property (readonly, nonatomic) int *placeCardPossibleactions;
@property (readonly, nonatomic) unsigned long long placeCardPossibleactionsCount;
@property (nonatomic) BOOL placeCardTransitadvisorybanner;
@property (readonly, nonatomic) int *placeCardUnactionableuielements;
@property (readonly, nonatomic) unsigned long long placeCardUnactionableuielementsCount;
@property (strong, nonatomic) GEOLogMsgEventPredExTrainingData *predExTrainingData;
@property (nonatomic) int restoreLayoutinfo;
@property (nonatomic) int restoreLayoutstyle;
@property (nonatomic) int restoreUitarget;
@property (nonatomic) BOOL rideBookingAppEnabled;
@property (nonatomic) BOOL rideBookingAppInstalled;
@property (strong, nonatomic) GEORouteDetails *routeRouteDetails;
@property (nonatomic) int suggestionsAcsequencenumber;
@property (strong, nonatomic) NSMutableArray *suggestionsDisplayedresults;
@property (nonatomic) int suggestionsSearchfieldtype;
@property (strong, nonatomic) NSString *suggestionsSearchstring;
@property (nonatomic) int suggestionsSelectedindex;
@property (nonatomic) BOOL tableBookingAppEnabled;
@property (nonatomic) BOOL tableBookingAppInstalled;
@property (strong, nonatomic) GEOLogMsgStateUGCPhoto *ugcPhotoState;
@property (strong, nonatomic) NSString *userHomecountry;
@property (strong, nonatomic) NSString *userHomemetro;
@property (nonatomic) BOOL venueExperienceShown;

+ (BOOL)isValid:(id)arg1;
+ (Class)mapsServerMetadataSuggestionEntryDisplayedType;
+ (Class)suggestionsDisplayedresultsType;
- (void).cxx_destruct;
- (int)StringAsMapSettingsLocationprecisiontype:(id)arg1;
- (int)StringAsMapSettingsNavVolume:(id)arg1;
- (int)StringAsMapSettingsTransportMode:(id)arg1;
- (int)StringAsMapUiLayoutInfo:(id)arg1;
- (int)StringAsMapUiLayoutStyle:(id)arg1;
- (int)StringAsMapViewMapType:(id)arg1;
- (int)StringAsPlaceCardPlaceactiondetailsTransitplacecardTransitcategory:(id)arg1;
- (int)StringAsPlaceCardPlacecardtype:(id)arg1;
- (int)StringAsRestoreLayoutinfo:(id)arg1;
- (int)StringAsRestoreLayoutstyle:(id)arg1;
- (int)StringAsRestoreUitarget:(id)arg1;
- (int)StringAsSuggestionsSearchfieldtype:(id)arg1;
- (void)addMapsServerMetadataSuggestionEntryDisplayed:(id)arg1;
- (void)addPlaceCardPossibleactions:(int)arg1;
- (void)addPlaceCardUnactionableuielements:(int)arg1;
- (void)addSuggestionsDisplayedresults:(id)arg1;
- (void)clearMapsServerMetadataSuggestionEntryDisplayeds;
- (void)clearPlaceCardPossibleactions;
- (void)clearPlaceCardUnactionableuielements;
- (void)clearSuggestionsDisplayedresults;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)mapSettingsLocationprecisiontypeAsString:(int)arg1;
- (id)mapSettingsNavVolumeAsString:(int)arg1;
- (id)mapSettingsTransportModeAsString:(int)arg1;
- (id)mapUiLayoutInfoAsString:(int)arg1;
- (id)mapUiLayoutStyleAsString:(int)arg1;
- (id)mapViewMapTypeAsString:(int)arg1;
- (id)mapsServerMetadataSuggestionEntryDisplayedAtIndex:(unsigned long long)arg1;
- (unsigned long long)mapsServerMetadataSuggestionEntryDisplayedsCount;
- (void)mergeFrom:(id)arg1;
- (id)placeCardPlaceactiondetailsTransitplacecardTransitcategoryAsString:(int)arg1;
- (id)placeCardPlacecardtypeAsString:(int)arg1;
- (int)placeCardPossibleactionsAtIndex:(unsigned long long)arg1;
- (int)placeCardUnactionableuielementsAtIndex:(unsigned long long)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)restoreLayoutinfoAsString:(int)arg1;
- (id)restoreLayoutstyleAsString:(int)arg1;
- (id)restoreUitargetAsString:(int)arg1;
- (void)setPlaceCardPossibleactions:(int *)arg1 count:(unsigned long long)arg2;
- (void)setPlaceCardUnactionableuielements:(int *)arg1 count:(unsigned long long)arg2;
- (id)suggestionsDisplayedresultsAtIndex:(unsigned long long)arg1;
- (unsigned long long)suggestionsDisplayedresultsCount;
- (id)suggestionsSearchfieldtypeAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end
