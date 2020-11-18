//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOVersionManifest, NSMutableArray, NSString, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEOResources : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSString *_abExperimentURL;
    NSString *_addressCorrectionInitURL;
    NSString *_addressCorrectionUpdateURL;
    NSMutableArray *_announcementsSupportedLanguages;
    NSString *_announcementsURL;
    NSMutableArray *_attributions;
    NSString *_authToken;
    NSString *_backgroundDispatcherURL;
    NSString *_backgroundRevGeoURL;
    NSString *_batchReverseGeocoderURL;
    NSString *_batchTrafficProbeURL;
    NSString *_bluePOIDispatcherURL;
    NSString *_businessPortalBaseURL;
    NSMutableArray *_dataSetURLOverrides;
    NSMutableArray *_dataSets;
    NSString *_directionsURL;
    NSString *_dispatcherURL;
    NSString *_etaURL;
    NSMutableArray *_fontChecksums;
    NSMutableArray *_fonts;
    NSMutableArray *_iconChecksums;
    NSMutableArray *_icons;
    NSMutableArray *_locationShiftEnabledRegions;
    unsigned int _locationShiftVersion;
    NSString *_logMessageUsageURL;
    NSString *_logMessageUsageV3URL;
    NSString *_polyLocationShiftURL;
    NSString *_proactiveRoutingURL;
    NSString *_problemCategoriesURL;
    NSString *_problemOptInURL;
    NSString *_problemStatusURL;
    NSString *_problemSubmissionURL;
    NSString *_realtimeTrafficProbeURL;
    NSMutableArray *_regionalResources;
    NSString *_releaseInfo;
    NSMutableArray *_resources;
    NSString *_resourcesURL;
    NSString *_reverseGeocoderVersionsURL;
    NSString *_searchAttributionManifestURL;
    NSString *_simpleETAURL;
    NSString *_spatialLookupURL;
    NSMutableArray *_styleSheetChecksums;
    NSMutableArray *_styleSheets;
    NSMutableArray *_textureChecksums;
    NSMutableArray *_textures;
    NSMutableArray *_tileGroups;
    NSMutableArray *_tileSets;
    GEOVersionManifest *_versionManifest;
    NSMutableArray *_xmlChecksums;
    NSMutableArray *_xmls;
    struct {
        unsigned int locationShiftVersion:1;
    } _has;
}

