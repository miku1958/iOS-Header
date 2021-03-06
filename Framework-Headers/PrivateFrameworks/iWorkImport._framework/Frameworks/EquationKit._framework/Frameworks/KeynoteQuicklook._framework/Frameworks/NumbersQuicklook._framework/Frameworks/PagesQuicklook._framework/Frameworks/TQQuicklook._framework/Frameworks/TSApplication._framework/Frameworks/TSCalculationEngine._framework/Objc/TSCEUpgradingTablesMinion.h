//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <TSCalculationEngine/TSCEFormulaReplacing-Protocol.h>

@class NSString, TSCECalculationEngine, TSCEFormulasToSet;

@interface TSCEUpgradingTablesMinion : NSObject <TSCEFormulaReplacing>
{
    TSCEFormulasToSet *_formulasToSet;
}

@property (readonly, nonatomic) TSCECalculationEngine *calcEngine;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)flush;
- (id)initWithCalcEngine:(id)arg1;
- (void)markCellRefAsDirty:(const struct TSCECellRef *)arg1;
- (void)markRangeRefAsDirty:(const struct TSCERangeRef *)arg1;
- (void)removeAllFormulasFromOwner:(const UUIDData_5fbc143e *)arg1;
- (void)removeFormulaAt:(const struct TSUCellCoord *)arg1 inOwner:(const UUIDData_5fbc143e *)arg2;
- (void)removeFormulasAt:(const struct TSCECellRefSet *)arg1;
- (void)replaceFormula:(id)arg1 atCellCoord:(const struct TSUCellCoord *)arg2 inOwner:(const UUIDData_5fbc143e *)arg3;
- (void)replaceFormula:(id)arg1 atCellCoord:(const struct TSUCellCoord *)arg2 inOwner:(const UUIDData_5fbc143e *)arg3 replaceOptions:(struct TSCEReplaceFormulaOptions)arg4;
- (void)resetFormulaAt:(const struct TSCECellRef *)arg1;

@end

