//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCH3DValueEnumerator.h>

@class TSCHChartAxis;

__attribute__((visibility("hidden")))
@interface TSCH3DAxisGridEnumerator : TSCH3DValueEnumerator
{
    TSCHChartAxis *mAxis;
}

@property (readonly, nonatomic) TSCHChartAxis *axis; // @synthesize axis=mAxis;
@property (readonly, nonatomic) int type;

+ (id)enumeratorWithAxis:(id)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)initWithAxis:(id)arg1;
- (struct AxisGridLocation)position;
- (void)update;

@end

