//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSTTableDataObject.h>

__attribute__((visibility("hidden")))
@interface TSTTableDataFormula : TSTTableDataObject
{
    struct TSCEFormula *_formula;
}

@property (readonly, nonatomic) struct TSCEFormula *formula; // @synthesize formula=_formula;

- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initObjectWithFormula:(const struct TSCEFormula *)arg1 refCount:(unsigned int)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)setFormula:(const struct TSCEFormula *)arg1;

@end

