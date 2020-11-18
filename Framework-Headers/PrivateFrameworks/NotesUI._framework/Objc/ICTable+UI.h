//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesShared/ICTable.h>

@class NSObject;
@protocol ICTableDelegate;

@interface ICTable (UI)

@property (weak, nonatomic) NSObject<ICTableDelegate> *delegate;

- (id)documentForCellAtColumnIndex:(unsigned long long)arg1 rowIndex:(unsigned long long)arg2;
- (void)enumerateTextStoragesForColumnIndexes:(id)arg1 rowIndexes:(id)arg2 undoTarget:(id)arg3 undoManager:(id)arg4 usingBlock:(CDUnknownBlockType)arg5;
- (id)mergeableStringForColumnID:(id)arg1 rowID:(id)arg2 createIfNeeded:(BOOL)arg3;
- (void)restyleAllCells;
- (id)textStorageForCellAtColumnID:(id)arg1 rowID:(id)arg2 undoTarget:(id)arg3 undoManager:(id)arg4;
- (id)textStorageForCellAtColumnIndex:(unsigned long long)arg1 rowIndex:(unsigned long long)arg2 undoTarget:(id)arg3 undoManager:(id)arg4;
- (id)textStorageForColumn:(id)arg1;
@end
