//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <KnowledgeGraphKit/MAGraph.h>

@class CLSFocusPeopleCache, NSArray, NSDate, NSDateFormatter, NSDictionary, NSMutableDictionary, NSNumber, NSObject, NSRecursiveLock, NSSet, NSString, PGGraphInfoNode, PGManager, PGMessageProfile;
@protocol OS_dispatch_queue, OS_os_log;

@interface PGGraph : MAGraph
{
    NSDate *_creationDate;
    NSNumber *_canUseLocationDomain;
    BOOL _didFetchRoutineInfo;
    PGMessageProfile *_messageProfile;
    PGGraphInfoNode *_infoNode;
    NSDateFormatter *_dateFormatter;
    NSRecursiveLock *_supersetLock;
    NSSet *_supersets;
    NSSet *_supersetCityNodes;
    NSSet *_supersetCountyNodes;
    NSSet *_supersetStateNodes;
    NSSet *_supersetCountryNodes;
    NSSet *_supersetLocales;
    NSSet *_interestingCityNodes;
    NSSet *_highlyInterestingMomentNodes;
    NSMutableDictionary *_personNodesByPersonID;
    NSMutableDictionary *_isCelebratingInGeneralCache;
    NSArray *_preprocessors;
    NSArray *_postprocessors;
    NSDictionary *_zeroKeywordMappingByMeaningLabel;
    NSMutableDictionary *_momentNodeByMomentUUID;
    NSMutableDictionary *_highlightNodeByHighlightUUID;
    BOOL _keepsExistingAssetCurationScores;
    BOOL _canWrite;
    PGManager *_manager;
    CLSFocusPeopleCache *_focusPeopleIngestCache;
    long long _numberOfUtilityAssets;
    long long _numberOfDefaultAssets;
    long long _numberOfImprovedAssets;
    long long _numberOfBetterAssets;
    NSString *_geoServiceProviderID;
    unsigned long long _relatedAlgorithmsVersion;
    unsigned long long _curationAlgorithmsVersion;
    unsigned long long _memoriesAlgorithmsVersion;
    unsigned long long _meaningAlgorithmsVersion;
    unsigned long long _relationshipAlgorithmsVersion;
    unsigned long long _businessItemAlgorithmsVersion;
    unsigned long long _publicEventAlgorithmsVersion;
    unsigned long long _holidayAlgorithmsVersion;
    unsigned long long _homeLocationAlgorithmsVersion;
    unsigned long long _workLocationAlgorithmsVersion;
    unsigned long long _autonamingAlgorithmsVersion;
    unsigned long long _questionsVersion;
    unsigned long long _tripKeyAssetAlgorithmsVersion;
    unsigned long long _ageCategoryAlgorithmsVersion;
    unsigned long long _memoryQualityAlgorithmsVersion;
    unsigned long long _petAlgorithmsVersion;
    unsigned long long _featuredPhotoAlgorithmsVersion;
    unsigned long long _longTailFeaturedPhotoAlgorithmsVersion;
    NSString *_locale;
    double _personalGoodAestheticsThreshold;
    double _personalHighAestheticsThreshold;
    NSObject<OS_dispatch_queue> *_graphQueue;
    struct PGRoutineInfoStruct _routineInfo;
}

