//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class GEOFeatureStyleAttributes, NSData, NSMutableArray, NSMutableData, NSMutableDictionary, NSMutableOrderedSet, NSString;

@interface GEOVectorTile : NSObject
{
    struct _GEOTileKey _key;
    GEOFeatureStyleAttributes *_attributes;
    CDStruct_c8b5ad3f *_lines;
    unsigned long long _linesCount;
    unsigned long long _linesVertexCount;
    CDStruct_361566eb *_linesLabelAnnotations;
    unsigned long long _linesLabelAnnotationCount;
    CDStruct_9df870a8 *_linesAnnotationBezierVertices;
    CDStruct_c8b5ad3f *_coastlines;
    unsigned long long _coastlinesCount;
    CDStruct_040038b6 *_polygons;
    unsigned long long _polygonsCount;
    unsigned long long _polygonsVertexCount;
    CDStruct_6e3f967a *_polygonLabelPositions;
    unsigned long long _polygonLabelPositionsCount;
    unsigned long long _venuesCount;
    CDStruct_864365dc *_venues;
    unsigned long long _venueSectionsCount;
    unsigned long long _venueBuildingsCount;
    CDStruct_d8694409 *_venueBuildings;
    unsigned long long _venueLevelsCount;
    CDStruct_9d4f1c73 *_venueLevels;
    unsigned long long _venueComponentsCount;
    CDStruct_2faeb20b *_venueComponents;
    CDStruct_0c54f6ee *_buildingFootprints;
    NSMutableData *_extrusionHeightsPool;
    NSMutableData *_baseHeightsPool;
    unsigned long long _buildingFootprintsCount;
    CDStruct_0c54f6ee *_overlapBuildingFootprints;
    unsigned long long _overlapBuildingFootprintsCount;
    CDStruct_0c54f6ee *_hiResBuildingFootprints;
    unsigned long long _hiResBuildingFootprintsCount;
    CDStruct_2da3f85a *_threeDBuildings;
    unsigned long long _threeDBuildingsCount;
    CDStruct_2da3f85a *_overlapThreeDBuildings;
    unsigned long long _overlapThreeDBuildingsCount;
    CDStruct_cdc9fa9f *_pois;
    unsigned long long _poisCount;
    CDStruct_d2cf4d6c *_labelTextPlacements;
    unsigned int _labelTextPlacementsCount;
    CDStruct_f6a177db *_overpasses;
    CDStruct_3b01f0aa *_junctions;
    unsigned long long _junctionsCount;
    BOOL _hasComputedJunctions;
    CDStruct_7523a67d *_laneConnections;
    unsigned long long _laneConnectionsCount;
    CDStruct_7523a67d *_pointsOnRoad;
    unsigned long long _pointsOnRoadCount;
    CDStruct_183601bc **_sortedPointsOnRoad;
    struct {
        float _field1;
        float _field2;
        float _field3;
        float _field4;
        float _field5;
        float _field6;
    } *_laneGeometry;
    CDStruct_3cfc3106 *_curveLineVertices;
    unsigned int *_curveToLineMapping;
    CDStruct_9df870a8 *_lineVertices;
    CDStruct_9df870a8 *_polygonVertices;
    CDStruct_9df870a8 *_coastlineVertices;
    CDStruct_9df870a8 *_footprintVertices;
    CDStruct_9df870a8 *_overlapFootprintVertices;
    CDStruct_9df870a8 *_hiResFootprintVertices;
    CDStruct_9df870a8 *_venuesVertices;
    CDStruct_183601bc **_venuesSections;
    NSData *_labelPool;
    struct {
        unsigned long long _field1;
        unsigned long long _field2;
        char *_field3;
    } *_labelPoolLanguages;
    unsigned long long _labelPoolLanguagesLength;
    NSData *_localizedLabelPool;
    NSString *_preferredLocalizedLabelLanguage;
    char *_localizedLabelsLanguage;
    NSData *_dualLanguageLabelPool;
    CDStruct_29923528 *_labelIndex;
    unsigned long long _labelIndexCount;
    struct GEOFeatureShield *_shieldIndex;
    unsigned long long _shieldIndexCount;
    struct {
        unsigned long long _field1;
        unsigned long long _field2;
        char *_field3;
        unsigned int :1;
    } *_localizationTable;
    unsigned long long _localizationTableCount;
    NSMutableOrderedSet *_uniqueAttributes;
    NSMutableArray *_uniqueFeatureAttributes;
    CDStruct_db2bd8f2 *_lineCharacteristicPoints;
    unsigned long long _lineCharacteristicPointCount;
    CDStruct_db2bd8f2 *_polygonCharacteristicPoints;
    unsigned long long _polygonCharacteristicPointCount;
    CDStruct_db2bd8f2 *_coastlineCharacteristicPoints;
    unsigned long long _coastlineCharacteristicPointCount;
    CDStruct_7523a67d *_lineStrokeSpecifications;
    unsigned long long _lineStrokeSpecificationCount;
    CDStruct_7523a67d *_polygonStrokeSpecifications;
    unsigned long long _polygonStrokeSpecificationCount;
    unsigned long long _tileReferenceCount;
    struct _GEOTileKey *_tileReferences;
    CDStruct_5be08681 *_transitLines;
    unsigned long long _transitLineCount;
    CDStruct_8f1ffc8e *_transitSystems;
    unsigned long long _transitSystemCount;
    CDStruct_32d7d945 *_transitLinks;
    unsigned long long _transitLinkCount;
    CDStruct_c0454aff *_transitLinkLineKeys;
    unsigned long long *_transitLinkLineIndices;
    unsigned long long _transitLinkLineIndicesCount;
    CDStruct_9df870a8 *_transitVertices;
    struct GEOTransitNodeFeature *_transitNodes;
    unsigned long long _transitNodeCount;
    unsigned long long *_transitNodeSystemIndices;
    unsigned long long _transitNodeIndexCount;
    CDStruct_9df870a8 *_transitStationTransferVertices;
    CDStruct_36ada299 *_transitStationTransfers;
    unsigned long long _transitStationTransferCount;
    CDStruct_3b01f0aa *_transitJunctions;
    unsigned long long _transitJunctionCount;
    CDStruct_7523a67d *_transitPointsOnRoad;
    unsigned long long _transitPointsOnRoadCount;
    unsigned int *_transitTravelTimes;
    float *_transitLinkLineMinZoomOverrides;
    unsigned long long *_transitNodeParentIDs;
    unsigned long long _transitNodeParentIDCount;
    CDStruct_361566eb *_transitLinkLabelAnnotations;
    unsigned long long _transitLinkLabelAnnotationCount;
    CDStruct_9df870a8 *_transitLinkAnnotationBezierVertices;
    unsigned long long *_idsOfTransitNodesNotInTile;
    CDStruct_9bbfa40f *_transitAccessPoints;
    unsigned long long _transitAccessPointCount;
    CDStruct_c0454aff *_transitNodeLineKeys;
    unsigned long long *_transitNodeLineIndices;
    unsigned long long _transitNodeLineIndicesCount;
    CDStruct_c0454aff *_transitNodeSubtitleLineKeys;
    unsigned long long *_transitNodeSubtitleLineIndices;
    unsigned long long _transitNodeSubtitleLineIndicesCount;
    unsigned long long *_transitShieldIndices;
    unsigned char *_transitLineDirections;
    unsigned long long *_originalTransitNodeIDs;
    unsigned long long **_originalTransitNodeIDPointers;
    CDStruct_6e3f967a *_transitLinkSections;
    BOOL _transitCoverage;
    id *_transitNodeStyleAttributes;
    unsigned long long *_hallOrderIDs;
    BOOL *_shouldDrawEndPoint;
    unsigned long long *_transitNodeCollapseIndices;
    unsigned long long _transitNodeCollapseIndexCount;
    unsigned long long *_transitNodeCollapseIDs;
    unsigned long long _transitNodeCollapseIDCount;
    struct GEOsslpmTileInfo *_sslpmTileInfo;
    unsigned int _tileLabelLinesCount;
    struct GEOTileLabelLine *_tileLabelLines;
    unsigned int _labelLineFeatureSectionsCount;
    struct GEOLabelLineFeatureSection *_labelLineFeatureSections;
    unsigned int _labelLineAttributesCount;
    struct GEOLabelLineAttribute *_labelLineAttributes;
    unsigned int _poiStorefrontBundleIDsCount;
    unsigned long long *_poiStorefrontBundleIDs;
    unsigned int _debugByteCount;
    NSMutableDictionary *_debugByteCountPerChapter;
}

