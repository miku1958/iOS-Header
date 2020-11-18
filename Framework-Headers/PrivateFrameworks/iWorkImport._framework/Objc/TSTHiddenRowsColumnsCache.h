//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSTTableHiddenRowColumnProviding-Protocol.h>

@class NSIndexSet, NSMutableIndexSet, NSString, TSTHiddenStateIndexSet;

__attribute__((visibility("hidden")))
@interface TSTHiddenRowsColumnsCache : NSObject <TSTTableHiddenRowColumnProviding>
{
    TSTHiddenStateIndexSet *_rowsVisible;
    TSTHiddenStateIndexSet *_rowsUserVisible;
    NSMutableIndexSet *_rowsInvalid;
    unsigned long long _rowMarkIndex;
    TSTHiddenStateIndexSet *_columnsVisible;
    NSMutableIndexSet *_columnsInvalid;
}

@property (strong, nonatomic) NSMutableIndexSet *columnsInvalid; // @synthesize columnsInvalid=_columnsInvalid;
@property (strong, nonatomic) TSTHiddenStateIndexSet *columnsVisible; // @synthesize columnsVisible=_columnsVisible;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned long long rowMarkIndex; // @synthesize rowMarkIndex=_rowMarkIndex;
@property (strong, nonatomic) NSMutableIndexSet *rowsInvalid; // @synthesize rowsInvalid=_rowsInvalid;
@property (strong, nonatomic) TSTHiddenStateIndexSet *rowsUserVisible; // @synthesize rowsUserVisible=_rowsUserVisible;
@property (strong, nonatomic) TSTHiddenStateIndexSet *rowsVisible; // @synthesize rowsVisible=_rowsVisible;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSIndexSet *userVisibleRowIndices;
@property (readonly, nonatomic) NSIndexSet *visibleColumnIndices;
@property (readonly, nonatomic) NSIndexSet *visibleRowIndices;

- (void).cxx_destruct;
- (BOOL)anyHiddenColumnsInCellRange:(struct TSUCellRect)arg1;
- (BOOL)anyHiddenRowsInCellRange:(struct TSUCellRect)arg1;
- (BOOL)anyRowsUserHiddenInCellRange:(struct TSUCellRect)arg1;
- (BOOL)hasHiddenColumnAtIndex:(unsigned char)arg1;
- (BOOL)hasHiddenRowAtIndex:(unsigned short)arg1;
- (unsigned char)indexOfVisibleColumnAfterAndIncludingColumnAtIndex:(unsigned char)arg1;
- (unsigned char)indexOfVisibleColumnAfterColumnAtIndex:(unsigned char)arg1;
- (unsigned char)indexOfVisibleColumnBeforeAndIncludingColumnAtIndex:(unsigned char)arg1;
- (unsigned char)indexOfVisibleColumnBeforeColumnAtIndex:(unsigned char)arg1;
- (unsigned short)indexOfVisibleRowAfterAndIncludingRowAtIndex:(unsigned short)arg1;
- (unsigned short)indexOfVisibleRowAfterRowAtIndex:(unsigned short)arg1;
- (unsigned short)indexOfVisibleRowBeforeAndIncludingRowAtIndex:(unsigned short)arg1;
- (unsigned short)indexOfVisibleRowBeforeRowAtIndex:(unsigned short)arg1;
- (id)init;
- (BOOL)isRowUserHidden:(unsigned short)arg1;
- (unsigned short)nonUserHiddenRowAfterAndIncludingRow:(unsigned short)arg1;
- (unsigned short)numberOfHiddenColumnsInCellRange:(struct TSUCellRect)arg1;
- (unsigned short)numberOfHiddenRowsInCellRange:(struct TSUCellRect)arg1;
- (unsigned short)numberOfUserHiddenRowsInCellRange:(struct TSUCellRect)arg1;
- (unsigned short)numberOfVisibleColumnsInCellRange:(struct TSUCellRect)arg1;
- (unsigned short)numberOfVisibleRowsFromHeader:(unsigned short)arg1;
- (unsigned short)numberOfVisibleRowsInCellRange:(struct TSUCellRect)arg1;
- (unsigned char)previousNthVisibleColumn:(unsigned short)arg1 fromColumnIndex:(unsigned char)arg2;
- (unsigned short)previousNthVisibleRow:(unsigned short)arg1 fromRowIndex:(unsigned short)arg2;
- (void)validate:(id)arg1;
- (void)validateChangeDescriptors:(id)arg1;
- (struct TSUCellCoord)visibleCellOffsetBy:(CDStruct_945081a1)arg1 fromCellID:(struct TSUCellCoord)arg2;

@end

