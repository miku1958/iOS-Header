//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSTTableDataObject.h>

@class TSTCellSpec;

__attribute__((visibility("hidden")))
@interface TSTTableDataCellSpec : TSTTableDataObject
{
    TSTCellSpec *_cellSpec;
}

+ (id)objectWithCellSpec:(id)arg1 refCount:(unsigned int)arg2;
- (void).cxx_destruct;
- (id)cellSpec;
- (id)description;
- (void)encodeToArchive:(struct TableDataList_ListEntry *)arg1 key:(unsigned int)arg2 archiver:(id)arg3;
- (unsigned long long)estimateByteSize;
- (unsigned long long)hash;
- (id)initObjectWithCellSpec:(id)arg1 refCount:(unsigned int)arg2;
- (BOOL)isEqual:(id)arg1;
- (void)loadFromArchive:(const struct TableDataList_ListEntry *)arg1 unarchiver:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)setCellSpec:(id)arg1;

@end
