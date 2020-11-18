//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSTCellSpec.h>

#import <iWorkImport/TSCEFormulaReturning-Protocol.h>

@class NSString, TSTStockDetails, TSULocale;

__attribute__((visibility("hidden")))
@interface TSTCellFormulaSpec : TSTCellSpec <TSCEFormulaReturning>
{
    struct TSCEFormula *_formula;
    TSULocale *_locale;
    unsigned char _categoryAggregateType;
    int _interactionType;
    TSTStockDetails *_stockDetails;
}

@property (readonly, nonatomic) unsigned char categoryAggregateType; // @synthesize categoryAggregateType=_categoryAggregateType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) struct TSCEFormula *formula; // @synthesize formula=_formula;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) TSTStockDetails *stockDetails; // @synthesize stockDetails=_stockDetails;
@property (readonly) Class superclass;

+ (id)instanceWithArchive:(const struct CellSpecArchive *)arg1 unarchiver:(id)arg2;
- (void).cxx_destruct;
- (id)asFormulaSpec;
- (id)cellSpecReplacingFormula:(struct TSCEFormula *)arg1 locale:(id)arg2;
- (void)dealloc;
- (BOOL)hasTSCEFormula;
- (id)initWithArchive:(const struct CellSpecArchive *)arg1 unarchiver:(id)arg2;
- (id)initWithFormula:(struct TSCEFormula *)arg1 fromTableModel:(id)arg2 fromCellID:(struct TSUCellCoord)arg3;
- (id)initWithFormula:(struct TSCEFormula *)arg1 locale:(id)arg2;
- (int)interactionType;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEquivalent:(id)arg1;
- (void)p_computeinteractionType:(id)arg1;
- (BOOL)p_mightBeEqual:(id)arg1;
- (void)saveToArchive:(struct CellSpecArchive *)arg1 archiver:(id)arg2;

@end
