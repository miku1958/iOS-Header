//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEODataSetDescription, GEOVersionManifest, NSData, NSMutableArray, NSString, PBUnknownFields;

@interface GEOActiveTileGroup : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    struct GEOTileSetRegion *_hybridUnavailableRegions;
    unsigned long long _hybridUnavailableRegionsCount;
    unsigned long long _hybridUnavailableRegionsSpace;
    CDStruct_95bda58d _activeScales;
    CDStruct_95bda58d _activeScenarios;
    struct GEOMapLayersMetadata _mapLayersMetadata;
    NSString *_abExperimentURL;
    NSMutableArray *_activeResources;
    NSString *_addressCorrectionInitURL;
    NSString *_addressCorrectionUpdateURL;
    NSMutableArray *_announcementsSupportedLanguages;
    NSString *_announcementsURL;
    NSMutableArray *_attributions;
    NSString *_backgroundDispatcherURL;
    NSString *_backgroundRevGeoURL;
    NSString *_batchReverseGeocoderURL;
    NSString *_batchTrafficProbeURL;
    NSString *_bluePOIURL;
    NSString *_businessPortalBaseURL;
    GEODataSetDescription *_dataSet;
    NSString *_directionsURL;
    NSString *_dispatcherURL;
    NSString *_etaURL;
    NSMutableArray *_fontChecksums;
    NSMutableArray *_fonts;
    NSMutableArray *_iconChecksums;
    NSMutableArray *_icons;
    unsigned int _identifier;
    NSMutableArray *_locationShiftEnabledRegions;
    unsigned int _locationShiftVersion;
    NSString *_logMessageUsageURL;
    NSString *_logMessageUsageV3URL;
    NSMutableArray *_mapLayers;
    unsigned int _modelVersion;
    int _operationMode;
    NSString *_polyLocationShiftURL;
    NSString *_proactiveRoutingURL;
    NSString *_problemCategoriesURL;
    NSString *_problemOptInURL;
    NSString *_problemStatusURL;
    NSString *_problemSubmissionURL;
    NSString *_realtimeTrafficProbeURL;
    NSMutableArray *_regionalResourceRegions;
    NSMutableArray *_regionalResourceTiles;
    NSMutableArray *_regionalResources;
    NSString *_regionalResourcesURL;
    NSString *_releaseInfo;
    NSData *_reserved;
    NSMutableArray *_resources;
    NSString *_resourcesURL;
    NSString *_reverseGeocoderVersionsURL;
    NSString *_searchAttributionManifestURL;
    NSString *_simpleETAURL;
    NSString *_spatialLookupURL;
    NSMutableArray *_staleResources;
    NSMutableArray *_styleSheetChecksums;
    NSMutableArray *_styleSheets;
    NSMutableArray *_textureChecksums;
    NSMutableArray *_textures;
    NSMutableArray *_tileSets;
    NSString *_uniqueIdentifier;
    GEOVersionManifest *_versionManifest;
    NSMutableArray *_xmlChecksums;
    NSMutableArray *_xmls;
    struct {
        unsigned int mapLayersMetadata:1;
        unsigned int locationShiftVersion:1;
        unsigned int modelVersion:1;
        unsigned int operationMode:1;
    } _has;
}

