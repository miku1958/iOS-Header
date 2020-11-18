//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEODataSetDescription, GEOURLInfoSet, GEOVersionManifest, NSData, NSMutableArray, NSString, PBUnknownFields;

@interface GEOActiveTileGroup : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    struct GEOTileSetRegion *_hybridUnavailableRegions;
    unsigned long long _hybridUnavailableRegionsCount;
    unsigned long long _hybridUnavailableRegionsSpace;
    CDStruct_95bda58d _activeScales;
    CDStruct_95bda58d _activeScenarios;
    NSString *_abExperimentURLLegacy;
    NSMutableArray *_activeResources;
    NSString *_addressCorrectionInitURLLegacy;
    NSString *_addressCorrectionUpdateURLLegacy;
    NSMutableArray *_announcementsSupportedLanguages;
    NSString *_announcementsURLLegacy;
    NSMutableArray *_attributions;
    NSString *_backgroundDispatcherURLLegacy;
    NSString *_backgroundRevGeoURLLegacy;
    NSString *_batchReverseGeocoderURLLegacy;
    NSString *_batchTrafficProbeURLLegacy;
    NSString *_bluePOIURLLegacy;
    NSString *_businessPortalBaseURLLegacy;
    GEODataSetDescription *_dataSet;
    NSString *_directionsURLLegacy;
    NSString *_dispatcherURLLegacy;
    NSString *_etaURLLegacy;
    NSData *_flyoverRegionVersions;
    NSMutableArray *_fontChecksums;
    NSMutableArray *_fonts;
    NSMutableArray *_iconChecksums;
    NSMutableArray *_icons;
    unsigned int _identifier;
    NSMutableArray *_locationShiftEnabledRegions;
    unsigned int _locationShiftVersion;
    NSString *_logMessageUsageURLLegacy;
    NSString *_logMessageUsageV3URLLegacy;
    unsigned int _modelVersion;
    NSString *_polyLocationShiftURLLegacy;
    NSString *_proactiveRoutingURLLegacy;
    NSString *_problemCategoriesURLLegacy;
    NSString *_problemOptInURLLegacy;
    NSString *_problemStatusURLLegacy;
    NSString *_problemSubmissionURLLegacy;
    NSString *_realtimeTrafficProbeURLLegacy;
    NSMutableArray *_regionalResourceRegions;
    NSMutableArray *_regionalResourceTiles;
    NSMutableArray *_regionalResources;
    NSString *_regionalResourcesURLLegacy;
    NSString *_releaseInfo;
    NSData *_reserved;
    NSMutableArray *_resources;
    NSString *_resourcesURLLegacy;
    NSString *_reverseGeocoderVersionsURLLegacy;
    NSString *_searchAttributionManifestURLLegacy;
    NSString *_simpleETAURLLegacy;
    NSString *_spatialLookupURLLegacy;
    NSMutableArray *_staleResources;
    NSMutableArray *_styleSheetChecksums;
    NSMutableArray *_styleSheets;
    NSMutableArray *_textureChecksums;
    NSMutableArray *_textures;
    NSMutableArray *_tileSets;
    NSString *_uniqueIdentifier;
    GEOURLInfoSet *_urlInfoSet;
    GEOVersionManifest *_versionManifest;
    NSString *_wifiConnectionQualityProbeURLLegacy;
    NSMutableArray *_xmlChecksums;
    NSMutableArray *_xmls;
    struct {
        unsigned int locationShiftVersion:1;
        unsigned int modelVersion:1;
    } _has;
}

