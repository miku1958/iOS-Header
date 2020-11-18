//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSCERefNamingProtocol-Protocol.h>

@class NSCharacterSet, NSString, TSCECalculationEngine;

__attribute__((visibility("hidden")))
@interface TSTRefNamer : NSObject <TSCERefNamingProtocol>
{
    TSCECalculationEngine *_calcEngine;
    NSCharacterSet *_whitespaceAndNewlineCharSet;
    NSCharacterSet *_nonWhitespaceAndNewlineCharSet;
}

@property (readonly, weak, nonatomic) TSCECalculationEngine *calcEngine; // @synthesize calcEngine=_calcEngine;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSCharacterSet *nonWhitespaceAndNewlineCharSet; // @synthesize nonWhitespaceAndNewlineCharSet=_nonWhitespaceAndNewlineCharSet;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSCharacterSet *whitespaceAndNewlineCharSet; // @synthesize whitespaceAndNewlineCharSet=_whitespaceAndNewlineCharSet;

- (void).cxx_destruct;
- (id)cellRangeName:(id)arg1 namingContext:(id)arg2;
- (id)cellRangeNameFromChromeRangeRef:(const RefTypeHolder_8c6da553 *)arg1 namingContext:(id)arg2;
- (id)createNameComponentWithChromeRangeRef:(const RefTypeHolder_8c6da553 *)arg1 rowOrColumnName:(id)arg2 isSticky:(BOOL)arg3 namingContext:(id)arg4;
- (id)initWithCalcEngine:(id)arg1;
- (id)nameForBaseRangeRef:(const RefTypeHolder_1140c985 *)arg1 namingContext:(id)arg2;
- (id)nameForChromeColumnIndex:(const struct TSUChromeColumnIndex *)arg1 inTable:(const UUIDData_5fbc143e *)arg2 useSymbolicNames:(BOOL)arg3;
- (id)nameForChromeRangeRef:(const RefTypeHolder_8c6da553 *)arg1 namingContext:(id)arg2;
- (id)nameForWrappedRangeRef:(id)arg1 namingContext:(id)arg2;
- (id)p_columnNameForBaseCellCoord:(const struct TSUModelCellCoord *)arg1 inTableModel:(id)arg2 cellRangeContainingName:(struct TSUModelCellRect *)arg3;
- (id)p_rowNameForBaseCellCoord:(const struct TSUModelCellCoord *)arg1 inTableModel:(id)arg2 cellRangeContainingName:(struct TSUModelCellRect *)arg3;
- (id)p_symbolicColumnNameForRefPair:(id)arg1 useTopLeft:(BOOL)arg2 isSticky:(BOOL)arg3 foundRange:(struct TSUModelCellRect *)arg4 inTableModel:(id)arg5 namingContext:(id)arg6;
- (id)p_symbolicRowNameForRefPair:(id)arg1 useTopLeft:(BOOL)arg2 isSticky:(BOOL)arg3 foundRange:(struct TSUModelCellRect *)arg4 inTableModel:(id)arg5 namingContext:(id)arg6;
- (id)stringForRangeRefPair:(id)arg1 namingContext:(id)arg2;
- (id)stringValueAtCellCoord:(const struct TSUModelCellCoord *)arg1 inTableModel:(id)arg2;

@end

