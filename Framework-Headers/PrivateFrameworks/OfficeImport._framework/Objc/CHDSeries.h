//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <OfficeImport/EDKeyedObject-Protocol.h>

@class CHDChart, CHDChartType, CHDData, CHDDataLabel, CHDDataValue, CHDErrorBar, CHDFormula, EDCollection, EDKeyedCollection, NSString, OADGraphicProperties;

__attribute__((visibility("hidden")))
@interface CHDSeries : NSObject <EDKeyedObject>
{
    CHDChart *mChart;
    CHDChartType *mChartType;
    unsigned long long mOrder;
    unsigned long long mStyleIndex;
    CHDFormula *mName;
    CHDDataValue *mLastCachedName;
    CHDData *mValueData;
    CHDData *mCategoryData;
    EDKeyedCollection *mDataValuePropertiesCollection;
    EDCollection *mTrendlinesCollection;
    CHDErrorBar *mErrorBarX;
    CHDErrorBar *mErrorBarY;
    CHDDataLabel *mDefaultDataLabel;
    OADGraphicProperties *mGraphicProperties;
    BOOL mDateTimeFormattingFlag;
    BOOL mHiddenFlag;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)seriesWithChart:(id)arg1;
- (void).cxx_destruct;
- (unsigned long long)categoryCount;
- (id)categoryData;
- (id)chart;
- (id)chartType;
- (void)clearBackPointers;
- (id)dataValuePropertiesCollection;
- (id)defaultDataLabel;
- (id)defaultSeriesNameForIndex:(unsigned long long)arg1;
- (id)errorBarXAxis;
- (id)errorBarYAxis;
- (id)graphicProperties;
- (BOOL)hasErrorBars;
- (BOOL)hasTrendlines;
- (id)initWithChart:(id)arg1;
- (BOOL)isDateTimeFormattingFlag;
- (BOOL)isEmpty;
- (BOOL)isHidden;
- (long long)key;
- (id)lastCachedName;
- (id)name;
- (unsigned long long)order;
- (void)setCategoryData:(id)arg1;
- (void)setChartType:(id)arg1;
- (void)setDataValuePropertiesCollection:(id)arg1;
- (void)setDateTimeFormattingFlag:(BOOL)arg1;
- (void)setDefaultDataLabel:(id)arg1;
- (void)setErrorBar:(id)arg1;
- (void)setErrorBarXAxis:(id)arg1;
- (void)setErrorBarYAxis:(id)arg1;
- (void)setGraphicProperties:(id)arg1;
- (void)setHiddenFlag:(BOOL)arg1;
- (void)setLastCachedName:(id)arg1;
- (void)setName:(id)arg1;
- (void)setOrder:(unsigned long long)arg1;
- (void)setStyleIndex:(unsigned long long)arg1;
- (void)setTrendlineCollection:(id)arg1;
- (void)setValueData:(id)arg1;
- (id)shallowCopy;
- (unsigned long long)styleIndex;
- (id)trendlineCollection;
- (id)valueData;

@end

