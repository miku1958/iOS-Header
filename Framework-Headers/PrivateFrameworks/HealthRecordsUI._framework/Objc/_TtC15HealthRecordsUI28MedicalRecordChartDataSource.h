//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthUI/HKGraphSeriesDataSource.h>

@class MISSING_TYPE, NSString;

@interface _TtC15HealthRecordsUI28MedicalRecordChartDataSource : HKGraphSeriesDataSource
{
    MISSING_TYPE *type;
    MISSING_TYPE *concept;
    MISSING_TYPE *dataTransformer;
    MISSING_TYPE *chartableCodedQuantitySets;
    MISSING_TYPE *cachedBucketedSets;
    MISSING_TYPE *collapseIntoRangePoints;
    MISSING_TYPE *unit;
    MISSING_TYPE *preferredColors;
    MISSING_TYPE *chartableXRange;
    MISSING_TYPE *chartableYRange;
}

@property (nonatomic, readonly) NSString *displayName;

- (void).cxx_destruct;
- (id)cachedBlockForPath:(CDStruct_912cb5d2)arg1 context:(id)arg2;
- (id)chartDisplayTypeWithVerticalAxis:(id)arg1;
- (id)init;
- (id)initWithConcept:(id)arg1 dataTransformer:(id)arg2 unit:(id)arg3 preferredColors:(id)arg4 collapseIntoRangePoints:(BOOL)arg5 type:(long long)arg6;

@end

