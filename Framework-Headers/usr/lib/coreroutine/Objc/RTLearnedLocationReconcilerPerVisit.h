//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, RTDefaultsManager, RTDistanceCalculator, RTPersistenceManager;
@protocol OS_dispatch_queue;

@interface RTLearnedLocationReconcilerPerVisit : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    RTPersistenceManager *_persistenceManager;
    RTDefaultsManager *_defaultsManager;
    RTDistanceCalculator *_distanceCalculator;
    NSArray *_reconciliationModels;
}

@property (strong, nonatomic) RTDefaultsManager *defaultsManager; // @synthesize defaultsManager=_defaultsManager;
@property (strong, nonatomic) RTDistanceCalculator *distanceCalculator; // @synthesize distanceCalculator=_distanceCalculator;
@property (strong, nonatomic) RTPersistenceManager *persistenceManager; // @synthesize persistenceManager=_persistenceManager;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (strong) NSArray *reconciliationModels; // @synthesize reconciliationModels=_reconciliationModels;

+ (void)submitMetricsOnReconciledGraphDensity:(id)arg1 algorithm:(unsigned long long)arg2 persistenceManager:(id)arg3 managedObjectContext:(id)arg4;
- (void).cxx_destruct;
- (id)_currentModel;
- (id)_findWinner:(id)arg1 currentVisit:(id)arg2 model:(id)arg3 modelContext:(id)arg4;
- (void)_performReconciliationWithHandler:(CDUnknownBlockType)arg1;
- (void)_reconcileVisits:(id)arg1 context:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_reconcileVisits:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_reconcileVisitsWithContext:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)_visitFollowingVisit:(id)arg1 visits:(id)arg2;
- (id)_visitsWithContext:(id)arg1 predicate:(id)arg2 sortDescriptors:(id)arg3 error:(id *)arg4;
- (void)collapseReconciledVisitsToLocationsOfInterest:(id)arg1 context:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)collapseVisits:(id)arg1 context:(id)arg2;
- (id)init;
- (id)initWithPersistenceManager:(id)arg1 defaultsManager:(id)arg2;
- (id)initWithPersistenceManager:(id)arg1 defaultsManager:(id)arg2 distanceCalculator:(id)arg3 reconciliationModels:(id)arg4;
- (void)performReconciliationWithHandler:(CDUnknownBlockType)arg1;
- (void)reconcileVisits:(id)arg1 context:(id)arg2 handler:(CDUnknownBlockType)arg3;
- (void)reconcileVisits:(id)arg1 handler:(CDUnknownBlockType)arg2;

@end