@property (nonatomic) unsigned long long ageCategoryAlgorithmsVersion; // @synthesize ageCategoryAlgorithmsVersion=_ageCategoryAlgorithmsVersion;
@property (readonly, nonatomic) NSSet *allMomentUUIDs;
@property (nonatomic) unsigned long long autonamingAlgorithmsVersion; // @synthesize autonamingAlgorithmsVersion=_autonamingAlgorithmsVersion;
@property (nonatomic) unsigned long long businessItemAlgorithmsVersion; // @synthesize businessItemAlgorithmsVersion=_businessItemAlgorithmsVersion;
@property (nonatomic) BOOL canUseLocationDomain;
@property BOOL canWrite; // @synthesize canWrite=_canWrite;
@property (strong, nonatomic) NSDate *creationDate;
@property (nonatomic) unsigned long long curationAlgorithmsVersion; // @synthesize curationAlgorithmsVersion=_curationAlgorithmsVersion;
@property (readonly, nonatomic) NSDateFormatter *dateFormatter; // @synthesize dateFormatter=_dateFormatter;
@property (nonatomic) unsigned long long featuredPhotoAlgorithmsVersion; // @synthesize featuredPhotoAlgorithmsVersion=_featuredPhotoAlgorithmsVersion;
@property (strong, nonatomic) CLSFocusPeopleCache *focusPeopleIngestCache; // @synthesize focusPeopleIngestCache=_focusPeopleIngestCache;
@property (strong, nonatomic) NSString *geoServiceProviderID; // @synthesize geoServiceProviderID=_geoServiceProviderID;
@property (readonly, nonatomic) NSObject<OS_os_log> *graphLoggingConnection;
@property (weak, nonatomic) NSObject<OS_dispatch_queue> *graphQueue; // @synthesize graphQueue=_graphQueue;
@property (nonatomic) unsigned long long holidayAlgorithmsVersion; // @synthesize holidayAlgorithmsVersion=_holidayAlgorithmsVersion;
@property (nonatomic) unsigned long long homeLocationAlgorithmsVersion; // @synthesize homeLocationAlgorithmsVersion=_homeLocationAlgorithmsVersion;
@property (readonly, nonatomic) NSObject<OS_os_log> *ingestLoggingConnection;
@property (readonly) BOOL isEmpty;
@property (readonly) BOOL isOnGraphQueue;
@property (nonatomic) BOOL keepsExistingAssetCurationScores; // @synthesize keepsExistingAssetCurationScores=_keepsExistingAssetCurationScores;
@property (readonly, nonatomic) long long librarySizeRange;
@property (strong, nonatomic) NSString *locale; // @synthesize locale=_locale;
@property (nonatomic) unsigned long long longTailFeaturedPhotoAlgorithmsVersion; // @synthesize longTailFeaturedPhotoAlgorithmsVersion=_longTailFeaturedPhotoAlgorithmsVersion;
@property (weak) PGManager *manager; // @synthesize manager=_manager;
@property (nonatomic) unsigned long long meaningAlgorithmsVersion; // @synthesize meaningAlgorithmsVersion=_meaningAlgorithmsVersion;
@property (nonatomic) unsigned long long memoriesAlgorithmsVersion; // @synthesize memoriesAlgorithmsVersion=_memoriesAlgorithmsVersion;
@property (nonatomic) unsigned long long memoryQualityAlgorithmsVersion; // @synthesize memoryQualityAlgorithmsVersion=_memoryQualityAlgorithmsVersion;
@property (strong, nonatomic) PGMessageProfile *messageProfile; // @synthesize messageProfile=_messageProfile;
@property (readonly, nonatomic) NSSet *musicSessions;
@property (readonly) BOOL needsRebuild;
@property (readonly, nonatomic) unsigned long long numberOfAssets;
@property (nonatomic) long long numberOfBetterAssets; // @synthesize numberOfBetterAssets=_numberOfBetterAssets;
@property (nonatomic) long long numberOfDefaultAssets; // @synthesize numberOfDefaultAssets=_numberOfDefaultAssets;
@property (nonatomic) long long numberOfImprovedAssets; // @synthesize numberOfImprovedAssets=_numberOfImprovedAssets;
@property (nonatomic) long long numberOfUtilityAssets; // @synthesize numberOfUtilityAssets=_numberOfUtilityAssets;
@property (nonatomic) double personalGoodAestheticsThreshold; // @synthesize personalGoodAestheticsThreshold=_personalGoodAestheticsThreshold;
@property (nonatomic) double personalHighAestheticsThreshold; // @synthesize personalHighAestheticsThreshold=_personalHighAestheticsThreshold;
@property (nonatomic) unsigned long long petAlgorithmsVersion; // @synthesize petAlgorithmsVersion=_petAlgorithmsVersion;
@property (nonatomic) unsigned long long publicEventAlgorithmsVersion; // @synthesize publicEventAlgorithmsVersion=_publicEventAlgorithmsVersion;
@property (nonatomic) unsigned long long questionsVersion; // @synthesize questionsVersion=_questionsVersion;
@property (nonatomic) unsigned long long relatedAlgorithmsVersion; // @synthesize relatedAlgorithmsVersion=_relatedAlgorithmsVersion;
@property (readonly, nonatomic) NSObject<OS_os_log> *relatedLoggingConnection;
@property (nonatomic) unsigned long long relationshipAlgorithmsVersion; // @synthesize relationshipAlgorithmsVersion=_relationshipAlgorithmsVersion;
@property (nonatomic) struct PGRoutineInfoStruct routineInfo; // @synthesize routineInfo=_routineInfo;
@property (readonly, nonatomic) NSSet *supersetCityNodes;
@property (readonly, nonatomic) NSSet *supersetCountryNodes;
@property (readonly, nonatomic) NSSet *supersetCountyNodes;
@property (readonly, nonatomic) NSSet *supersetLocales;
@property (readonly, nonatomic) NSSet *supersetStateNodes;
@property (readonly, nonatomic) NSSet *supersets;
@property (nonatomic) unsigned long long tripKeyAssetAlgorithmsVersion; // @synthesize tripKeyAssetAlgorithmsVersion=_tripKeyAssetAlgorithmsVersion;
@property (nonatomic) unsigned long long workLocationAlgorithmsVersion; // @synthesize workLocationAlgorithmsVersion=_workLocationAlgorithmsVersion;
@property (readonly, nonatomic) NSDictionary *zeroKeywordMappingByMeaningLabel;

