//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSCharts/TSCH3DSceneObject.h>

#import <TSCharts/TSCH3DSceneObjectDelegator-Protocol.h>

@interface TSCH3DChartSelectedElementHighlightSceneObject : TSCH3DSceneObject <TSCH3DSceneObjectDelegator>
{
}

+ (id)propertiesForScene:(id)arg1;
+ (void)setHighlightColor:(id)arg1 scene:(id)arg2;
+ (void)setSelectedSeriesIndex:(unsigned long long)arg1 scene:(id)arg2;
- (void)getBounds:(id)arg1;
- (id)makeDelegateWithScene:(id)arg1;
- (id)makeDelegateWithSceneObject:(id)arg1 scene:(id)arg2;
- (id)p_calculateEdgeVerticesForPipeline:(id)arg1;
- (void)render:(id)arg1;

@end