@property (readonly, nonatomic) CDStruct_0c54f6ee *buildingFootprints;
@property (readonly, nonatomic) CDStruct_0c54f6ee *buildingFootprints; // @synthesize buildingFootprints=_buildingFootprints;
@property (readonly, nonatomic) unsigned long long buildingFootprintsCount;
@property (readonly, nonatomic) unsigned long long coastlineCharacteristicPointCount; // @synthesize coastlineCharacteristicPointCount=_coastlineCharacteristicPointCount;
@property (readonly, nonatomic) CDStruct_db2bd8f2 *coastlineCharacteristicPoints; // @synthesize coastlineCharacteristicPoints=_coastlineCharacteristicPoints;
@property (readonly, nonatomic) CDStruct_c8b5ad3f *coastlines; // @synthesize coastlines=_coastlines;
@property (readonly, nonatomic) unsigned long long coastlinesCount; // @synthesize coastlinesCount=_coastlinesCount;
@property (readonly, nonatomic) CDStruct_3cfc3106 *curveLineVertices;
@property (readonly, nonatomic) unsigned int debugByteCount; // @synthesize debugByteCount=_debugByteCount;
@property (readonly, nonatomic) NSMutableDictionary *debugByteCountPerChapter; // @synthesize debugByteCountPerChapter=_debugByteCountPerChapter;
@property (readonly, nonatomic) BOOL hasComputedJunctions; // @synthesize hasComputedJunctions=_hasComputedJunctions;
@property (readonly, nonatomic) CDStruct_3b01f0aa *junctions; // @synthesize junctions=_junctions;
@property (readonly, nonatomic) unsigned long long junctionsCount; // @synthesize junctionsCount=_junctionsCount;
@property (readonly, nonatomic) struct GEOLabelLineAttribute *labelLineAttributes; // @synthesize labelLineAttributes=_labelLineAttributes;
@property (readonly, nonatomic) unsigned int labelLineAttributesCount; // @synthesize labelLineAttributesCount=_labelLineAttributesCount;
@property (readonly, nonatomic) struct GEOLabelLineFeatureSection *labelLineFeatureSections; // @synthesize labelLineFeatureSections=_labelLineFeatureSections;
@property (readonly, nonatomic) unsigned int labelLineFeatureSectionsCount; // @synthesize labelLineFeatureSectionsCount=_labelLineFeatureSectionsCount;
@property (readonly, nonatomic) CDStruct_d2cf4d6c *labelTextPlacements; // @synthesize labelTextPlacements=_labelTextPlacements;
@property (readonly, nonatomic) unsigned int labelTextPlacementsCount; // @synthesize labelTextPlacementsCount=_labelTextPlacementsCount;
@property (readonly, nonatomic) CDStruct_7523a67d *laneConnections; // @synthesize laneConnections=_laneConnections;
@property (readonly, nonatomic) unsigned long long laneConnectionsCount; // @synthesize laneConnectionsCount=_laneConnectionsCount;
@property (readonly, nonatomic) unsigned long long lineCharacteristicPointCount; // @synthesize lineCharacteristicPointCount=_lineCharacteristicPointCount;
@property (readonly, nonatomic) CDStruct_db2bd8f2 *lineCharacteristicPoints; // @synthesize lineCharacteristicPoints=_lineCharacteristicPoints;
@property (readonly, nonatomic) unsigned long long lineStrokeSpecificationCount; // @synthesize lineStrokeSpecificationCount=_lineStrokeSpecificationCount;
@property (readonly, nonatomic) CDStruct_7523a67d *lineStrokeSpecifications; // @synthesize lineStrokeSpecifications=_lineStrokeSpecifications;
@property (readonly, nonatomic) CDStruct_9df870a8 *lineVertices;
@property (readonly, nonatomic) CDStruct_c8b5ad3f *lines; // @synthesize lines=_lines;
@property (readonly, nonatomic) CDStruct_9df870a8 *linesAnnotationBezierVertices; // @synthesize linesAnnotationBezierVertices=_linesAnnotationBezierVertices;
@property (readonly, nonatomic) unsigned long long linesCount; // @synthesize linesCount=_linesCount;
@property (readonly, nonatomic) unsigned long long linesLabelAnnotationCount; // @synthesize linesLabelAnnotationCount=_linesLabelAnnotationCount;
@property (readonly, nonatomic) CDStruct_361566eb *linesLabelAnnotations; // @synthesize linesLabelAnnotations=_linesLabelAnnotations;
@property (readonly, nonatomic) unsigned long long linesVertexCount; // @synthesize linesVertexCount=_linesVertexCount;
@property (readonly, nonatomic) unsigned long long nonOverlappingBuildingFootprintsCount; // @synthesize nonOverlappingBuildingFootprintsCount=_buildingFootprintsCount;
@property (readonly, nonatomic) unsigned long long nonOverlappingThreeDBuildingsCount; // @synthesize nonOverlappingThreeDBuildingsCount=_threeDBuildingsCount;
@property (readonly, nonatomic) CDStruct_0c54f6ee *overlapBuildingFootprints;
@property (readonly, nonatomic) CDStruct_2da3f85a *overlapThreeDBuildings;
@property (readonly, nonatomic) CDStruct_f6a177db *overpasses; // @synthesize overpasses=_overpasses;
@property (readonly, nonatomic) unsigned long long *poiStorefrontBundleIDs; // @synthesize poiStorefrontBundleIDs=_poiStorefrontBundleIDs;
@property (readonly, nonatomic) unsigned int poiStorefrontBundleIDsCount; // @synthesize poiStorefrontBundleIDsCount=_poiStorefrontBundleIDsCount;
@property (readonly, nonatomic) CDStruct_7523a67d *pointsOnRoad; // @synthesize pointsOnRoad=_pointsOnRoad;
@property (readonly, nonatomic) unsigned long long pointsOnRoadCount; // @synthesize pointsOnRoadCount=_pointsOnRoadCount;
@property (readonly, nonatomic) CDStruct_cdc9fa9f *pois; // @synthesize pois=_pois;
@property (readonly, nonatomic) unsigned long long poisCount; // @synthesize poisCount=_poisCount;
@property (readonly, nonatomic) unsigned long long polygonCharacteristicPointCount; // @synthesize polygonCharacteristicPointCount=_polygonCharacteristicPointCount;
@property (readonly, nonatomic) CDStruct_db2bd8f2 *polygonCharacteristicPoints; // @synthesize polygonCharacteristicPoints=_polygonCharacteristicPoints;
@property (readonly, nonatomic) unsigned long long polygonStrokeSpecificationCount; // @synthesize polygonStrokeSpecificationCount=_polygonStrokeSpecificationCount;
@property (readonly, nonatomic) CDStruct_7523a67d *polygonStrokeSpecifications; // @synthesize polygonStrokeSpecifications=_polygonStrokeSpecifications;
@property (readonly, nonatomic) CDStruct_040038b6 *polygons; // @synthesize polygons=_polygons;
@property (readonly, nonatomic) unsigned long long polygonsCount; // @synthesize polygonsCount=_polygonsCount;
@property (readonly, nonatomic) unsigned long long polygonsVertexCount; // @synthesize polygonsVertexCount=_polygonsVertexCount;
@property (readonly, nonatomic) struct GEOsslpmTileInfo *sslpmTileInfo; // @synthesize sslpmTileInfo=_sslpmTileInfo;
@property (readonly, nonatomic) CDStruct_2da3f85a *threeDBuildings;
@property (readonly, nonatomic) struct _GEOTileKey tileKey; // @synthesize tileKey=_key;
@property (readonly, nonatomic) struct GEOTileLabelLine *tileLabelLines; // @synthesize tileLabelLines=_tileLabelLines;
@property (readonly, nonatomic) unsigned int tileLabelLinesCount; // @synthesize tileLabelLinesCount=_tileLabelLinesCount;
@property (readonly, nonatomic) unsigned long long tileReferenceCount; // @synthesize tileReferenceCount=_tileReferenceCount;
@property (readonly, nonatomic) struct _GEOTileKey *tileReferences; // @synthesize tileReferences=_tileReferences;
@property (readonly, nonatomic) unsigned long long totalBuildingFootprintsCount;
@property (readonly, nonatomic) unsigned long long totalThreeDBuildingsCount;
@property (readonly, nonatomic) unsigned long long transitAccessPointCount; // @synthesize transitAccessPointCount=_transitAccessPointCount;
@property (readonly, nonatomic) CDStruct_9bbfa40f *transitAccessPoints; // @synthesize transitAccessPoints=_transitAccessPoints;
@property (readonly, nonatomic) BOOL transitCoverage; // @synthesize transitCoverage=_transitCoverage;
@property (readonly, nonatomic) unsigned long long transitJunctionCount; // @synthesize transitJunctionCount=_transitJunctionCount;
@property (readonly, nonatomic) CDStruct_3b01f0aa *transitJunctions; // @synthesize transitJunctions=_transitJunctions;
@property (readonly, nonatomic) unsigned long long transitLineCount; // @synthesize transitLineCount=_transitLineCount;
@property (readonly, nonatomic) unsigned char *transitLineDirections; // @synthesize transitLineDirections=_transitLineDirections;
@property (readonly, nonatomic) CDStruct_5be08681 *transitLines; // @synthesize transitLines=_transitLines;
@property (readonly, nonatomic) CDStruct_9df870a8 *transitLinkAnnotationBezierVertices; // @synthesize transitLinkAnnotationBezierVertices=_transitLinkAnnotationBezierVertices;
@property (readonly, nonatomic) unsigned long long transitLinkCount; // @synthesize transitLinkCount=_transitLinkCount;
@property (readonly, nonatomic) unsigned long long transitLinkLabelAnnotationCount; // @synthesize transitLinkLabelAnnotationCount=_transitLinkLabelAnnotationCount;
@property (readonly, nonatomic) CDStruct_361566eb *transitLinkLabelAnnotations; // @synthesize transitLinkLabelAnnotations=_transitLinkLabelAnnotations;
@property (readonly, nonatomic) unsigned long long *transitLinkLineIndices; // @synthesize transitLinkLineIndices=_transitLinkLineIndices;
@property (readonly, nonatomic) unsigned long long transitLinkLineIndicesCount; // @synthesize transitLinkLineIndicesCount=_transitLinkLineIndicesCount;
@property (readonly, nonatomic) float *transitLinkLineMinZoomOverrides; // @synthesize transitLinkLineMinZoomOverrides=_transitLinkLineMinZoomOverrides;
@property (readonly, nonatomic) const CDStruct_6e3f967a *transitLinkSections; // @synthesize transitLinkSections=_transitLinkSections;
@property (readonly, nonatomic) CDStruct_32d7d945 *transitLinks; // @synthesize transitLinks=_transitLinks;
@property (readonly, nonatomic) unsigned long long transitNodeCollapseIDCount; // @synthesize transitNodeCollapseIDCount=_transitNodeCollapseIDCount;
@property (readonly, nonatomic) unsigned long long *transitNodeCollapseIDs; // @synthesize transitNodeCollapseIDs=_transitNodeCollapseIDs;
@property (readonly, nonatomic) unsigned long long transitNodeCollapseIndexCount; // @synthesize transitNodeCollapseIndexCount=_transitNodeCollapseIndexCount;
@property (readonly, nonatomic) unsigned long long *transitNodeCollapseIndices; // @synthesize transitNodeCollapseIndices=_transitNodeCollapseIndices;
@property (readonly, nonatomic) unsigned long long transitNodeCount; // @synthesize transitNodeCount=_transitNodeCount;
@property (readonly, nonatomic) unsigned long long transitNodeIndexCount; // @synthesize transitNodeIndexCount=_transitNodeIndexCount;
@property (readonly, nonatomic) unsigned long long *transitNodeLineIndices; // @synthesize transitNodeLineIndices=_transitNodeLineIndices;
@property (readonly, nonatomic) unsigned long long *transitNodeSubtitleLineIndices; // @synthesize transitNodeSubtitleLineIndices=_transitNodeSubtitleLineIndices;
@property (readonly, nonatomic) unsigned long long *transitNodeSystemIndices; // @synthesize transitNodeSystemIndices=_transitNodeSystemIndices;
@property (readonly, nonatomic) struct GEOTransitNodeFeature *transitNodes; // @synthesize transitNodes=_transitNodes;
@property (readonly, nonatomic) CDStruct_7523a67d *transitPointsOnRoad; // @synthesize transitPointsOnRoad=_transitPointsOnRoad;
@property (readonly, nonatomic) unsigned long long transitPointsOnRoadCount; // @synthesize transitPointsOnRoadCount=_transitPointsOnRoadCount;
@property (readonly, nonatomic) unsigned long long *transitShieldIndices; // @synthesize transitShieldIndices=_transitShieldIndices;
@property (readonly, nonatomic) unsigned long long transitStationTransferCount; // @synthesize transitStationTransferCount=_transitStationTransferCount;
@property (readonly, nonatomic) CDStruct_9df870a8 *transitStationTransferVertices; // @synthesize transitStationTransferVertices=_transitStationTransferVertices;
@property (readonly, nonatomic) CDStruct_36ada299 *transitStationTransfers; // @synthesize transitStationTransfers=_transitStationTransfers;
@property (readonly, nonatomic) unsigned long long transitSystemCount; // @synthesize transitSystemCount=_transitSystemCount;
@property (readonly, nonatomic) CDStruct_8f1ffc8e *transitSystems; // @synthesize transitSystems=_transitSystems;
@property (readonly, nonatomic) unsigned int *transitTravelTimes; // @synthesize transitTravelTimes=_transitTravelTimes;
@property (readonly, nonatomic) CDStruct_9df870a8 *transitVertices; // @synthesize transitVertices=_transitVertices;
@property (readonly, nonatomic) CDStruct_183601bc **venueBuildingSections; // @synthesize venueBuildingSections=_venuesSections;
@property (readonly, nonatomic) CDStruct_d8694409 *venueBuildings; // @synthesize venueBuildings=_venueBuildings;
@property (readonly, nonatomic) unsigned long long venueBuildingsCount; // @synthesize venueBuildingsCount=_venueBuildingsCount;
@property (readonly, nonatomic) CDStruct_2faeb20b *venueComponents; // @synthesize venueComponents=_venueComponents;
@property (readonly, nonatomic) unsigned long long venueComponentsCount; // @synthesize venueComponentsCount=_venueComponentsCount;
@property (readonly, nonatomic) CDStruct_9d4f1c73 *venueLevels; // @synthesize venueLevels=_venueLevels;
@property (readonly, nonatomic) unsigned long long venueLevelsCount; // @synthesize venueLevelsCount=_venueLevelsCount;
@property (readonly, nonatomic) CDStruct_9df870a8 *venueVertices; // @synthesize venueVertices=_venuesVertices;
@property (readonly, nonatomic) CDStruct_864365dc *venues; // @synthesize venues=_venues;
@property (readonly, nonatomic) unsigned long long venuesCount; // @synthesize venuesCount=_venuesCount;