+ (id)_closestRelationshipEdgeLabelForPersonNode:(id)arg1 andOtherPersonNode:(id)arg2;
+ (id)_findParentMeaningLabelForMeaningLabel:(id)arg1 inTree:(id)arg2 currentParent:(id)arg3;
+ (id)_graphNodePOILabelByPlaceType;
+ (BOOL)_hasMomentsForPersonIdentifiers:(id)arg1 inGraph:(id)arg2 photoLibrary:(id)arg3;
+ (long long)_librarySizeRangeForNumberOfAssets:(unsigned long long)arg1;
+ (id)_meaningLabelTree;
+ (id)_personClosestToMeBetweenPersonNode:(id)arg1 andOtherPersonNode:(id)arg2;
+ (id)_poiLabelForPOIType:(id)arg1;
+ (void)_traverseMeaningLabelsInTree:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (void)_traverseMeaningLabelsUsingBlock:(CDUnknownBlockType)arg1;
+ (id)allMeaningfulMeanings;
+ (id)assetPropertySetsForIngest;
+ (id)blacklistSceneBabyLabels;
+ (id)blacklistSceneLabelsForHobbyType:(long long)arg1;
+ (id)blacklistScenePetLabels;
+ (id)confidenceThresholdBySceneIdentifierForSceneNames:(id)arg1 blacklisted:(BOOL)arg2;
+ (id)defaultMatchingSortDescriptors;
+ (id)defaultSpecification;
+ (id)frequentMeaningLabels;
+ (BOOL)graphExistsWithName:(id)arg1 parentDirectoryURL:(id)arg2;
+ (id)graphURLForName:(id)arg1 parentDirectoryURL:(id)arg2;
+ (id)graphWithVisualString:(id)arg1 error:(id *)arg2;
+ (id)homeOwnerPersonNodesForMoment:(id)arg1;
+ (id)lessMeaningfulMeanings;
+ (BOOL)location:(struct CLLocationCoordinate2D)arg1 isCloseToLocation:(struct CLLocationCoordinate2D)arg2;
+ (id)matchingBlasklistedSceneLabels;
+ (id)matchingWeightToDictionary;
+ (unsigned long long)meaningForMeaningLabel:(id)arg1;
+ (id)meaningLabelForMeaning:(unsigned long long)arg1;
+ (id)mostSignificantMeaningLabels;
+ (id)parentMeaningLabelForMeaningLabel:(id)arg1;
+ (id)sceneBabyLabels;
+ (id)sceneLabelsForHobbyType:(long long)arg1;
+ (id)scenePetLabels;
+ (id)socialGroupPeopleSortDescriptorForSocialGroupNode:(id)arg1;
+ (id)stellarMeanings;
+ (id)stringForMeaning:(unsigned long long)arg1;
+ (double)topTierAestheticScoreForRatio:(double)arg1 inPhotoLibrary:(id)arg2;
+ (void)traverseParentMeaningsForMeaningLabel:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
+ (id)veryMeaningfulMeanings;
- (void).cxx_destruct;
- (BOOL)_allRequiredRulesOfEventRule:(id)arg1 applyToLocalDate:(id)arg2 andAnyNodeFromMomentNodes:(id)arg3;
- (struct CLLocationCoordinate2D)_approximateCoordinateForLocationNode:(id)arg1;
- (void)_cacheEventRule:(id)arg1 isCelebrating:(BOOL)arg2;
- (double)_calculateScoreWithNeighborMomentNodes:(id)arg1 referenceDate:(id)arg2 andDistanceBlock:(CDUnknownBlockType)arg3;
- (double)_calculateScoreWithNeighborMomentNodes:(id)arg1 referenceDate:(id)arg2 referenceDistance:(double)arg3 andDistanceBlock:(CDUnknownBlockType)arg4;
- (void)_checkCanRead;
- (void)_checkCanWrite;
- (id)_cleanUpMoments:(id)arg1;
- (id)_closestLocationNodeFromAddressNode:(id)arg1 toAddressNode:(id)arg2;
- (unsigned long long)_cluePeopleForRelationships:(id)arg1;
- (id)_commonAreaNodesBetweenAddressAreaNodes:(id)arg1 andAddressNode:(id)arg2;
- (id)_commonAreaNodesBetweenAddressNode:(id)arg1 andAddressNode:(id)arg2;
- (id)_commonNodeForLocationNode:(id)arg1 andLocationNode:(id)arg2;
- (id)_coreEventMatchingFromEvent:(id)arg1 toEvent:(id)arg2 options:(id)arg3;
- (id)_coreLocationMatchingFromEvent:(id)arg1 toEvent:(id)arg2 options:(id)arg3;
- (id)_corePlaceMatchingIdsToScoresFromEvent:(id)arg1 toEvent:(id)arg2 options:(id)arg3;
- (id)_coreSceneMatchingFromEvent:(id)arg1 toEvent:(id)arg2 options:(id)arg3;
- (unsigned long long)_countOfDistinctSocialGroups:(id)arg1;
- (id)_createZeroKeywordMappingByMeaningLabel;
- (id)_dateIntervalForMomentNodes:(id)arg1;
- (id)_dayOfWeekNameForDate:(id)arg1;
- (void)_deleteMomentsWithGraphUpdate:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (double)_densityScoreWithNeighborMomentNodes:(id)arg1 referenceDate:(id)arg2 andNumberOfAssets:(unsigned long long)arg3;
- (double)_distanceForLocationLabel:(id)arg1;
- (void)_enumerateMeaningfulEventsWithMeaningLabel:(id)arg1 visitedMeaningfulEvents:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)_enumerateMomentForMomentNode:(id)arg1 paddingTime:(double)arg2 enumerationBlock:(CDUnknownBlockType)arg3;
- (BOOL)_enumerateMomentNodesForAssetCollection:(id)arg1 paddingTime:(double)arg2 error:(id *)arg3 enumerationBlock:(CDUnknownBlockType)arg4;
- (void)_enumerateSocialGroupsIncludingMeNode:(BOOL)arg1 withValidGroupsBlock:(CDUnknownBlockType)arg2 invalidGroupsBlock:(CDUnknownBlockType)arg3 averageWeight:(out float *)arg4;
- (id)_eventMatchingFromEvent:(id)arg1 toEvent:(id)arg2 options:(id)arg3;
- (id)_eventMatchingIdsToScoresFromEvent:(id)arg1 options:(id)arg2;
- (id)_eventsFromEvents:(id)arg1 withTargetDomain:(unsigned short)arg2;
- (id)_feederForInsertingAssetCollection:(id)arg1;
- (id)_firstLocationNodeFromAddressNode:(id)arg1 inLocationNodes:(id)arg2;
- (id)_fuzzyMomentLookupForMomentNode:(id)arg1 error:(id *)arg2;
- (id)_fuzzyMomentNodeLookupForAssetCollection:(id)arg1 error:(id *)arg2;
- (id)_infoNode;
- (id)_insertMomentNodeForClueCollection:(id)arg1 feeder:(id)arg2 insertedAndUpdatedPersonNodes:(id *)arg3 progressBlock:(CDUnknownBlockType)arg4;
- (void)_insertRoutineInfo;
- (BOOL)_isInterestingForAnyNodeFromMomentNodes:(id)arg1;
- (BOOL)_isMatchingRequiredScenes:(id)arg1 withMomentNode:(id)arg2;
- (BOOL)_isMatchingRequiredScenes:(id)arg1 withMomentNodes:(id)arg2;
- (id)_locationMatchingFromEvent:(id)arg1 toEvent:(id)arg2 options:(id)arg3;
- (id)_locationMatchingIdsToScoresFromEvent:(id)arg1 options:(id)arg2;
- (id)_locationNodesOfSupersetsWithLocationNodeLabel:(id)arg1;
- (BOOL)_locationNodesRepresentSameCity:(id)arg1;
- (double)_locationScoreWithNeighborMomentNodes:(id)arg1 referenceDate:(id)arg2 andLocationCoordinate:(const struct CLLocationCoordinate2D *)arg3;
- (id)_momentNodeForAssetCollection:(id)arg1 error:(id *)arg2;
- (id)_momentNodesForDateComponents:(id)arg1 error:(id *)arg2;
- (id)_momentNodesFromPersonNodes:(id)arg1;
- (id)_mostVisitedLocationNodeForLocationNodes:(id)arg1;
- (id)_neighborsFromMomentNode:(id)arg1 count:(unsigned long long)arg2 locationRequired:(BOOL)arg3 minDayDuration:(unsigned long long)arg4 maxDayDuration:(unsigned long long)arg5;
- (unsigned long long)_peopleCountWithoutMe:(id)arg1 focusOnNodes:(id)arg2;
- (id)_peopleMatchingFromEvent:(id)arg1 toEvent:(id)arg2 options:(id)arg3;
- (id)_peopleMatchingIdsToResultsFromEvent:(id)arg1 options:(id)arg2;
- (id)_peopleMatchingResultFromEvent:(id)arg1 matchedEvent:(id)arg2 presentPeopleCountForEvent:(unsigned long long)arg3 presentPeopleCountForMatchedEvent:(unsigned long long)arg4 commonPeople:(id)arg5 relationshipScoreCache:(id)arg6 needsKeywords:(BOOL)arg7;
- (double)_peopleScoreWithNeighborMomentNodes:(id)arg1 referenceDate:(id)arg2 andPeopleUUIDs:(id)arg3;
- (id)_peopleUUIDsForMomentNode:(id)arg1;
- (id)_peopleWithoutMe:(id)arg1 focusOnNodes:(id)arg2;
- (id)_personNodeIntersectingSocialGroups:(id)arg1;
- (id)_placeMatchingFromEvent:(id)arg1 toEvent:(id)arg2 options:(id)arg3;
- (id)_placeMatchingIdsToScoresFromEvent:(id)arg1 options:(id)arg2;
- (id)_previousSeasonForSeason:(id)arg1;
- (id)_propertiesFromIngestHighlight:(id)arg1;
- (void)_registerInsertedMomentNodes:(id)arg1 inGraphUpdate:(id)arg2;
- (double)_relationshipScoreForPersonNode:(id)arg1;
- (void)_reportBusinessItems;
- (void)_reportDisambiguatedLocations;
- (void)_reportLibrary;
- (void)_reportMobility;
- (id)_requiredSceneNodesToMatchForHolidayEventRule:(id)arg1;
- (id)_sceneMatchingFromEvent:(id)arg1 toEvent:(id)arg2 options:(id)arg3;
- (id)_sceneMatchingIdsToScoresFromEvent:(id)arg1 options:(id)arg2;
- (double)_scoreForPlaceSubDomain:(unsigned short)arg1;
- (BOOL)_shouldUpdateCurationScore:(double)arg1 withNewCurationScore:(double)arg2;
- (id)_socialGroupNodeForPersonNodes:(id)arg1 searchWithTolerance:(BOOL)arg2;
- (id)_strictMomentLookupForMomentNode:(id)arg1;
- (id)_strictMomentNodeLookupForAssetCollection:(id)arg1 error:(id *)arg2;
- (id)_supersetsForLocalDateInterval:(id)arg1 intersectingMomentNodes:(id)arg2 earlyStop:(BOOL)arg3;
- (id)_timeMatchingFromEvent:(id)arg1 toEvent:(id)arg2 options:(id)arg3;
- (id)_timeMatchingIdsToScoresFromEvent:(id)arg1 options:(id)arg2;
- (id)_userLocales;
- (long long)_uuidForPlacemark:(id)arg1 forNodeLabel:(id)arg2;
- (id)_validLocationNodeForLocationNode:(id)arg1 withLocationMask:(unsigned long long)arg2;
- (void)_writeCurationScoresToPhotosDatabase:(id)arg1;
- (void)_writeInteractionScoresToPhotosDatabase:(id)arg1;
- (void)addCurationScore:(double)arg1 forAsset:(id)arg2;
- (id)addDayHighlightNodeWithProperties:(id)arg1;
- (void)addInteractionScore:(float)arg1 forAsset:(id)arg2;
- (void)addMeaningToMeaningfulEventNode:(id)arg1 meaningLabel:(id)arg2 meaningIsReliable:(BOOL)arg3;
- (id)addMomentNodeWithProperties:(id)arg1;
- (void)addParentMeaningHierarchyForMeaningNode:(id)arg1;
- (void)addRelationshipEdgesBetweenPersonNode:(id)arg1 andPersonNode:(id)arg2 forRelationship:(unsigned long long)arg3 confidence:(float)arg4 properties:(id)arg5;
- (void)addRelationshipEdgesBetweenPersonNode:(id)arg1 andSocialGroupNode:(id)arg2 forRelationship:(unsigned long long)arg3 confidence:(float)arg4 properties:(id)arg5;
- (id)addUniqueHighlightGroupNodeWithProperties:(id)arg1 didCreate:(BOOL *)arg2;
- (id)addUniqueSceneNodeWithSceneIdentifier:(id)arg1 relevance:(double)arg2 didCreate:(BOOL *)arg3;
- (id)aggregationHighlightTypeNode;
- (id)aggregationNodes;
- (id)allDatesForEventRule:(id)arg1;
- (id)allDatesForEventRule:(id)arg1 yearRange:(struct _NSRange)arg2;
- (id)allHobbies;
- (id)allSocialGroupsForPersonIdentifier:(id)arg1;
- (id)allTimeYearsNodes;
- (id)allTripNodes;
- (id)assetCollectionsForPersonNodes:(id)arg1;
- (id)babyNodes;
- (id)bestFittingAreaNodeFromAreaNodes:(id)arg1;
- (id)bestMeaningLabelForMeaningfulEvent:(id)arg1;
- (id)bestSocialGroupNodes;
- (id)businessNodes;
- (void)cacheHighlightNode:(id)arg1 forHighlightUUID:(id)arg2 checkUnicity:(BOOL)arg3;
- (void)cacheMomentNode:(id)arg1 forMomentUUID:(id)arg2 checkUnicity:(BOOL)arg3;
- (void)cacheNodesWithProgressBlock:(CDUnknownBlockType)arg1;
- (id)cachedHighlightNodeForHighlightUUID:(id)arg1;
- (id)cachedMomentNodeForMomentUUID:(id)arg1;
- (id)celebratedHolidayNodes;
- (id)celebratedHolidays;
- (id)celebratingMomentNodesForDateNode:(id)arg1 eventRule:(id)arg2;
- (id)children;
- (id)closestMomentNodeForLocalDate:(id)arg1;
- (id)commonLocationNodeForRelevantLocationNodes:(id)arg1 locationMask:(unsigned long long)arg2;
- (id)commonSocialGroupNodesForPersonNodes:(id)arg1;
- (id)commonSocialGroupNodesForPersonNodes:(id)arg1 withThreshold:(double)arg2;
- (void)computeAndStoreTopTierAestheticScore;
- (id)connectPublicEventNode:(id)arg1 withBusinessNode:(id)arg2;
- (BOOL)copyToURL:(id)arg1;
- (id)coworkers;
- (id)dateNodeForLocalDate:(id)arg1;
- (id)dateNodeNameWithLocalDate:(id)arg1;
- (id)dateNodesForLocalDateInterval:(id)arg1;
- (id)dateNodesForMonth:(long long)arg1;
- (id)dateNodesForWeekOfMonth:(long long)arg1;
- (id)dateNodesForWeekOfYear:(long long)arg1;
- (id)dateNodesForYear:(long long)arg1;
- (id)dateNodesIgnoringYearForLocalDate:(id)arg1;
- (id)dayHighlightNodes;
- (id)dayHighlightNodesSortedByDate;
- (id)dayNodeForDay:(long long)arg1;
- (id)dayOfWeekNodeForDayOfWeek:(long long)arg1;
- (id)dayOfWeekNodes;
- (id)defaultHighlightNodes;
- (id)defaultHighlightTypeNode;
- (void)deleteHighlightsWithGraphUpdate:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (void)deletePersonsWithGraphUpdate:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)densestCloseLocationNodeFromLocationNode:(id)arg1 withDateInterval:(id)arg2 locationMask:(unsigned long long)arg3;
- (void)enumerateAreaNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateBabyNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateBusinessNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateCelebratedHolidayNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateDateComponentsBetweenLocalStartDate:(id)arg1 andLocalEndDate:(id)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (void)enumerateDayHighlightNodesWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateHighlightGroupNodesWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateMeaningfulEventsWithMeaning:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateMeaningsFromMeaningfulEvent:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateMomentNodesWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateMomentNodesWithMeaning:(unsigned long long)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)enumerateMusicSessionNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumeratePeopleClustersIncludingMeNode:(BOOL)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumeratePeopleClustersWithLinkage:(unsigned long long)arg1 threshold:(double)arg2 includingMeNode:(BOOL)arg3 withBlock:(CDUnknownBlockType)arg4;
- (void)enumeratePersonNodesIncludingMe:(BOOL)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)enumeratePetNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumeratePublicEventNodesUsingBlock:(CDUnknownBlockType)arg1;
- (void)enumerateSceneNodesWithBlock:(CDUnknownBlockType)arg1;
- (void)enumerateSocialGroupsWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)eventIsStellar:(id)arg1;
- (BOOL)eventIsVeryMeaningful:(id)arg1;
- (id)eventNodeForAssetCollection:(id)arg1;
- (BOOL)exportMatchMomentEventResults:(id)arg1 relatedType:(unsigned long long)arg2 focusOnNodes:(id)arg3 toFileURL:(id)arg4 error:(id *)arg5;
- (id)familyMembers;
- (id)favoritedPersonNodesIncludingMe:(BOOL)arg1;
- (id)friends;
- (BOOL)hasSocialGroups;
- (id)highlightForHighlightNode:(id)arg1;
- (id)highlightGroupNodeForUUID:(id)arg1;
- (id)highlightGroupNodes;
- (id)highlightGroupNodesSortedByDate;
- (id)highlightNodeForHighlight:(id)arg1;
- (id)highlightNodeForHighlightUUID:(id)arg1;
- (id)hobbiesForType:(long long)arg1;
- (id)inferredMeNode;
- (id)initWithSpecification:(id)arg1;
- (id)initWithURL:(id)arg1 persistenceOptions:(long long)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (id)insertAddressNodeWithPlacemark:(id)arg1 location:(id)arg2 weight:(float)arg3 duringDateInterval:(id)arg4 fromEventNode:(id)arg5;
- (id)insertAddressNodeWithProjectedPlacemark:(id)arg1 atEventLocation:(id)arg2 usingImprovedPlacemark:(BOOL)arg3;
- (void)insertAreasOfInterestForProjectedPlacemark:(id)arg1 fromAddressNode:(id)arg2;
- (void)insertAssetCurationScoreInLibraryForFeeder:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)insertBaby:(id)arg1;
- (id)insertBusiness:(id)arg1 fromEventNode:(id)arg2;
- (id)insertContactSuggestion:(id)arg1 forPersonNode:(id)arg2 confidence:(double)arg3 edgeProperties:(id)arg4;
- (id)insertDateNodeHierarchyWithDateComponents:(id)arg1;
- (id)insertDateNodesFromEventNode:(id)arg1;
- (id)insertDateNodesFromLocalStartDate:(id)arg1 toLocalEndDate:(id)arg2 fromEventNode:(id)arg3;
- (id)insertDateNodesWithClueCollection:(id)arg1 fromMomentNode:(id)arg2;
- (void)insertHighlightDayGroupsWithGraphUpdate:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (void)insertHighlightDaysWithGraphUpdate:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)insertHighlightGroupNodeWithHighlight:(id)arg1;
- (id)insertHighlightNodeWithHighlight:(id)arg1;
- (void)insertHighlightsWithGraphUpdate:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)insertHomeWorkNodeForPerson:(id)arg1 personNode:(id)arg2 fromAddressNodes:(id)arg3;
- (id)insertLocationHierarchyWithClueCollection:(id)arg1 fromMomentNode:(id)arg2;
- (void)insertLocationHierarchyWithProjectedPlacemark:(id)arg1 fromAddressNode:(id)arg2;
- (id)insertLocationMobilityNodeWithClueCollection:(id)arg1 fromMomentNode:(id)arg2;
- (id)insertLocationMobilityNodeWithMobility:(id)arg1 fromEventNode:(id)arg2 edgeWeight:(float)arg3;
- (id)insertMePersonNodeForPerson:(id)arg1;
- (id)insertMomentNodeForClueCollection:(id)arg1 feeder:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (id)insertMomentNodeForMoment:(id)arg1;
- (void)insertMomentsWithGraphUpdate:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (id)insertMusicAlbumNodeWithAlbumTitle:(id)arg1;
- (id)insertMusicGenreNodeWithGenreName:(id)arg1;
- (id)insertMusicSessionNodeWithLocalStartDate:(id)arg1 localEndDate:(id)arg2;
- (id)insertMusicTrackWithTrackTitle:(id)arg1 durationInSeconds:(double)arg2;
- (id)insertPOINodeWithPlace:(id)arg1 fromEventNode:(id)arg2 hasInsertedSpecialPOIAmusementParkNode:(BOOL)arg3;
- (id)insertPOIWithFeeder:(id)arg1 fromMomentNode:(id)arg2 isNearHomeOrWork:(BOOL)arg3;
- (id)insertPartOfDayNodeWithPartOfDayName:(id)arg1 fromEventNode:(id)arg2 edgeWeight:(float)arg3;
- (id)insertPartOfDayNodesWithClueCollection:(id)arg1 fromMomentNode:(id)arg2;
- (id)insertPeopleWithClueCollection:(id)arg1 fromMomentNode:(id)arg2 addressNodes:(id)arg3 isNearPeopleAddress:(BOOL *)arg4;
- (id)insertPersonNodeForPerson:(id)arg1;
- (id)insertPersonNodeForPerson:(id)arg1 fromEventNode:(id)arg2 numberOfAssetsWithPerson:(unsigned long long)arg3 edgeWeight:(float)arg4;
- (id)insertPet:(id)arg1;
- (id)insertPresentEdgeFromPersonNode:(id)arg1 toEventNode:(id)arg2 numberOfAssetsWithPerson:(unsigned long long)arg3 edgeWeight:(float)arg4;
- (id)insertPublicEvent:(id)arg1 fromEventNode:(id)arg2;
- (id)insertROINodeWithPlace:(id)arg1 fromEventNode:(id)arg2;
- (id)insertROIWithClueCollection:(id)arg1 fromMomentNode:(id)arg2;
- (id)insertSceneNodeWithScene:(id)arg1 fromEventNode:(id)arg2;
- (id)insertSceneNodesWithClueCollection:(id)arg1 fromMomentNode:(id)arg2;
- (id)insertSpecialPOIAmusementParkNodeFromMomentNode:(id)arg1;
- (id)insertTimeNodesWithDateComponents:(id)arg1 fromEventNode:(id)arg2;
- (id)interestingAreaNodes;
- (id)interestingCityNodes;
- (void)invalidateIsCelebratingInGeneralCache;
- (void)invalidateMemoryCaches;
- (void)invalidateProcessingCaches;
- (void)invalidateSupersetCaches;
- (BOOL)isBestPairSocialGroup:(id)arg1;
- (BOOL)isCelebratingHolidayEventInGeneralForEventRule:(id)arg1;
- (BOOL)isPairSocialGroup:(id)arg1;
- (id)largeFrequentLocationNodes;
- (long long)libraryAge;
- (double)libraryDuration;
- (id)localDatesForMomentNode:(id)arg1;
- (id)longTripHighlightTypeNode;
- (id)longTripNodes;
- (id)mainUrbanCityNodes;
- (id)matchEvent:(id)arg1 options:(id)arg2;
- (id)matchEvent:(id)arg1 withEvent:(id)arg2 options:(id)arg3;
- (id)matchPersonNodes:(id)arg1 sortDescriptors:(id)arg2;
- (id)maximalSocialGroupsForPersonIdentifiers:(id)arg1;
- (id)meNode;
- (id)meaningfulEventNodeForUUID:(id)arg1;
- (id)meaningfulEvents;
- (id)meaningfulMomentNodesSortedByDate;
- (id)meaningsFromMeaningfulEvent:(id)arg1;
- (id)momentForMomentNode:(id)arg1;
- (id)momentNodeForAsset:(id)arg1;
- (id)momentNodeForMoment:(id)arg1;
- (id)momentNodeForMomentUUID:(id)arg1;
- (id)momentNodeForUUID:(id)arg1;
- (id)momentNodeIdentifiersForYearNodeIdentifiers:(id)arg1;
- (id)momentNodes;
- (id)momentNodesConnectedToNode:(id)arg1;
- (id)momentNodesForLocalDate:(id)arg1;
- (id)momentNodesForMomentIdentifiers:(id)arg1;
- (id)momentNodesForMoments:(id)arg1;
- (id)momentNodesForPersonNodes:(id)arg1;
- (id)momentNodesIgnoringYearForLocalDate:(id)arg1;
- (id)momentNodesInSameCityAsMomentNodes:(id)arg1;
- (id)momentNodesOverlappingLocalDateInterval:(id)arg1;
- (id)momentNodesSortedByDate;
- (id)momentNodesSortedByDateFromMomentNodes:(id)arg1;
- (id)momentNodesWithMeaning:(unsigned long long)arg1;
- (id)momentsForMomentNodes:(id)arg1 sortChronologically:(BOOL)arg2;
- (id)momentsResultForMomentNodes:(id)arg1 sortChronologically:(BOOL)arg2;
- (id)monthNodeForMonth:(long long)arg1;
- (id)musicGenreDistributionUsingTaggedGenres:(BOOL)arg1;
- (double)neighborScoreForLocalDate:(id)arg1;
- (double)neighborScoreForMomentNode:(id)arg1;
- (id)nodeLabelForHighlightType:(unsigned short)arg1;
- (id)nodesForHighlightsInHighlightDayGroup:(id)arg1;
- (id)nodesForMomentsInHighlight:(id)arg1;
- (unsigned long long)numberOfMomentNodes;
- (unsigned long long)numberOfPersonNodesIncludingMe:(BOOL)arg1;
- (unsigned long long)numberOfSceneNodes;
- (unsigned long long)numberOfSocialGroupNodes;
- (id)onGoingTripHighlightTypeNode;
- (id)onGoingTripNodes;
- (id)parents;
- (id)partners;
- (void)performBatchUpdatesWithGraphUpdate:(id)arg1 withRecipe:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (void)performChangeForGraphUpdate:(id)arg1 progressBlock:(CDUnknownBlockType)arg2;
- (void)performPostprocessingWithGraphUpdate:(id)arg1 withRecipe:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (void)performPreprocessingWithGraphUpdate:(id)arg1 withRecipe:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (void)performProcessingSteps:(id)arg1 withGraphUpdate:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (id)personLocalIdentifiersBySocialGroupUUIDWithSocialGroupNodes:(id)arg1 shouldIncludeMeNode:(BOOL)arg2;
- (id)personNodeForPersonLocalIdentifier:(id)arg1;
- (id)personNodesForPersonIdentifiers:(id)arg1;
- (id)personNodesIncludingMe:(BOOL)arg1;
- (id)petNodes;
- (id)preciseMeaningLabelForMeaningLabel:(id)arg1 meaningfulEvent:(id)arg2;
- (id)preciseMeaningNodeForMeaningLabel:(id)arg1 meaningfulEvent:(id)arg2;
- (void)prepareForRebuild;
- (id)previousSeasonNodeForSeasonNode:(id)arg1;
- (id)relevantAddressNodesForMomentNodes:(id)arg1;
- (id)relevantLocationNodesForMomentNodes:(id)arg1;
- (void)removeAllMeaningNodes;
- (void)removeAllPublicEventNodes;
- (void)reportMetricsLogs;
- (double)routineScoreForLocalDate:(id)arg1 latitude:(double)arg2 longitude:(double)arg3 andPeopleUUIDs:(id)arg4;
- (void)saveNumberOfAssetsToInfoNode;
- (BOOL)saveToURL:(id)arg1;
- (id)sceneNodeForSceneName:(id)arg1;
- (id)sceneNodes;
- (id)sceneNodesForSceneNames:(id)arg1;
- (id)searchNodesForAsset:(id)arg1 inMoment:(id)arg2;
- (id)seasonNodeForLocalDate:(id)arg1;
- (id)seasonNodes;
- (id)shortTripHighlightTypeNode;
- (id)shortTripNodes;
- (id)socialGroupNodeForPersonNodes:(id)arg1;
- (id)socialGroupNodes;
- (id)socialGroupNodesSortedByWeight;
- (id)socialGroupsDebugStringIncludingMeNode:(BOOL)arg1;
- (id)socialGroupsForPersonIdentifiers:(id)arg1;
- (id)socialGroupsIdentifiersFromSocialGroupNodes:(id)arg1 shouldIncludeMeNode:(BOOL)arg2;
- (id)sortedSocialGroupNodeForMomentNodeIdentifiers:(id)arg1;
- (id)staticGraphSchema;
- (id)supersetsForLocalDate:(id)arg1;
- (id)supersetsForLocalDateInterval:(id)arg1;
- (BOOL)supersetsIntersectMomentNodes:(id)arg1;
- (id)supersetsIntersectingMomentNodes:(id)arg1;
- (double)topTierAestheticScore;
- (double)topTierAestheticScoreForTripKeyAsset;
- (id)trips;
- (void)uncacheHighlightNodeForHighlightUUID:(id)arg1 checkExistence:(BOOL)arg2;
- (void)uncacheHighlightNodesForHighlightUUIDs:(id)arg1;
- (void)uncacheMomentNodeForMomentUUID:(id)arg1 checkExistence:(BOOL)arg2;
- (void)uncacheMomentNodesForMomentUUIDs:(id)arg1;
- (void)unloadMessageProfile;
- (void)updateHighlightNode:(id)arg1 withHighlight:(id)arg2;
- (void)updateHighlightsForHighlightDayGroupNode:(id)arg1 withHighlightDayGroup:(id)arg2;
- (void)updateMomentsForHighlightNode:(id)arg1 withHighlight:(id)arg2;
- (void)updatePersonNode:(id)arg1 withPerson:(id)arg2 forPropertyNames:(id)arg3;
- (id)weekends;
- (void)writePendingScoresToPhotosDatabase;
- (id)yearNodeForYear:(long long)arg1;
- (id)yearNodeIdentifiersForMomentNodeIdentifiers:(id)arg1;

@end

