//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CHBSeries : NSObject
{
}

+ (Class)chdSeriesClassWithState:(id)arg1;
+ (id)chdSeriesWithState:(id)arg1;
+ (id)readFrom:(struct XlChartDataSeries *)arg1 state:(id)arg2;
+ (void)readXlChartSeriesFormat:(struct XlChartDataSeries *)arg1 chdSeries:(id)arg2 state:(id)arg3;
+ (void)resolveSeriesStyle:(id)arg1 state:(id)arg2;

@end
