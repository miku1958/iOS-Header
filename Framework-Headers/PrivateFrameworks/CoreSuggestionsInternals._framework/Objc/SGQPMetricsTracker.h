//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PETDistributionEventTracker, PETGoalConversionEventTracker, PETScalarEventTracker, SGQPMutableUserSession;

@interface SGQPMetricsTracker : NSObject
{
    PETGoalConversionEventTracker *_predictionsTracker;
    PETScalarEventTracker *_predictionsAbandonmentTracker;
    PETGoalConversionEventTracker *_resultsTracker;
    PETGoalConversionEventTracker *_predictionTracker;
    PETGoalConversionEventTracker *_phrasePredictionTracker;
    PETGoalConversionEventTracker *_predictionResultsTracker;
    PETGoalConversionEventTracker *_phrasePredictionResultsTracker;
    PETDistributionEventTracker *_predictionsCountTracker;
    PETDistributionEventTracker *_predictionsMessagesCountTracker;
    SGQPMutableUserSession *_currentSession;
}

@property (strong) SGQPMutableUserSession *currentSession; // @synthesize currentSession=_currentSession;

+ (id)emptyMetricsTracker;
+ (id)metricsTrackerWithAsset:(id)arg1;
+ (id)metricsTrackerWithAsset:(id)arg1 existingSession:(id)arg2;
- (void).cxx_destruct;
- (void)generatedPredictions:(id)arg1 fromMessages:(id)arg2 conversation:(id)arg3 language:(id)arg4 abGroup:(id)arg5 totalPredictionsGenerated:(unsigned long long)arg6;
- (id)init;
- (id)initWithLanguages:(id)arg1 abGroups:(id)arg2 phraseIdRange:(struct _NSRange)arg3 existingSession:(id)arg4;
- (void)predictionEngaged:(id)arg1;
- (void)resultEngaged;
- (void)searchPerformedWithQuery:(id)arg1;
- (void)setLoggingOutletForAllTrackers:(id)arg1;
- (void)showedPredictionsWithIdentifiers:(id)arg1;

@end