@property (strong, nonatomic) NSString *abExperimentURLLegacy; // @synthesize abExperimentURLLegacy=_abExperimentURLLegacy;
@property (strong, nonatomic) NSMutableArray *activeResources; // @synthesize activeResources=_activeResources;
@property (readonly, nonatomic) int *activeScales;
@property (readonly, nonatomic) unsigned long long activeScalesCount;
@property (readonly, nonatomic) int *activeScenarios;
@property (readonly, nonatomic) unsigned long long activeScenariosCount;
@property (strong, nonatomic) NSString *addressCorrectionInitURLLegacy; // @synthesize addressCorrectionInitURLLegacy=_addressCorrectionInitURLLegacy;
@property (strong, nonatomic) NSString *addressCorrectionUpdateURLLegacy; // @synthesize addressCorrectionUpdateURLLegacy=_addressCorrectionUpdateURLLegacy;
@property (strong, nonatomic) NSMutableArray *announcementsSupportedLanguages; // @synthesize announcementsSupportedLanguages=_announcementsSupportedLanguages;
@property (strong, nonatomic) NSString *announcementsURLLegacy; // @synthesize announcementsURLLegacy=_announcementsURLLegacy;
@property (strong, nonatomic) NSMutableArray *attributions; // @synthesize attributions=_attributions;
@property (strong, nonatomic) NSString *backgroundDispatcherURLLegacy; // @synthesize backgroundDispatcherURLLegacy=_backgroundDispatcherURLLegacy;
@property (strong, nonatomic) NSString *backgroundRevGeoURLLegacy; // @synthesize backgroundRevGeoURLLegacy=_backgroundRevGeoURLLegacy;
@property (strong, nonatomic) NSString *batchReverseGeocoderURLLegacy; // @synthesize batchReverseGeocoderURLLegacy=_batchReverseGeocoderURLLegacy;
@property (strong, nonatomic) NSString *batchTrafficProbeURLLegacy; // @synthesize batchTrafficProbeURLLegacy=_batchTrafficProbeURLLegacy;
@property (strong, nonatomic) NSString *bluePOIURLLegacy; // @synthesize bluePOIURLLegacy=_bluePOIURLLegacy;
@property (strong, nonatomic) NSString *businessPortalBaseURLLegacy; // @synthesize businessPortalBaseURLLegacy=_businessPortalBaseURLLegacy;
@property (strong, nonatomic) GEODataSetDescription *dataSet; // @synthesize dataSet=_dataSet;
@property (strong, nonatomic) NSString *directionsURLLegacy; // @synthesize directionsURLLegacy=_directionsURLLegacy;
@property (strong, nonatomic) NSString *dispatcherURLLegacy; // @synthesize dispatcherURLLegacy=_dispatcherURLLegacy;
@property (strong, nonatomic) NSString *etaURLLegacy; // @synthesize etaURLLegacy=_etaURLLegacy;
@property (strong, nonatomic) NSData *flyoverRegionVersions; // @synthesize flyoverRegionVersions=_flyoverRegionVersions;
@property (strong, nonatomic) NSMutableArray *fontChecksums; // @synthesize fontChecksums=_fontChecksums;
@property (strong, nonatomic) NSMutableArray *fonts; // @synthesize fonts=_fonts;
@property (readonly, nonatomic) BOOL hasAbExperimentURLLegacy;
@property (readonly, nonatomic) BOOL hasAddressCorrectionInitURLLegacy;
@property (readonly, nonatomic) BOOL hasAddressCorrectionUpdateURLLegacy;
@property (readonly, nonatomic) BOOL hasAnnouncementsURLLegacy;
@property (readonly, nonatomic) BOOL hasBackgroundDispatcherURLLegacy;
@property (readonly, nonatomic) BOOL hasBackgroundRevGeoURLLegacy;
@property (readonly, nonatomic) BOOL hasBatchReverseGeocoderURLLegacy;
@property (readonly, nonatomic) BOOL hasBatchTrafficProbeURLLegacy;
@property (readonly, nonatomic) BOOL hasBluePOIURLLegacy;
@property (readonly, nonatomic) BOOL hasBusinessPortalBaseURLLegacy;
@property (readonly, nonatomic) BOOL hasDataSet;
@property (readonly, nonatomic) BOOL hasDirectionsURLLegacy;
@property (readonly, nonatomic) BOOL hasDispatcherURLLegacy;
@property (readonly, nonatomic) BOOL hasEtaURLLegacy;
@property (readonly, nonatomic) BOOL hasFlyoverRegionVersions;
@property (nonatomic) BOOL hasLocationShiftVersion;
@property (readonly, nonatomic) BOOL hasLogMessageUsageURLLegacy;
@property (readonly, nonatomic) BOOL hasLogMessageUsageV3URLLegacy;
@property (nonatomic) BOOL hasModelVersion;
@property (readonly, nonatomic) BOOL hasPolyLocationShiftURLLegacy;
@property (readonly, nonatomic) BOOL hasProactiveRoutingURLLegacy;
@property (readonly, nonatomic) BOOL hasProblemCategoriesURLLegacy;
@property (readonly, nonatomic) BOOL hasProblemOptInURLLegacy;
@property (readonly, nonatomic) BOOL hasProblemStatusURLLegacy;
@property (readonly, nonatomic) BOOL hasProblemSubmissionURLLegacy;
@property (readonly, nonatomic) BOOL hasRealtimeTrafficProbeURLLegacy;
@property (readonly, nonatomic) BOOL hasRegionalResourcesURLLegacy;
@property (readonly, nonatomic) BOOL hasReleaseInfo;
@property (readonly, nonatomic) BOOL hasReserved;
@property (readonly, nonatomic) BOOL hasResourcesURLLegacy;
@property (readonly, nonatomic) BOOL hasReverseGeocoderVersionsURLLegacy;
@property (readonly, nonatomic) BOOL hasSearchAttributionManifestURLLegacy;
@property (readonly, nonatomic) BOOL hasSimpleETAURLLegacy;
@property (readonly, nonatomic) BOOL hasSpatialLookupURLLegacy;
@property (readonly, nonatomic) BOOL hasUniqueIdentifier;
@property (readonly, nonatomic) BOOL hasUrlInfoSet;
@property (readonly, nonatomic) BOOL hasVersionManifest;
@property (readonly, nonatomic) BOOL hasWifiConnectionQualityProbeURLLegacy;
@property (readonly, nonatomic) struct GEOTileSetRegion *hybridUnavailableRegions;
@property (readonly, nonatomic) unsigned long long hybridUnavailableRegionsCount;
@property (strong, nonatomic) NSMutableArray *iconChecksums; // @synthesize iconChecksums=_iconChecksums;
@property (strong, nonatomic) NSMutableArray *icons; // @synthesize icons=_icons;
@property (nonatomic) unsigned int identifier; // @synthesize identifier=_identifier;
@property (strong, nonatomic) NSMutableArray *locationShiftEnabledRegions; // @synthesize locationShiftEnabledRegions=_locationShiftEnabledRegions;
@property (nonatomic) unsigned int locationShiftVersion; // @synthesize locationShiftVersion=_locationShiftVersion;
@property (strong, nonatomic) NSString *logMessageUsageURLLegacy; // @synthesize logMessageUsageURLLegacy=_logMessageUsageURLLegacy;
@property (strong, nonatomic) NSString *logMessageUsageV3URLLegacy; // @synthesize logMessageUsageV3URLLegacy=_logMessageUsageV3URLLegacy;
@property (nonatomic) unsigned int modelVersion; // @synthesize modelVersion=_modelVersion;
@property (strong, nonatomic) NSString *polyLocationShiftURLLegacy; // @synthesize polyLocationShiftURLLegacy=_polyLocationShiftURLLegacy;
@property (strong, nonatomic) NSString *proactiveRoutingURLLegacy; // @synthesize proactiveRoutingURLLegacy=_proactiveRoutingURLLegacy;
@property (strong, nonatomic) NSString *problemCategoriesURLLegacy; // @synthesize problemCategoriesURLLegacy=_problemCategoriesURLLegacy;
@property (strong, nonatomic) NSString *problemOptInURLLegacy; // @synthesize problemOptInURLLegacy=_problemOptInURLLegacy;
@property (strong, nonatomic) NSString *problemStatusURLLegacy; // @synthesize problemStatusURLLegacy=_problemStatusURLLegacy;
@property (strong, nonatomic) NSString *problemSubmissionURLLegacy; // @synthesize problemSubmissionURLLegacy=_problemSubmissionURLLegacy;
@property (strong, nonatomic) NSString *realtimeTrafficProbeURLLegacy; // @synthesize realtimeTrafficProbeURLLegacy=_realtimeTrafficProbeURLLegacy;
@property (strong, nonatomic) NSMutableArray *regionalResourceRegions; // @synthesize regionalResourceRegions=_regionalResourceRegions;
@property (strong, nonatomic) NSMutableArray *regionalResourceTiles; // @synthesize regionalResourceTiles=_regionalResourceTiles;
@property (strong, nonatomic) NSMutableArray *regionalResources; // @synthesize regionalResources=_regionalResources;
@property (strong, nonatomic) NSString *regionalResourcesURLLegacy; // @synthesize regionalResourcesURLLegacy=_regionalResourcesURLLegacy;
@property (strong, nonatomic) NSString *releaseInfo; // @synthesize releaseInfo=_releaseInfo;
@property (strong, nonatomic) NSData *reserved; // @synthesize reserved=_reserved;
@property (strong, nonatomic) NSMutableArray *resources; // @synthesize resources=_resources;
@property (strong, nonatomic) NSString *resourcesURLLegacy; // @synthesize resourcesURLLegacy=_resourcesURLLegacy;
@property (strong, nonatomic) NSString *reverseGeocoderVersionsURLLegacy; // @synthesize reverseGeocoderVersionsURLLegacy=_reverseGeocoderVersionsURLLegacy;
@property (strong, nonatomic) NSString *searchAttributionManifestURLLegacy; // @synthesize searchAttributionManifestURLLegacy=_searchAttributionManifestURLLegacy;
@property (strong, nonatomic) NSString *simpleETAURLLegacy; // @synthesize simpleETAURLLegacy=_simpleETAURLLegacy;
@property (strong, nonatomic) NSString *spatialLookupURLLegacy; // @synthesize spatialLookupURLLegacy=_spatialLookupURLLegacy;
@property (strong, nonatomic) NSMutableArray *staleResources; // @synthesize staleResources=_staleResources;
@property (strong, nonatomic) NSMutableArray *styleSheetChecksums; // @synthesize styleSheetChecksums=_styleSheetChecksums;
@property (strong, nonatomic) NSMutableArray *styleSheets; // @synthesize styleSheets=_styleSheets;
@property (strong, nonatomic) NSMutableArray *textureChecksums; // @synthesize textureChecksums=_textureChecksums;
@property (strong, nonatomic) NSMutableArray *textures; // @synthesize textures=_textures;
@property (strong, nonatomic) NSMutableArray *tileSets; // @synthesize tileSets=_tileSets;
@property (strong, nonatomic) NSString *uniqueIdentifier; // @synthesize uniqueIdentifier=_uniqueIdentifier;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (strong, nonatomic) GEOURLInfoSet *urlInfoSet; // @synthesize urlInfoSet=_urlInfoSet;
@property (strong, nonatomic) GEOVersionManifest *versionManifest; // @synthesize versionManifest=_versionManifest;
@property (strong, nonatomic) NSString *wifiConnectionQualityProbeURLLegacy; // @synthesize wifiConnectionQualityProbeURLLegacy=_wifiConnectionQualityProbeURLLegacy;
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
- (id)_activeTileSetForStyle:(int)arg1 size:(int)arg2 scale:(int)arg3;
- (id)_decodedFlyoverRegionVersions;
- (void)_resetBestLanguages;
- (void)_setDecodedFlyoverRegionVersions:(id)arg1;
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
- (unsigned int)dataVersionForFlyoverRegion:(unsigned int)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (void)enumerateFlyoverRegions:(CDUnknownBlockType)arg1;
- (id)fontAtIndex:(unsigned long long)arg1;
- (id)fontChecksumAtIndex:(unsigned long long)arg1;
- (unsigned long long)fontChecksumsCount;
- (unsigned long long)fontsCount;
- (BOOL)hasDataVersionForFlyoverRegion:(unsigned int)arg1;
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
- (void)iterateActiveTileSets:(CDUnknownBlockType)arg1;
- (id)languageForTileKey:(const struct _GEOTileKey *)arg1;
- (id)languageForTileKey:(const struct _GEOTileKey *)arg1 overrideLocale:(id)arg2;
- (unsigned int)largestRegionalResourceZoomLevelContainingTileKey:(const struct _GEOTileKey *)arg1;
- (id)localizationURLStringForTileKey:(const struct _GEOTileKey *)arg1;
- (id)locationShiftEnabledRegionAtIndex:(unsigned long long)arg1;
- (unsigned long long)locationShiftEnabledRegionsCount;
- (void)mergeFrom:(id)arg1;
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
- (BOOL)useProxyAuthForTileKey:(const struct _GEOTileKey *)arg1;
- (unsigned int)versionForFlyoverRegion:(unsigned int)arg1;
- (unsigned int)versionForTileKey:(const struct _GEOTileKey *)arg1;
- (void)writeTo:(id)arg1;
- (id)xmlAtIndex:(unsigned long long)arg1;
- (id)xmlChecksumAtIndex:(unsigned long long)arg1;
- (unsigned long long)xmlChecksumsCount;
- (unsigned long long)xmlsCount;

@end