@property (strong, nonatomic) NSString *abExperimentURL; // @synthesize abExperimentURL=_abExperimentURL;
@property (strong, nonatomic) NSMutableArray *activeResources; // @synthesize activeResources=_activeResources;
@property (readonly, nonatomic) int *activeScales;
@property (readonly, nonatomic) unsigned long long activeScalesCount;
@property (readonly, nonatomic) int *activeScenarios;
@property (readonly, nonatomic) unsigned long long activeScenariosCount;
@property (strong, nonatomic) NSString *addressCorrectionInitURL; // @synthesize addressCorrectionInitURL=_addressCorrectionInitURL;
@property (strong, nonatomic) NSString *addressCorrectionUpdateURL; // @synthesize addressCorrectionUpdateURL=_addressCorrectionUpdateURL;
@property (strong, nonatomic) NSMutableArray *announcementsSupportedLanguages; // @synthesize announcementsSupportedLanguages=_announcementsSupportedLanguages;
@property (strong, nonatomic) NSString *announcementsURL; // @synthesize announcementsURL=_announcementsURL;
@property (strong, nonatomic) NSMutableArray *attributions; // @synthesize attributions=_attributions;
@property (strong, nonatomic) NSString *backgroundDispatcherURL; // @synthesize backgroundDispatcherURL=_backgroundDispatcherURL;
@property (strong, nonatomic) NSString *backgroundRevGeoURL; // @synthesize backgroundRevGeoURL=_backgroundRevGeoURL;
@property (strong, nonatomic) NSString *batchReverseGeocoderURL; // @synthesize batchReverseGeocoderURL=_batchReverseGeocoderURL;
@property (strong, nonatomic) NSString *batchTrafficProbeURL; // @synthesize batchTrafficProbeURL=_batchTrafficProbeURL;
@property (strong, nonatomic) NSString *bluePOIURL; // @synthesize bluePOIURL=_bluePOIURL;
@property (strong, nonatomic) NSString *businessPortalBaseURL; // @synthesize businessPortalBaseURL=_businessPortalBaseURL;
@property (strong, nonatomic) GEODataSetDescription *dataSet; // @synthesize dataSet=_dataSet;
@property (strong, nonatomic) NSString *directionsURL; // @synthesize directionsURL=_directionsURL;
@property (strong, nonatomic) NSString *dispatcherURL; // @synthesize dispatcherURL=_dispatcherURL;
@property (strong, nonatomic) NSString *etaURL; // @synthesize etaURL=_etaURL;
@property (strong, nonatomic) NSMutableArray *fontChecksums; // @synthesize fontChecksums=_fontChecksums;
@property (strong, nonatomic) NSMutableArray *fonts; // @synthesize fonts=_fonts;
@property (readonly, nonatomic) BOOL hasAbExperimentURL;
@property (readonly, nonatomic) BOOL hasAddressCorrectionInitURL;
@property (readonly, nonatomic) BOOL hasAddressCorrectionUpdateURL;
@property (readonly, nonatomic) BOOL hasAnnouncementsURL;
@property (readonly, nonatomic) BOOL hasBackgroundDispatcherURL;
@property (readonly, nonatomic) BOOL hasBackgroundRevGeoURL;
@property (readonly, nonatomic) BOOL hasBatchReverseGeocoderURL;
@property (readonly, nonatomic) BOOL hasBatchTrafficProbeURL;
@property (readonly, nonatomic) BOOL hasBluePOIURL;
@property (readonly, nonatomic) BOOL hasBusinessPortalBaseURL;
@property (readonly, nonatomic) BOOL hasDataSet;
@property (readonly, nonatomic) BOOL hasDirectionsURL;
@property (readonly, nonatomic) BOOL hasDispatcherURL;
@property (readonly, nonatomic) BOOL hasEtaURL;
@property (nonatomic) BOOL hasLocationShiftVersion;
@property (readonly, nonatomic) BOOL hasLogMessageUsageURL;
@property (readonly, nonatomic) BOOL hasLogMessageUsageV3URL;
@property (nonatomic) BOOL hasMapLayersMetadata;
@property (nonatomic) BOOL hasModelVersion;
@property (nonatomic) BOOL hasOperationMode;
@property (readonly, nonatomic) BOOL hasPolyLocationShiftURL;
@property (readonly, nonatomic) BOOL hasProactiveRoutingURL;
@property (readonly, nonatomic) BOOL hasProblemCategoriesURL;
@property (readonly, nonatomic) BOOL hasProblemOptInURL;
@property (readonly, nonatomic) BOOL hasProblemStatusURL;
@property (readonly, nonatomic) BOOL hasProblemSubmissionURL;
@property (readonly, nonatomic) BOOL hasRealtimeTrafficProbeURL;
@property (readonly, nonatomic) BOOL hasRegionalResourcesURL;
@property (readonly, nonatomic) BOOL hasReleaseInfo;
@property (readonly, nonatomic) BOOL hasReserved;
@property (readonly, nonatomic) BOOL hasResourcesURL;
@property (readonly, nonatomic) BOOL hasReverseGeocoderVersionsURL;
@property (readonly, nonatomic) BOOL hasSearchAttributionManifestURL;
@property (readonly, nonatomic) BOOL hasSimpleETAURL;
@property (readonly, nonatomic) BOOL hasSpatialLookupURL;
@property (readonly, nonatomic) BOOL hasUniqueIdentifier;
@property (readonly, nonatomic) BOOL hasVersionManifest;
@property (readonly, nonatomic) struct GEOTileSetRegion *hybridUnavailableRegions;
@property (readonly, nonatomic) unsigned long long hybridUnavailableRegionsCount;
@property (strong, nonatomic) NSMutableArray *iconChecksums; // @synthesize iconChecksums=_iconChecksums;
@property (strong, nonatomic) NSMutableArray *icons; // @synthesize icons=_icons;
@property (nonatomic) unsigned int identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) NSMutableArray *locationShiftEnabledRegions; // @synthesize locationShiftEnabledRegions=_locationShiftEnabledRegions;
@property (nonatomic) unsigned int locationShiftVersion; // @synthesize locationShiftVersion=_locationShiftVersion;
@property (strong, nonatomic) NSString *logMessageUsageURL; // @synthesize logMessageUsageURL=_logMessageUsageURL;
@property (strong, nonatomic) NSString *logMessageUsageV3URL; // @synthesize logMessageUsageV3URL=_logMessageUsageV3URL;
@property (strong, nonatomic) NSMutableArray *mapLayers; // @synthesize mapLayers=_mapLayers;
@property (nonatomic) struct GEOMapLayersMetadata mapLayersMetadata; // @synthesize mapLayersMetadata=_mapLayersMetadata;
@property (nonatomic) unsigned int modelVersion; // @synthesize modelVersion=_modelVersion;
@property (nonatomic) int operationMode; // @synthesize operationMode=_operationMode;
@property (strong, nonatomic) NSString *polyLocationShiftURL; // @synthesize polyLocationShiftURL=_polyLocationShiftURL;
@property (strong, nonatomic) NSString *proactiveRoutingURL; // @synthesize proactiveRoutingURL=_proactiveRoutingURL;
@property (strong, nonatomic) NSString *problemCategoriesURL; // @synthesize problemCategoriesURL=_problemCategoriesURL;
@property (strong, nonatomic) NSString *problemOptInURL; // @synthesize problemOptInURL=_problemOptInURL;
@property (strong, nonatomic) NSString *problemStatusURL; // @synthesize problemStatusURL=_problemStatusURL;
@property (strong, nonatomic) NSString *problemSubmissionURL; // @synthesize problemSubmissionURL=_problemSubmissionURL;
@property (strong, nonatomic) NSString *realtimeTrafficProbeURL; // @synthesize realtimeTrafficProbeURL=_realtimeTrafficProbeURL;
@property (strong, nonatomic) NSMutableArray *regionalResourceRegions; // @synthesize regionalResourceRegions=_regionalResourceRegions;
@property (strong, nonatomic) NSMutableArray *regionalResourceTiles; // @synthesize regionalResourceTiles=_regionalResourceTiles;
@property (strong, nonatomic) NSMutableArray *regionalResources; // @synthesize regionalResources=_regionalResources;
@property (strong, nonatomic) NSString *regionalResourcesURL; // @synthesize regionalResourcesURL=_regionalResourcesURL;
@property (strong, nonatomic) NSString *releaseInfo; // @synthesize releaseInfo=_releaseInfo;
@property (strong, nonatomic) NSData *reserved; // @synthesize reserved=_reserved;
@property (strong, nonatomic) NSMutableArray *resources; // @synthesize resources=_resources;
@property (strong, nonatomic) NSString *resourcesURL; // @synthesize resourcesURL=_resourcesURL;
@property (strong, nonatomic) NSString *reverseGeocoderVersionsURL; // @synthesize reverseGeocoderVersionsURL=_reverseGeocoderVersionsURL;
@property (strong, nonatomic) NSString *searchAttributionManifestURL; // @synthesize searchAttributionManifestURL=_searchAttributionManifestURL;
@property (strong, nonatomic) NSString *simpleETAURL; // @synthesize simpleETAURL=_simpleETAURL;
@property (strong, nonatomic) NSString *spatialLookupURL; // @synthesize spatialLookupURL=_spatialLookupURL;
@property (strong, nonatomic) NSMutableArray *staleResources; // @synthesize staleResources=_staleResources;
@property (strong, nonatomic) NSMutableArray *styleSheetChecksums; // @synthesize styleSheetChecksums=_styleSheetChecksums;
@property (strong, nonatomic) NSMutableArray *styleSheets; // @synthesize styleSheets=_styleSheets;
@property (strong, nonatomic) NSMutableArray *textureChecksums; // @synthesize textureChecksums=_textureChecksums;
@property (strong, nonatomic) NSMutableArray *textures; // @synthesize textures=_textures;
@property (strong, nonatomic) NSMutableArray *tileSets; // @synthesize tileSets=_tileSets;
@property (strong, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (strong, nonatomic) GEOVersionManifest *versionManifest; // @synthesize versionManifest=_versionManifest;
@property (strong, nonatomic) NSMutableArray *xmlChecksums; // @synthesize xmlChecksums=_xmlChecksums;
@property (strong, nonatomic) NSMutableArray *xmls; // @synthesize xmls=_xmls;

+ (Class)activeResourceType;
+ (Class)announcementsSupportedLanguagesType;
+ (Class)attributionType;
+ (Class)fontChecksumType;
+ (Class)fontType;
+ (Class)iconChecksumType;
+ (Class)iconType;
+ (Class)locationShiftEnabledRegionType;
+ (Class)mapLayerType;
+ (Class)regionalResourceRegionType;
+ (Class)regionalResourceTileType;
+ (Class)regionalResourceType;
+ (Class)resourceType;
+ (Class)staleResourceType;
+ (Class)styleSheetChecksumType;
+ (Class)styleSheetType;
+ (Class)textureChecksumType;
+ (Class)textureType;
+ (Class)tileSetType;
+ (Class)xmlChecksumType;
+ (Class)xmlType;
- (void).cxx_destruct;
- (int)StringAsActiveScales:(id)arg1;
- (int)StringAsActiveScenarios:(id)arg1;
- (int)StringAsOperationMode:(id)arg1;
- (id)_activeTileSetForStyle:(int)arg1 size:(int)arg2 scale:(int)arg3;
- (void)_resetBestLanguages;
- (id)activeResourceAtIndex:(unsigned long long)arg1;
- (unsigned long long)activeResourcesCount;
- (int)activeScaleAtIndex:(unsigned long long)arg1;
- (id)activeScalesAsString:(int)arg1;
- (int)activeScenarioAtIndex:(unsigned long long)arg1;
- (id)activeScenariosAsString:(int)arg1;
- (id)activeTileSetForKey:(const struct _GEOTileKey *)arg1;
- (id)activeTileSetForTileType:(int)arg1 scale:(int)arg2;
- (void)addActiveResource:(id)arg1;
- (void)addActiveScale:(int)arg1;
- (void)addActiveScenario:(int)arg1;
- (void)addAnnouncementsSupportedLanguages:(id)arg1;
- (void)addAttribution:(id)arg1;
- (void)addFont:(id)arg1;
- (void)addFontChecksum:(id)arg1;
- (void)addHybridUnavailableRegion:(struct GEOTileSetRegion)arg1;
- (void)addIcon:(id)arg1;
- (void)addIconChecksum:(id)arg1;
- (void)addLocationShiftEnabledRegion:(id)arg1;
- (void)addMapLayer:(id)arg1;
- (void)addRegionalResource:(id)arg1;
- (void)addRegionalResourceRegion:(id)arg1;
- (void)addRegionalResourceTile:(id)arg1;
- (void)addResource:(id)arg1;
- (void)addStaleResource:(id)arg1;
- (void)addStyleSheet:(id)arg1;
- (void)addStyleSheetChecksum:(id)arg1;
- (void)addTexture:(id)arg1;
- (void)addTextureChecksum:(id)arg1;
- (void)addTileSet:(id)arg1;
- (void)addXml:(id)arg1;
- (void)addXmlChecksum:(id)arg1;
- (id)announcementsSupportedLanguagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)announcementsSupportedLanguagesCount;
- (id)attributionAtIndex:(unsigned long long)arg1;
- (unsigned long long)attributionsCount;
- (id)baseURLStringForTileKey:(const struct _GEOTileKey *)arg1;
- (void)clearActiveResources;
- (void)clearActiveScales;
- (void)clearActiveScenarios;
- (void)clearAnnouncementsSupportedLanguages;
- (void)clearAttributions;
- (void)clearFontChecksums;
- (void)clearFonts;
- (void)clearHybridUnavailableRegions;
- (void)clearIconChecksums;
- (void)clearIcons;
- (void)clearLocationShiftEnabledRegions;
- (void)clearMapLayers;
- (void)clearModernFormatFields;
- (void)clearRegionalResourceRegions;
- (void)clearRegionalResourceTiles;
- (void)clearRegionalResources;
- (void)clearResources;
- (void)clearStaleResources;
- (void)clearStyleSheetChecksums;
- (void)clearStyleSheets;
- (void)clearTextureChecksums;
- (void)clearTextures;
- (void)clearTileSets;
- (void)clearXmlChecksums;
- (void)clearXmls;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (id)fontAtIndex:(unsigned long long)arg1;
- (id)fontChecksumAtIndex:(unsigned long long)arg1;
- (unsigned long long)fontChecksumsCount;
- (unsigned long long)fontsCount;
- (BOOL)hasRegionalResourcesForTileKey:(const struct _GEOTileKey *)arg1;
- (unsigned long long)hash;
- (struct GEOTileSetRegion)hybridUnavailableRegionAtIndex:(unsigned long long)arg1;
- (id)iconAtIndex:(unsigned long long)arg1;
- (id)iconChecksumAtIndex:(unsigned long long)arg1;
- (unsigned long long)iconChecksumsCount;
- (unsigned long long)iconsCount;
- (BOOL)isAvailableForTileKey:(const struct _GEOTileKey *)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isHybridModeAvailableForTileKey:(const struct _GEOTileKey *)arg1;
- (void)iterateActiveTileSetsWithAltitudeManifest:(id)arg1 block:(CDUnknownBlockType)arg2;
- (id)languageForTileKey:(const struct _GEOTileKey *)arg1;
- (id)languageForTileKey:(const struct _GEOTileKey *)arg1 overrideLocale:(id)arg2;
- (unsigned int)largestRegionalResourceZoomLevelContainingTileKey:(const struct _GEOTileKey *)arg1;
- (id)localizationURLStringForTileKey:(const struct _GEOTileKey *)arg1;
- (id)locationShiftEnabledRegionAtIndex:(unsigned long long)arg1;
- (unsigned long long)locationShiftEnabledRegionsCount;
- (id)mapLayerAtIndex:(unsigned long long)arg1;
- (unsigned long long)mapLayersCount;
- (void)mergeFrom:(id)arg1;
- (id)operationModeAsString:(int)arg1;
- (void)populateLegacyFormat;
- (void)populateRegionalResources:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)regionalResourceAtIndex:(unsigned long long)arg1;
- (id)regionalResourceKeysForTileKey:(const struct _GEOTileKey *)arg1 scale:(int)arg2 scenarios:(id)arg3;
- (id)regionalResourceRegionAtIndex:(unsigned long long)arg1;
- (unsigned long long)regionalResourceRegionsCount;
- (id)regionalResourceTileAtIndex:(unsigned long long)arg1;
- (unsigned long long)regionalResourceTilesCount;
- (unsigned long long)regionalResourcesCount;
- (id)regionalResourcesForMapRect:(CDStruct_90e2a262)arg1;
- (int)requestStyleForTileKey:(const struct _GEOTileKey *)arg1;
- (id)resourceAtIndex:(unsigned long long)arg1;
- (unsigned long long)resourcesCount;
- (void)setActiveScales:(int *)arg1 count:(unsigned long long)arg2;
- (void)setActiveScenarios:(int *)arg1 count:(unsigned long long)arg2;
- (void)setHybridUnavailableRegions:(struct GEOTileSetRegion *)arg1 count:(unsigned long long)arg2;
- (id)staleResourceAtIndex:(unsigned long long)arg1;
- (unsigned long long)staleResourcesCount;
- (id)styleSheetAtIndex:(unsigned long long)arg1;
- (id)styleSheetChecksumAtIndex:(unsigned long long)arg1;
- (unsigned long long)styleSheetChecksumsCount;
- (unsigned long long)styleSheetsCount;
- (BOOL)supportsTileStyle:(int)arg1 size:(int)arg2 scale:(int)arg3;
- (id)textureAtIndex:(unsigned long long)arg1;
- (id)textureChecksumAtIndex:(unsigned long long)arg1;
- (unsigned long long)textureChecksumsCount;
- (unsigned long long)texturesCount;
- (id)tileSetAtIndex:(unsigned long long)arg1;
- (unsigned long long)tileSetsCount;
- (double)timeToLiveForTileKey:(const struct _GEOTileKey *)arg1;
- (unsigned int)versionForTileKey:(const struct _GEOTileKey *)arg1;
- (void)writeTo:(id)arg1;
- (id)xmlAtIndex:(unsigned long long)arg1;
- (id)xmlChecksumAtIndex:(unsigned long long)arg1;
- (unsigned long long)xmlChecksumsCount;
- (unsigned long long)xmlsCount;

@end

