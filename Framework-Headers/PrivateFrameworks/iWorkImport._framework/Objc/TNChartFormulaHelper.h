//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TNChartMediator;

__attribute__((visibility("hidden")))
@interface TNChartFormulaHelper : NSObject
{
    TNChartMediator *mChartMediator;
    BOOL mCreateSpanningReferences;
}

@property (readonly, nonatomic) TNChartMediator *chartMediator; // @synthesize chartMediator=mChartMediator;
@property (nonatomic) BOOL createSpanningReferences; // @synthesize createSpanningReferences=mCreateSpanningReferences;

- (id)chartFormulaByAppendingRangeReference:(struct TSCERangeRef)arg1 toFormula:(id)arg2 andLocale:(id)arg3;
- (void)dealloc;
- (id)formulaStorageForChartGridDirection:(int)arg1;
- (id)initWithMediator:(id)arg1;
- (id)initWithMediator:(id)arg1 createSpanningReferences:(BOOL)arg2;
- (void)p_addFormulasOfType:(unsigned long long)arg1 rangeList:(id)arg2 byRow:(BOOL)arg3 toFormulaMap:(id)arg4;
- (void)p_addSeriesForRangeList:(id)arg1 rowLabelRangeList:(id)arg2 columnLabelRangeList:(id)arg3 rowLabels:(id)arg4 columnLabels:(id)arg5 toFormulaMap:(id)arg6;
- (void)p_addSeriesForRangeList:(id)arg1 rowLabelRangeList:(id)arg2 columnLabelRangeList:(id)arg3 toFormulaMap:(id)arg4;
- (void)p_addSeriesForTableModel:(id)arg1 seriesRange:(struct TSCERangeCoordinate)arg2 rowLabelRange:(struct TSCERangeCoordinate)arg3 columnLabelRange:(struct TSCERangeCoordinate)arg4 toFormulaMap:(id)arg5;
- (void)p_addStringFormulasOfType:(unsigned long long)arg1 rangeList:(id)arg2 byRow:(BOOL)arg3 labels:(id)arg4 toFormulaMap:(id)arg5;
- (BOOL)p_extendExistingSeriesWithSeriesRangeList:(id *)arg1 rowLabelRangeList:(id *)arg2 columnLabelRangeList:(id *)arg3 toFormulaMap:(id)arg4 withLocale:(id)arg5;
- (BOOL)p_hasOneValuePerSeries;
- (id)p_labelsOfType:(unsigned long long)arg1 formulaMap:(id)arg2;
- (id)p_rangeListsForFormula:(id)arg1 argumentIndexes:(id)arg2 byRow:(BOOL)arg3 resolveSpanning:(BOOL)arg4;
- (void)p_rangeListsForFormula:(id)arg1 argumentIndexes:(id)arg2 byRow:(BOOL)arg3 resolveSpanning:(BOOL)arg4 orderedListOfOwnerIDs:(id)arg5 ownerIDToRangeList:(id)arg6;
- (id)p_rangeListsForFormulas:(id)arg1 byRow:(BOOL)arg2 resolveSpanning:(BOOL)arg3;

@end
