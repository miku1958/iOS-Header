//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSCEOwnerFormulaMap : NSObject
{
    struct vector<std::__1::pair<TSUCellCoord, TSCEFormula>, std::__1::allocator<std::__1::pair<TSUCellCoord, TSCEFormula>>> _formulas;
    vector_38b190b0 _nonFormulaCells;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addFormula:(struct TSCEFormula *)arg1 atCellCoordinate:(struct TSUCellCoord)arg2;
- (unsigned long long)count;
- (id)description;
- (struct TSCEFormula *)formulaAtIndex:(unsigned long long)arg1 outCellCoordinate:(struct TSUCellCoord *)arg2;
- (id)initWithArchive:(const struct OwnerFormulaMapArchive *)arg1;
- (void)saveToArchive:(struct OwnerFormulaMapArchive *)arg1 archiver:(id)arg2;

@end

