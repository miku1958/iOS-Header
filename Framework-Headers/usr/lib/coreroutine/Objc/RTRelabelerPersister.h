//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSManagedObjectContext, NSMutableDictionary, RTDistanceCalculator, RTLocationShifter, RTMapItemProviderLearnedPlaceParameters, RTMapItemProviderReverseGeocode, RTRelabelerParameters, RTRelabelerPersisterMetrics, RTRelabelerPersisterParameters;

@interface RTRelabelerPersister : NSObject
{
    RTRelabelerPersisterMetrics *_metrics;
    NSManagedObjectContext *_context;
    RTDistanceCalculator *_distanceCalculator;
    RTLocationShifter *_locationShifter;
    RTMapItemProviderReverseGeocode *_reverseGeocodeProvider;
    RTMapItemProviderLearnedPlaceParameters *_learnedPlaceParameters;
    NSMutableDictionary *_loiIdentifierToUnconcreteMap;
    RTRelabelerParameters *_relabelerParameters;
    RTRelabelerPersisterParameters *_relabelerPersisterParameters;
}

@property (strong, nonatomic) NSManagedObjectContext *context; // @synthesize context=_context;
@property (readonly, nonatomic) RTDistanceCalculator *distanceCalculator; // @synthesize distanceCalculator=_distanceCalculator;
@property (readonly, nonatomic) RTMapItemProviderLearnedPlaceParameters *learnedPlaceParameters; // @synthesize learnedPlaceParameters=_learnedPlaceParameters;
@property (readonly, nonatomic) RTLocationShifter *locationShifter; // @synthesize locationShifter=_locationShifter;
@property (readonly, nonatomic) NSMutableDictionary *loiIdentifierToUnconcreteMap; // @synthesize loiIdentifierToUnconcreteMap=_loiIdentifierToUnconcreteMap;
@property (strong, nonatomic) RTRelabelerPersisterMetrics *metrics; // @synthesize metrics=_metrics;
@property (readonly, nonatomic) RTRelabelerParameters *relabelerParameters; // @synthesize relabelerParameters=_relabelerParameters;
@property (readonly, nonatomic) RTRelabelerPersisterParameters *relabelerPersisterParameters; // @synthesize relabelerPersisterParameters=_relabelerPersisterParameters;
@property (readonly, nonatomic) RTMapItemProviderReverseGeocode *reverseGeocodeProvider; // @synthesize reverseGeocodeProvider=_reverseGeocodeProvider;

+ (id)locationFromAggregateVisits:(id)arg1;
- (void).cxx_destruct;
- (BOOL)associateNonPlaceholderRelabeledInferredMapItem:(id)arg1 oldCandidate:(id)arg2 error:(id *)arg3;
- (BOOL)associatePlaceholderRelabeledInferredMapItem:(id)arg1 oldCandidate:(id)arg2 error:(id *)arg3;
- (BOOL)cleanUpCombinedPairs:(id)arg1 context:(id)arg2 error:(id *)arg3;
- (BOOL)cleanUpWithError:(id *)arg1;
- (BOOL)combineEarlierVisitMO:(id)arg1 withLaterVisitMO:(id)arg2 error:(id *)arg3;
- (BOOL)combineOverlappingRevGeoLOIsStabilized:(BOOL *)arg1 error:(id *)arg2;
- (BOOL)combineSequentialVisitsWithError:(id *)arg1;
- (id)connectedComponentForLoiMO:(id)arg1 encounteredIdentifiers:(id)arg2 error:(id *)arg3;
- (BOOL)consolidateVisitsToLoisWithKnownPlaceTypesWithError:(id *)arg1;
- (id)dedupableLOIsNearLocation:(id)arg1 mapItem:(id)arg2 error:(id *)arg3;
- (BOOL)dedupeLOIsWithError:(id *)arg1;
- (id)fetchClosestUnconcreteLocationOfInterestMOToLocation:(id)arg1 withinDistance:(double)arg2 distanceCalculator:(id)arg3 error:(id *)arg4;
- (id)fetchLearnedLocationOfInterestVisitMOForIdentifier:(id)arg1 error:(id *)arg2;
- (id)fetchLearnedPlaceMOforMapItemIdentifier:(id)arg1 error:(id *)arg2;
- (id)fetchLocationOfInterestMOforMapItemIdentifier:(id)arg1 error:(id *)arg2;
- (id)fetchNearbyLocationOfInterestMOsAroundLocation:(id)arg1 withinDistance:(double)arg2 error:(id *)arg3;
- (id)fetchOverlappingUnconcreteLocationOfInterestMOsForLOIMO:(id)arg1 distanceCalculator:(id)arg2 unusableIdentifiers:(id)arg3 error:(id *)arg4;
- (id)fetchRevGeoLearnedPlaceInVicinityOfLocation:(id)arg1 error:(id *)arg2;
- (id)fetchTransitionMOsEndingAtVisitIdentifier:(id)arg1 error:(id *)arg2;
- (id)fetchTransitionMOsOriginatingFromVisitIdentifier:(id)arg1 error:(id *)arg2;
- (id)filteredVisitMOs:(id)arg1 referenceLocation:(id)arg2 error:(id *)arg3;
- (BOOL)fixUnconcreteLOIs:(id *)arg1;
- (id)init;
- (id)initWithDefaultsManager:(id)arg1 distanceCalculator:(id)arg2 learnedPlaceParameters:(id)arg3 metrics:(id)arg4 persistenceManager:(id)arg5 relabelerParameters:(id)arg6 reverseGeocodeProvider:(id)arg7;
- (id)initWithDistanceCalculator:(id)arg1 learnedPlaceParameters:(id)arg2 locationShifter:(id)arg3 metrics:(id)arg4 persistenceManager:(id)arg5 relabelerParameters:(id)arg6 relabelerPersisterParameters:(id)arg7 reverseGeocodeProvider:(id)arg8;
- (BOOL)iterativelyCollapseOverlappingRevGeoLOIsWithError:(id *)arg1;
- (id)learnedPlaceForVisit:(id)arg1 creationDate:(id)arg2 expirationDate:(id)arg3 context:(id)arg4 error:(id *)arg5;
- (void)logLocalStoreWithReason:(id)arg1;
- (id)loiToMoveToFromConnectedComponent:(id)arg1;
- (BOOL)moveVisitMOs:(id)arg1 toLOIMO:(id)arg2 error:(id *)arg3;
- (BOOL)performBlock:(CDUnknownBlockType)arg1 error:(id *)arg2;
- (BOOL)resnapVisitsWithError:(id *)arg1;
- (BOOL)restoreToOldCandidate:(id)arg1 error:(id *)arg2;
- (BOOL)restoreVisit:(id)arg1 transitions:(id)arg2 toOldCandidate:(id)arg3 error:(id *)arg4;
- (id)rollLOIIdentifier:(id)arg1 context:(id)arg2 error:(id *)arg3;
- (id)rollUUIDGivenUUID:(id)arg1;
- (BOOL)saveWithError:(id *)arg1;
- (double)scoreLOIMO:(id)arg1;
- (double)scoreVisitMO:(id)arg1;
- (BOOL)unassociateOldCandidate:(id)arg1 error:(id *)arg2;
- (BOOL)unconcreteLOIMO:(id)arg1;
- (BOOL)untrustedVisitMO:(id)arg1;
- (BOOL)useRelabeledInferredMapItem:(id)arg1 oldCandidate:(id)arg2 associate:(BOOL)arg3 error:(id *)arg4;
- (BOOL)uuidConflicts:(id)arg1 context:(id)arg2 error:(id *)arg3;

@end

