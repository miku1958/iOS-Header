//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>
#import <iWorkImport/TSCHUnretainedParent-Protocol.h>

@class TSCHChartInfo, TSUIntToIntDictionary;
@protocol TSCHNotifyOnModify;

__attribute__((visibility("hidden")))
@interface TSCHChartMediator : NSObject <TSCHUnretainedParent, NSCopying>
{
    id<TSCHNotifyOnModify> mObjectToNotify;
    TSCHChartInfo *mChartInfo;
    TSUIntToIntDictionary *mRemoteSeriesIndexForGridSeriesIndex;
    TSUIntToIntDictionary *mGridSeriesIndexForRemoteSeriesIndex;
}

@property (weak, nonatomic) TSCHChartInfo *chartInfo; // @synthesize chartInfo=mChartInfo;
@property (readonly, nonatomic) int direction;
@property (readonly, nonatomic) BOOL isPhantom;
@property (weak, nonatomic) id<TSCHNotifyOnModify> objectToNotify; // @synthesize objectToNotify=mObjectToNotify;

+ (id)propertiesThatInvalidateMediator;
- (void).cxx_destruct;
- (id)categoryLabelFormulas;
- (void)clearParent;
- (id)commandSetCategoryName:(id)arg1 forCategoryIndex:(unsigned long long)arg2;
- (id)commandSetSeriesName:(id)arg1 forSeriesIndex:(unsigned long long)arg2;
- (id)commandToChangeCategoryLabelFormulas:(id)arg1;
- (id)commandToSetChartGridDirection:(int)arg1 documentRoot:(id)arg2;
- (id)commandToSetErrorBarCustomFormula:(id)arg1 seriesIndex:(unsigned long long)arg2 dataType:(int)arg3;
- (id)commandToSetNewSeriesIndex:(unsigned long long)arg1 forSeriesIndex:(unsigned long long)arg2;
- (id)commandToSetSeriesDataFormula:(id)arg1 seriesDimension:(id)arg2;
- (id)commandToSetSeriesNameFormula:(id)arg1 seriesIndex:(unsigned long long)arg2;
- (id)copyWithContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dataFormatterForAxis:(id)arg1 documentRoot:(id)arg2;
- (id)dataFormatterForSeries:(id)arg1 index:(unsigned long long)arg2 axisType:(int)arg3 documentRoot:(id)arg4;
- (void)dealloc;
- (id)errorBarCustomFormulaForSeriesIndex:(unsigned long long)arg1 dataType:(int)arg2;
- (id)init;
- (id)initWithChartInfo:(id)arg1;
- (void)invalidateAndSynchronizeMediator;
- (BOOL)isEditing;
- (void)loadFromArchive:(const struct ChartMediatorArchive *)arg1;
- (id)p_errorBarDataForSeries:(unsigned long long)arg1 withSpec:(CDStruct_188655c5)arg2 updateType:(int)arg3;
- (unsigned long long)p_gridSeriesIndexForRemoteSeriesIndex:(unsigned long long)arg1;
- (unsigned long long)p_remoteSeriesIndexForGridSeriesIndex:(unsigned long long)arg1;
- (void)pauseCalculationEngine;
- (BOOL)preferSeriesToValues;
- (void)resumeCalculationEngine;
- (void)saveToArchive:(struct ChartMediatorArchive *)arg1;
- (id)seriesDataFormulaForSeriesDimension:(id)arg1;
- (id)seriesNameFormulaForSeriesIndex:(unsigned long long)arg1;
- (void)updateGridWithSpec:(CDStruct_188655c5)arg1;
- (void)willModify;

@end