@property (strong, nonatomic) NSString *abExperimentURL; // @synthesize abExperimentURL=_abExperimentURL;
@property (strong, nonatomic) NSString *addressCorrectionInitURL; // @synthesize addressCorrectionInitURL=_addressCorrectionInitURL;
@property (strong, nonatomic) NSString *addressCorrectionUpdateURL; // @synthesize addressCorrectionUpdateURL=_addressCorrectionUpdateURL;
@property (strong, nonatomic) NSMutableArray *announcementsSupportedLanguages; // @synthesize announcementsSupportedLanguages=_announcementsSupportedLanguages;
@property (strong, nonatomic) NSString *announcementsURL; // @synthesize announcementsURL=_announcementsURL;
@property (strong, nonatomic) NSMutableArray *attributions; // @synthesize attributions=_attributions;
@property (strong, nonatomic) NSString *authToken; // @synthesize authToken=_authToken;
@property (strong, nonatomic) NSString *backgroundDispatcherURL; // @synthesize backgroundDispatcherURL=_backgroundDispatcherURL;
@property (strong, nonatomic) NSString *backgroundRevGeoURL; // @synthesize backgroundRevGeoURL=_backgroundRevGeoURL;
@property (strong, nonatomic) NSString *batchReverseGeocoderURL; // @synthesize batchReverseGeocoderURL=_batchReverseGeocoderURL;
@property (strong, nonatomic) NSString *batchTrafficProbeURL; // @synthesize batchTrafficProbeURL=_batchTrafficProbeURL;
@property (strong, nonatomic) NSString *bluePOIDispatcherURL; // @synthesize bluePOIDispatcherURL=_bluePOIDispatcherURL;
@property (strong, nonatomic) NSString *businessPortalBaseURL; // @synthesize businessPortalBaseURL=_businessPortalBaseURL;
@property (strong, nonatomic) NSMutableArray *dataSetURLOverrides; // @synthesize dataSetURLOverrides=_dataSetURLOverrides;
@property (strong, nonatomic) NSMutableArray *dataSets; // @synthesize dataSets=_dataSets;
@property (strong, nonatomic) NSString *directionsURL; // @synthesize directionsURL=_directionsURL;
@property (strong, nonatomic) NSString *dispatcherURL; // @synthesize dispatcherURL=_dispatcherURL;
@property (strong, nonatomic) NSString *etaURL; // @synthesize etaURL=_etaURL;
@property (strong, nonatomic) NSMutableArray *fontChecksums; // @synthesize fontChecksums=_fontChecksums;
@property (strong, nonatomic) NSMutableArray *fonts; // @synthesize fonts=_fonts;
@property (readonly, nonatomic) BOOL hasAbExperimentURL;
@property (readonly, nonatomic) BOOL hasAddressCorrectionInitURL;
@property (readonly, nonatomic) BOOL hasAddressCorrectionUpdateURL;
@property (readonly, nonatomic) BOOL hasAnnouncementsURL;
@property (readonly, nonatomic) BOOL hasAuthToken;
@property (readonly, nonatomic) BOOL hasBackgroundDispatcherURL;
@property (readonly, nonatomic) BOOL hasBackgroundRevGeoURL;
@property (readonly, nonatomic) BOOL hasBatchReverseGeocoderURL;
@property (readonly, nonatomic) BOOL hasBatchTrafficProbeURL;
@property (readonly, nonatomic) BOOL hasBluePOIDispatcherURL;
@property (readonly, nonatomic) BOOL hasBusinessPortalBaseURL;
@property (readonly, nonatomic) BOOL hasDirectionsURL;
@property (readonly, nonatomic) BOOL hasDispatcherURL;
@property (readonly, nonatomic) BOOL hasEtaURL;
@property (nonatomic) BOOL hasLocationShiftVersion;
@property (readonly, nonatomic) BOOL hasLogMessageUsageURL;
@property (readonly, nonatomic) BOOL hasLogMessageUsageV3URL;
@property (readonly, nonatomic) BOOL hasPolyLocationShiftURL;
@property (readonly, nonatomic) BOOL hasProactiveRoutingURL;
@property (readonly, nonatomic) BOOL hasProblemCategoriesURL;
@property (readonly, nonatomic) BOOL hasProblemOptInURL;
@property (readonly, nonatomic) BOOL hasProblemStatusURL;
@property (readonly, nonatomic) BOOL hasProblemSubmissionURL;
@property (readonly, nonatomic) BOOL hasRealtimeTrafficProbeURL;
@property (readonly, nonatomic) BOOL hasReleaseInfo;
@property (readonly, nonatomic) BOOL hasResourcesURL;
@property (readonly, nonatomic) BOOL hasReverseGeocoderVersionsURL;
@property (readonly, nonatomic) BOOL hasSearchAttributionManifestURL;
@property (readonly, nonatomic) BOOL hasSimpleETAURL;
@property (readonly, nonatomic) BOOL hasSpatialLookupURL;
@property (readonly, nonatomic) BOOL hasVersionManifest;
@property (strong, nonatomic) NSMutableArray *iconChecksums; // @synthesize iconChecksums=_iconChecksums;
@property (strong, nonatomic) NSMutableArray *icons; // @synthesize icons=_icons;
@property (strong, nonatomic) NSMutableArray *locationShiftEnabledRegions; // @synthesize locationShiftEnabledRegions=_locationShiftEnabledRegions;
@property (nonatomic) unsigned int locationShiftVersion; // @synthesize locationShiftVersion=_locationShiftVersion;
@property (strong, nonatomic) NSString *logMessageUsageURL; // @synthesize logMessageUsageURL=_logMessageUsageURL;
@property (strong, nonatomic) NSString *logMessageUsageV3URL; // @synthesize logMessageUsageV3URL=_logMessageUsageV3URL;
@property (strong, nonatomic) NSString *polyLocationShiftURL; // @synthesize polyLocationShiftURL=_polyLocationShiftURL;
@property (strong, nonatomic) NSString *proactiveRoutingURL; // @synthesize proactiveRoutingURL=_proactiveRoutingURL;
@property (strong, nonatomic) NSString *problemCategoriesURL; // @synthesize problemCategoriesURL=_problemCategoriesURL;
@property (strong, nonatomic) NSString *problemOptInURL; // @synthesize problemOptInURL=_problemOptInURL;
@property (strong, nonatomic) NSString *problemStatusURL; // @synthesize problemStatusURL=_problemStatusURL;
@property (strong, nonatomic) NSString *problemSubmissionURL; // @synthesize problemSubmissionURL=_problemSubmissionURL;
@property (strong, nonatomic) NSString *realtimeTrafficProbeURL; // @synthesize realtimeTrafficProbeURL=_realtimeTrafficProbeURL;
@property (strong, nonatomic) NSMutableArray *regionalResources; // @synthesize regionalResources=_regionalResources;
@property (strong, nonatomic) NSString *releaseInfo; // @synthesize releaseInfo=_releaseInfo;
@property (strong, nonatomic) NSMutableArray *resources; // @synthesize resources=_resources;
@property (strong, nonatomic) NSString *resourcesURL; // @synthesize resourcesURL=_resourcesURL;
@property (strong, nonatomic) NSString *reverseGeocoderVersionsURL; // @synthesize reverseGeocoderVersionsURL=_reverseGeocoderVersionsURL;
@property (strong, nonatomic) NSString *searchAttributionManifestURL; // @synthesize searchAttributionManifestURL=_searchAttributionManifestURL;
@property (strong, nonatomic) NSString *simpleETAURL; // @synthesize simpleETAURL=_simpleETAURL;
@property (strong, nonatomic) NSString *spatialLookupURL; // @synthesize spatialLookupURL=_spatialLookupURL;
@property (strong, nonatomic) NSMutableArray *styleSheetChecksums; // @synthesize styleSheetChecksums=_styleSheetChecksums;
@property (strong, nonatomic) NSMutableArray *styleSheets; // @synthesize styleSheets=_styleSheets;
@property (strong, nonatomic) NSMutableArray *textureChecksums; // @synthesize textureChecksums=_textureChecksums;
@property (strong, nonatomic) NSMutableArray *textures; // @synthesize textures=_textures;
@property (strong, nonatomic) NSMutableArray *tileGroups; // @synthesize tileGroups=_tileGroups;
@property (strong, nonatomic) NSMutableArray *tileSets; // @synthesize tileSets=_tileSets;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (strong, nonatomic) GEOVersionManifest *versionManifest; // @synthesize versionManifest=_versionManifest;
@property (strong, nonatomic) NSMutableArray *xmlChecksums; // @synthesize xmlChecksums=_xmlChecksums;
@property (strong, nonatomic) NSMutableArray *xmls; // @synthesize xmls=_xmls;

