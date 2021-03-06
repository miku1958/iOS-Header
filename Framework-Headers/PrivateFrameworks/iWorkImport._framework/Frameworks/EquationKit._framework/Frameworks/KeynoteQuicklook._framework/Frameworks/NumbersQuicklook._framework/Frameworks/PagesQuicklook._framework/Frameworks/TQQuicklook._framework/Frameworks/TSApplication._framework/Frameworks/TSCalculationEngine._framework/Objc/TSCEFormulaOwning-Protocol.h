//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TSCalculationEngine/NSObject-Protocol.h>

@class TSCECalculationEngine;
@protocol TSCEReferenceResolving;

@protocol TSCEFormulaOwning <NSObject>
- (long long)evaluationMode;
- (void)invalidateForCalcEngine:(TSCECalculationEngine *)arg1;
- (id<TSCEReferenceResolving>)linkedResolver;
- (unsigned short)ownerKind;
- (UUIDData_5fbc143e)ownerUID;
- (void)writeResultsForCalcEngine:(TSCECalculationEngine *)arg1;

@optional
- (struct TSCERecalculationState)evaluateFormulaAt:(struct TSUCellCoord)arg1 withCalcEngine:(TSCECalculationEngine *)arg2 recalcOptions:(struct TSCERecalculationState)arg3;
- (struct TSCERecalculationState)multiEvaluateFormulasAt:(const struct TSCECellCoordSet *)arg1 withCalcEngine:(TSCECalculationEngine *)arg2 recalcOptions:(struct TSCERecalculationState)arg3;
@end

