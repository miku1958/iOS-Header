//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSCharts/NSCopying-Protocol.h>

@class TSCH3DScene, TSCHChartInfo, TSCHChartSeriesType, TSCHChartType;

@interface TSCH3DChartSceneInfo : NSObject <NSCopying>
{
    TSCH3DScene *_scene;
    TSCHChartInfo *_chartInfo;
    TSCHChartType *_chartType;
    TSCHChartSeriesType *_seriesType;
    CDStruct_b1c75024 _layoutSettings;
}

@property (readonly, strong, nonatomic) TSCHChartInfo *chartInfo; // @synthesize chartInfo=_chartInfo;
@property (readonly, strong, nonatomic) TSCHChartType *chartType; // @synthesize chartType=_chartType;
@property (readonly, nonatomic) CDStruct_b1c75024 layoutSettings; // @synthesize layoutSettings=_layoutSettings;
@property (readonly, strong, nonatomic) TSCH3DScene *scene; // @synthesize scene=_scene;
@property (readonly, strong, nonatomic) TSCHChartSeriesType *seriesType; // @synthesize seriesType=_seriesType;

+ (id)infoWithScene:(id)arg1 chartInfo:(id)arg2 chartType:(id)arg3 seriesType:(id)arg4 layoutSettings:(CDStruct_b1c75024)arg5;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithScene:(id)arg1 chartInfo:(id)arg2 chartType:(id)arg3 seriesType:(id)arg4 layoutSettings:(CDStruct_b1c75024)arg5;

@end

