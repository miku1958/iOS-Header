//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDStatisticsBuilder_DEPRECATED.h>

@class HDCumulativeCollectionCalculator_DEPRECATED;

@interface HDCumulativeStatisticsBuilder_DEPRECATED : HDStatisticsBuilder_DEPRECATED
{
    HDCumulativeCollectionCalculator_DEPRECATED *_collectionCalculator;
}

- (void).cxx_destruct;
- (BOOL)_setupStatistics:(id)arg1 withCalculator:(id)arg2;
- (id)_statisticsFromCalculator:(id)arg1 samples:(id)arg2;
- (id)_updateStatisticsCollection:(id)arg1 withSamples:(id)arg2 error:(id *)arg3;
- (id)collectionCalculatorWithStatisticsCollection:(id)arg1;
- (id)collectionCalculatorWithTimePeriod:(id)arg1;

@end

