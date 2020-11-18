//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, TSCHLegendCellMetrics, TSCHLegendViewCache, TSDShadow, TSDStroke, TSWPParagraphStyle;

__attribute__((visibility("hidden")))
@interface TSCHLegendModelCache : NSObject
{
    TSCHLegendCellMetrics *mMetrics;
    BOOL mLegendOn;
    NSArray *mCells;
    unsigned long long mCellCount;
    TSWPParagraphStyle *mParagraphStyle;
    TSDStroke *mStroke;
    TSDShadow *mShadow;
    id mFill;
    double mOpacity;
    double mHorizontalCellSpacing;
    double mVerticalCellSpacing;
    struct CGSize mLargestCellSize;
    double mEffectiveStrokeWidth;
    BOOL mReverseSingleColumnLegendOrder;
    double mLastLegendWidth;
    TSCHLegendViewCache *mLastLegendViewCache;
    BOOL mLegendIsRTL;
    double mSymbolGap;
}

@property (readonly) unsigned long long cellCount; // @synthesize cellCount=mCellCount;
@property (readonly) NSArray *cells; // @synthesize cells=mCells;
@property (readonly) double effectiveStrokeWidth; // @synthesize effectiveStrokeWidth=mEffectiveStrokeWidth;
@property (readonly) id fill; // @synthesize fill=mFill;
@property (readonly) double horizontalCellSpacing; // @synthesize horizontalCellSpacing=mHorizontalCellSpacing;
@property (readonly) struct CGSize largestCellSize; // @synthesize largestCellSize=mLargestCellSize;
@property (readonly) BOOL legendIsRTL; // @synthesize legendIsRTL=mLegendIsRTL;
@property (readonly) BOOL legendOn; // @synthesize legendOn=mLegendOn;
@property (readonly) double opacity; // @synthesize opacity=mOpacity;
@property (readonly) TSWPParagraphStyle *paragraphStyle; // @synthesize paragraphStyle=mParagraphStyle;
@property (readonly) BOOL reverseSingleColumnLegendOrder; // @synthesize reverseSingleColumnLegendOrder=mReverseSingleColumnLegendOrder;
@property (readonly) TSDShadow *shadow; // @synthesize shadow=mShadow;
@property (readonly) TSDStroke *stroke; // @synthesize stroke=mStroke;
@property (readonly) double symbolGap; // @synthesize symbolGap=mSymbolGap;
@property (readonly) double verticalCellSpacing; // @synthesize verticalCellSpacing=mVerticalCellSpacing;

- (void).cxx_destruct;
- (id)cellForSeriesIndex:(unsigned long long)arg1 cellType:(int)arg2;
- (void)dealloc;
- (id)initWithChartModel:(id)arg1 textEditingSelectionPair:(id)arg2;
- (id)viewCacheForWidth:(double)arg1;

@end

