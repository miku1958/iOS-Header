//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/GQDGraphic.h>

@class GQDChartLegend, GQDChartModel, GQDSStyle;

__attribute__((visibility("hidden")))
@interface GQDChart : GQDGraphic
{
    GQDChartLegend *mLegend;
    BOOL mIsLegendRetained;
    GQDChartModel *mModel;
    GQDSStyle *mStyle;
    long long mType;
}

+ (const struct StateSpec *)stateForReading;
- (void)dealloc;
- (id)graphicStyle;
- (id)legend;
- (id)model;
- (void)setLegend:(id)arg1;
- (id)style;
- (long long)type;

@end

