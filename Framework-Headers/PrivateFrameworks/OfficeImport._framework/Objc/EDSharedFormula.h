//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/EDFormula.h>

@class EDReference;

__attribute__((visibility("hidden")))
@interface EDSharedFormula : EDFormula
{
    BOOL _forceNonBaseFormula;
    int _rowBaseOrOffset;
    int _columnBaseOrOffset;
    unsigned long long _baseFormulaIndex;
    EDReference *_baseFormulaRange;
}

@property (nonatomic) unsigned long long baseFormulaIndex; // @synthesize baseFormulaIndex=_baseFormulaIndex;
@property (readonly, nonatomic) EDReference *baseFormulaRange; // @synthesize baseFormulaRange=_baseFormulaRange;
@property (nonatomic) int columnBaseOrOffset; // @synthesize columnBaseOrOffset=_columnBaseOrOffset;
@property (nonatomic) BOOL forceNonBaseFormula; // @synthesize forceNonBaseFormula=_forceNonBaseFormula;
@property (nonatomic) int rowBaseOrOffset; // @synthesize rowBaseOrOffset=_rowBaseOrOffset;

- (void).cxx_destruct;
- (void)archiveByAppendingToMutableData:(struct __CFData *)arg1;
- (id)baseFormulaWithRowBlocks:(id)arg1;
- (BOOL)convertTokensToShared;
- (id)description;
- (id)init;
- (id)initWithFormula:(id)arg1;
- (BOOL)isBaseFormula;
- (BOOL)isSharedFormula;
- (void)unarchiveFromData:(struct __CFData *)arg1 offset:(unsigned long long *)arg2;
- (void)updateBaseFormulaRangeWithRow:(int)arg1 column:(int)arg2;
- (id)warningWithRowBlocks:(id)arg1;

@end

