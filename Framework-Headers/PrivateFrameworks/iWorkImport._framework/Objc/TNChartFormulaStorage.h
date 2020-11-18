//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>
#import <iWorkImport/NSMutableCopying-Protocol.h>

__attribute__((visibility("hidden")))
@interface TNChartFormulaStorage : NSObject <NSCopying, NSMutableCopying>
{
    struct __CFDictionary *mStorage;
    int mDirection;
    unsigned long long mCachedNumberOfGroups;
    BOOL mCachedNumberOfGroupsValid;
}

+ (vector_2bba1c52)persistentFormulaTypes;
- (id)areaFormulaWithCalcEngine:(id)arg1 inOwner:(const UUIDData_5fbc143e *)arg2;
- (unsigned long long)categoryLabelFormulaType;
- (void)clearCachesForCalculationEngine:(id)arg1;
- (id)copyByRewriting:(BOOL)arg1 withCalcEngine:(id)arg2 andHostUID:(const UUIDData_5fbc143e *)arg3;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)count;
- (BOOL)dataFormulaAreRegularForSeriesInsertionWithCalcEngine:(id)arg1 inOwner:(const UUIDData_5fbc143e *)arg2;
- (void)dealloc;
- (id)description;
- (int)direction;
- (id)formulaForID:(CDStruct_ed6d627d)arg1;
- (id)formulaListForType:(unsigned long long)arg1;
- (id)formulaTypeEnumerator;
- (BOOL)formulasOfType:(unsigned long long)arg1 areAllStaticWithCalcEngine:(id)arg2 inEntity:(const UUIDData_5fbc143e *)arg3;
- (id)init;
- (id)initWithArchive:(const struct ChartMediatorFormulaStorage *)arg1 unarchiver:(id)arg2;
- (id)initWithChartFormulaStorage:(id)arg1;
- (id)initWithDirection:(int)arg1;
- (BOOL)isEqualToFormulaStorage:(id)arg1;
- (BOOL)labelFormulasAreAllStaticWithCalcEngine:(id)arg1 inEntity:(const UUIDData_5fbc143e *)arg2;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)numberOfDataFormulas;
- (unsigned long long)numberOfGroupsWithCalcEngine:(id)arg1 inEntity:(const UUIDData_5fbc143e *)arg2;
- (unsigned long long)numberOfSeries;
- (unsigned long long)p_calculateNumberOfGroupsWithCalcEngine:(id)arg1 inEntity:(const UUIDData_5fbc143e *)arg2;
- (struct __CFDictionary *)p_cfDictionary;
- (void)saveToArchive:(struct ChartMediatorFormulaStorage *)arg1 archiver:(id)arg2;
- (unsigned long long)seriesLabelFormulaType;

@end
