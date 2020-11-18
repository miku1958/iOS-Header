//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TSCHChartAxis, TSCHChartSeries, TSCHChartValueAxis, TSDShadow, TSDStroke, TSWPParagraphStyle;

__attribute__((visibility("hidden")))
@interface TSCHBarSeriesModelCache : NSObject
{
    TSCHChartSeries *mSeries;
    TSCHChartValueAxis *mValueAxis;
    TSCHChartAxis *mGroupAxis;
    TSWPParagraphStyle *mParagraphStyle;
    unsigned long long mSeriesIndex;
    BOOL mValueLabelsOn;
    double mBarWidthRatio;
    double mBarGroupGapRatio;
    double mBarGapRatio;
    double mUnitSpaceIntercept;
    unsigned int mLabelPosition;
    TSDShadow *mShadow;
    TSDStroke *mStroke;
    id mFill;
    double mOpacity;
}

@property (readonly) double barGapRatio; // @synthesize barGapRatio=mBarGapRatio;
@property (readonly) double barGroupGapRatio; // @synthesize barGroupGapRatio=mBarGroupGapRatio;
@property (readonly) double barWidthRatio; // @synthesize barWidthRatio=mBarWidthRatio;
@property (readonly) id fill; // @synthesize fill=mFill;
@property (readonly) TSCHChartAxis *groupAxis; // @synthesize groupAxis=mGroupAxis;
@property (readonly) unsigned int labelPosition; // @synthesize labelPosition=mLabelPosition;
@property (readonly) double opacity; // @synthesize opacity=mOpacity;
@property (readonly) TSWPParagraphStyle *paragraphStyle; // @synthesize paragraphStyle=mParagraphStyle;
@property (readonly) TSCHChartSeries *series; // @synthesize series=mSeries;
@property (readonly) unsigned long long seriesIndex; // @synthesize seriesIndex=mSeriesIndex;
@property (readonly) TSDShadow *shadow; // @synthesize shadow=mShadow;
@property (readonly) TSDStroke *stroke; // @synthesize stroke=mStroke;
@property (readonly) double unitSpaceIntercept; // @synthesize unitSpaceIntercept=mUnitSpaceIntercept;
@property (readonly) TSCHChartValueAxis *valueAxis; // @synthesize valueAxis=mValueAxis;
@property (readonly) BOOL valueLabelsOn; // @synthesize valueLabelsOn=mValueLabelsOn;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithChartModel:(id)arg1 forSeries:(unsigned long long)arg2;

@end