+ (Class)announcementsSupportedLanguagesType;
+ (Class)attributionType;
+ (Class)dataSetType;
+ (Class)dataSetURLOverrideType;
+ (Class)fontChecksumType;
+ (Class)fontType;
+ (Class)iconChecksumType;
+ (Class)iconType;
+ (Class)locationShiftEnabledRegionType;
+ (Class)regionalResourceType;
+ (Class)resourceType;
+ (Class)styleSheetChecksumType;
+ (Class)styleSheetType;
+ (Class)textureChecksumType;
+ (Class)textureType;
+ (Class)tileGroupType;
+ (Class)tileSetType;
+ (Class)xmlChecksumType;
+ (Class)xmlType;
- (void).cxx_destruct;
- (void)addAnnouncementsSupportedLanguages:(id)arg1;
- (void)addAttribution:(id)arg1;
- (void)addDataSet:(id)arg1;
- (void)addDataSetURLOverride:(id)arg1;
- (void)addFont:(id)arg1;
- (void)addFontChecksum:(id)arg1;
- (void)addIcon:(id)arg1;
- (void)addIconChecksum:(id)arg1;
- (void)addLocationShiftEnabledRegion:(id)arg1;
- (void)addRegionalResource:(id)arg1;
- (void)addResource:(id)arg1;
- (void)addStyleSheet:(id)arg1;
- (void)addStyleSheetChecksum:(id)arg1;
- (void)addTexture:(id)arg1;
- (void)addTextureChecksum:(id)arg1;
- (void)addTileGroup:(id)arg1;
- (void)addTileSet:(id)arg1;
- (void)addXml:(id)arg1;
- (void)addXmlChecksum:(id)arg1;
- (id)announcementsSupportedLanguagesAtIndex:(unsigned long long)arg1;
- (unsigned long long)announcementsSupportedLanguagesCount;
- (id)attributionAtIndex:(unsigned long long)arg1;
- (unsigned long long)attributionsCount;
- (void)clearAnnouncementsSupportedLanguages;
- (void)clearAttributions;
- (void)clearDataSetURLOverrides;
- (void)clearDataSets;
- (void)clearFontChecksums;
- (void)clearFonts;
- (void)clearIconChecksums;
- (void)clearIcons;
- (void)clearLocationShiftEnabledRegions;
- (void)clearRegionalResources;
- (void)clearResources;
- (void)clearStyleSheetChecksums;
- (void)clearStyleSheets;
- (void)clearTextureChecksums;
- (void)clearTextures;
- (void)clearTileGroups;
- (void)clearTileSets;
- (void)clearXmlChecksums;
- (void)clearXmls;
- (void)convertFromLegacyFormat;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dataSetAtIndex:(unsigned long long)arg1;
- (id)dataSetURLOverrideAtIndex:(unsigned long long)arg1;
- (unsigned long long)dataSetURLOverridesCount;
- (unsigned long long)dataSetsCount;
- (id)description;
- (id)dictionaryRepresentation;
- (id)fontAtIndex:(unsigned long long)arg1;
- (id)fontChecksumAtIndex:(unsigned long long)arg1;
- (unsigned long long)fontChecksumsCount;
- (unsigned long long)fontsCount;
- (unsigned long long)hash;
- (id)iconAtIndex:(unsigned long long)arg1;
- (id)iconChecksumAtIndex:(unsigned long long)arg1;
- (unsigned long long)iconChecksumsCount;
- (unsigned long long)iconsCount;
- (BOOL)isEqual:(id)arg1;
- (id)locationShiftEnabledRegionAtIndex:(unsigned long long)arg1;
- (unsigned long long)locationShiftEnabledRegionsCount;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)regionalResourceAtIndex:(unsigned long long)arg1;
- (unsigned long long)regionalResourcesCount;
- (id)resourceAtIndex:(unsigned long long)arg1;
- (unsigned long long)resourcesCount;
- (id)styleSheetAtIndex:(unsigned long long)arg1;
- (id)styleSheetChecksumAtIndex:(unsigned long long)arg1;
- (unsigned long long)styleSheetChecksumsCount;
- (unsigned long long)styleSheetsCount;
- (id)textureAtIndex:(unsigned long long)arg1;
- (id)textureChecksumAtIndex:(unsigned long long)arg1;
- (unsigned long long)textureChecksumsCount;
- (unsigned long long)texturesCount;
- (id)tileGroupAtIndex:(unsigned long long)arg1;
- (unsigned long long)tileGroupsCount;
- (id)tileSetAtIndex:(unsigned long long)arg1;
- (unsigned long long)tileSetsCount;
- (void)workAround24919568IfNecessary;
- (void)writeTo:(id)arg1;
- (id)xmlAtIndex:(unsigned long long)arg1;
- (id)xmlChecksumAtIndex:(unsigned long long)arg1;
- (unsigned long long)xmlChecksumsCount;
- (unsigned long long)xmlsCount;

@end

