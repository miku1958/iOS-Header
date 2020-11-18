//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface TSUHTMLTable : NSObject
{
    NSMutableDictionary *_columnAttributes;
    NSMutableDictionary *_rowClasses;
    NSMutableDictionary *_cellAttributes;
    NSMutableArray *_columnHeaders;
    NSMutableArray *_rows;
    unsigned long long _rowClassStride;
}

@property (readonly, nonatomic) unsigned long long count;
@property (readonly, nonatomic) unsigned long long lastRowIndex;
@property (nonatomic) unsigned long long rowClassStride; // @synthesize rowClassStride=_rowClassStride;

+ (id)_attributesStringFromAttributes:(id)arg1;
+ (id)_keyForCell:(unsigned long long)arg1:(unsigned long long)arg2;
+ (id)htmlTable;
- (void)addRowWithCellMarkup:(id)arg1;
- (void)addRowWithCellText:(id)arg1;
- (void)dealloc;
- (void)deleteColumnWithTitle:(id)arg1;
- (void)enumerateRowsUsingBlock:(CDUnknownBlockType)arg1;
- (unsigned long long)indexOfColumnWithTitle:(id)arg1;
- (id)init;
- (id)markup;
- (void)setCellAttributes:(id)arg1 rowIndex:(unsigned long long)arg2 columnIndex:(unsigned long long)arg3;
- (void)setCellMarkup:(id)arg1 atRowIndex:(unsigned long long)arg2 columnIndex:(unsigned long long)arg3;
- (void)setClass:(id)arg1 ofColumnIndex:(unsigned long long)arg2;
- (void)setColumnClasses:(id)arg1;
- (void)setColumnHeaders:(id)arg1;
- (void)setRowClass:(id)arg1 atRowIndex:(unsigned long long)arg2;

@end

