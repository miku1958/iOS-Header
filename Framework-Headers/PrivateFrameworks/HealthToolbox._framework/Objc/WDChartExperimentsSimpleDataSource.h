//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKGraphSeriesDataSource.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface WDChartExperimentsSimpleDataSource : HKGraphSeriesDataSource
{
    NSArray *_chartPoints;
}

@property (strong, nonatomic) NSArray *chartPoints; // @synthesize chartPoints=_chartPoints;

- (void).cxx_destruct;
- (id)_computeSineData:(double)arg1;
- (id)_dosagesToChartPoints:(id)arg1 unit:(id)arg2;
- (id)cachedBlockForPath:(CDStruct_912cb5d2)arg1 context:(id)arg2;
- (id)initWithDosages:(id)arg1 unit:(id)arg2;
- (id)initWithSineData:(double)arg1;

@end