- (void).cxx_destruct;
- (BOOL)_addGenericPolygonWithAttributes:(int *)arg1;
- (void)_attachRoadPoints;
- (BOOL)_convertTransitLineKeys:(CDStruct_183601bc **)arg1 countKeys:(unsigned long long)arg2 lineIndices:(unsigned long long **)arg3;
- (BOOL)_decodeLabelTextPlacementsFromStream:(CDStruct_8bf61218 *)arg1 count:(unsigned long long)arg2 firstFeature:(CDStruct_cdc9fa9f *)arg3 featureStride:(unsigned long long)arg4 tilePrecision:(unsigned char)arg5;
- (BOOL)_decodeTransitLabelsFromStream:(CDStruct_8bf61218 *)arg1 count:(unsigned long long)arg2 firstFeature:(CDStruct_58d0ca89 *)arg3 featureStride:(unsigned long long)arg4;
- (BOOL)_findJunctions;
- (BOOL)_findOverpasses;
- (BOOL)_handleGenericTile:(CDStruct_effb527d *)arg1;
- (id)_initWithVMP4:(id)arg1 localizationData:(id)arg2 tileKey:(const struct _GEOTileKey *)arg3;
- (BOOL)_makeSpaceForLabels:(unsigned long long)arg1 currentOffset:(unsigned long long *)arg2;
- (BOOL)_makeSpaceForShields:(unsigned long long)arg1 currentOffset:(unsigned long long *)arg2;
- (BOOL)_populateTransitConnectivity;
- (BOOL)_populateTransitNodeStyleAttributes;
- (BOOL)_read3DBuildings:(CDStruct_effb527d *)arg1;
- (BOOL)_readBorder3DBuildings:(CDStruct_effb527d *)arg1;
- (BOOL)_readChapter3DBuildings:(CDStruct_effb527d *)arg1 chapter:(unsigned short)arg2 buildingFeatures:(CDStruct_183601bc **)arg3 count:(unsigned long long *)arg4;
- (BOOL)_readCoastlines:(CDStruct_effb527d *)arg1;
- (BOOL)_readConnectivity:(CDStruct_effb527d *)arg1;
- (BOOL)_readCoverage:(CDStruct_effb527d *)arg1;
- (BOOL)_readHighResBuildings:(CDStruct_effb527d *)arg1;
- (BOOL)_readInfoChapter:(CDStruct_effb527d *)arg1 key:(const struct _GEOTileKey *)arg2;
- (BOOL)_readLabelAnnotations:(CDStruct_effb527d *)arg1 key:(const struct _GEOTileKey *)arg2 forLines:(BOOL)arg3;
- (BOOL)_readLabelLocalizations:(CDStruct_effb527d *)arg1;
- (BOOL)_readLabelPlacementMetadata:(CDStruct_effb527d *)arg1;
- (BOOL)_readLabels:(CDStruct_effb527d *)arg1;
- (BOOL)_readLines:(CDStruct_effb527d *)arg1;
- (BOOL)_readLowResBorderBuildings:(CDStruct_effb527d *)arg1;
- (BOOL)_readLowResBuildings:(CDStruct_effb527d *)arg1;
- (BOOL)_readModernBuildings:(CDStruct_effb527d *)arg1 chapter:(unsigned short)arg2 vertexPool:(CDStruct_183601bc **)arg3 footprints:(CDStruct_183601bc **)arg4 count:(unsigned long long *)arg5;
- (BOOL)_readPois:(CDStruct_effb527d *)arg1;
- (BOOL)_readPolygons:(CDStruct_effb527d *)arg1;
- (BOOL)_readPolygons:(CDStruct_effb527d *)arg1 ofType:(unsigned short)arg2;
- (BOOL)_readRoadNetwork:(CDStruct_effb527d *)arg1 key:(const struct _GEOTileKey *)arg2;
- (BOOL)_readSimpleCoastlines:(CDStruct_f3ac0f61 *)arg1 tile:(CDStruct_effb527d *)arg2;
- (BOOL)_readStorefronts:(CDStruct_effb527d *)arg1;
- (BOOL)_readTileReferences:(CDStruct_effb527d *)arg1 key:(const struct _GEOTileKey *)arg2;
- (BOOL)_readTransitMZROverride:(CDStruct_effb527d *)arg1;
- (BOOL)_readTransitNetwork:(CDStruct_effb527d *)arg1 key:(const struct _GEOTileKey *)arg2;
- (BOOL)_readTransitSystems:(CDStruct_effb527d *)arg1 key:(const struct _GEOTileKey *)arg2;
- (BOOL)_readTransitSystemsChapterIDSet:(CDStruct_8bf61218 *)arg1 featureCount:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;
- (BOOL)_readTransitSystemsChapterLabelSet:(CDStruct_8bf61218 *)arg1 featureCount:(unsigned long long)arg2 handler:(CDUnknownBlockType)arg3;
- (BOOL)_readVenueMZROverride:(CDStruct_effb527d *)arg1;
- (BOOL)_readVenues:(CDStruct_effb527d *)arg1 key:(const struct _GEOTileKey *)arg2;
- (BOOL)_readWrappingCoastlines:(CDStruct_f3ac0f61 *)arg1 tile:(CDStruct_effb527d *)arg2;
- (void)_trimWhitespace;
- (id)addAttributes:(id)arg1 toUniqueAttributeSet:(id)arg2;
- (id)baseHeightsPool;
- (void)dealloc;
- (id)description;
- (id)extrusionHeightsPool;
- (void)forEachEdgeInRoad:(CDStruct_c8b5ad3f *)arg1 visitTwice:(BOOL)arg2 visitor:(CDUnknownBlockType)arg3;
- (void)forEachEdgeOnJunction:(const CDStruct_3b01f0aa *)arg1 visitor:(CDUnknownBlockType)arg2;
- (void)forEachJunction:(CDUnknownBlockType)arg1;
- (void)forEachJunctionInRoad:(CDStruct_c8b5ad3f *)arg1 visitor:(CDUnknownBlockType)arg2;
- (void)forEachPoint:(CDUnknownBlockType)arg1;
- (void)forEachPolygon:(CDUnknownBlockType)arg1;
- (void)forEachRoad:(CDUnknownBlockType)arg1;
- (void)forEachTransitLinkOnJunction:(const CDStruct_3b01f0aa *)arg1 visitor:(CDUnknownBlockType)arg2;
- (id)initWithTileData:(id)arg1 localizationData:(id)arg2 tileKey:(const struct _GEOTileKey *)arg3;
- (BOOL)isTooBigToParseTileData:(id)arg1 localizationData:(id)arg2 tileKey:(const struct _GEOTileKey *)arg3;
- (CDStruct_c8b5ad3f *)multiSectionFeatureForGeoID:(unsigned long long)arg1;
- (CDStruct_6e3f967a *)polygonLabelPositions;
- (CDStruct_183601bc **)sortedPointsOnRoad;
- (struct GEOTileLabelLine *)tileLabelLineforLabelLineID:(unsigned long long)arg1;
- (CDStruct_9bbfa40f *)transitAccessPointForFeatureID:(unsigned long long)arg1;
- (CDStruct_5be08681 *)transitLineForFeatureID:(unsigned long long)arg1;
- (struct GEOTransitNodeFeature *)transitNodeForFeatureID:(unsigned long long)arg1;
- (CDStruct_8f1ffc8e *)transitSystemInfoForFeatureID:(unsigned long long)arg1;

@end
