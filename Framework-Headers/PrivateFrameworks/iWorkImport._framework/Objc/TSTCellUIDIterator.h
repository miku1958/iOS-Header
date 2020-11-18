//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TSTCellUIDList;

__attribute__((visibility("hidden")))
@interface TSTCellUIDIterator : NSObject
{
    deque_c2509c49 _recentRowResults;
    deque_c2509c49 _recentColumnResults;
    TSTCellUIDList *_cellUIDList;
    unsigned long long _index;
    unsigned long long _rowIndex;
    unsigned long long _columnIndex;
    unsigned long long _rowRemainDup;
    unsigned long long _columnRemainDup;
    unsigned long long _lastRowDiffPos;
    unsigned long long _lastColumnDiffPos;
    struct TSTCellUID _cellUID;
}

@property (nonatomic) struct TSTCellUID cellUID; // @synthesize cellUID=_cellUID;
@property (strong, nonatomic) TSTCellUIDList *cellUIDList; // @synthesize cellUIDList=_cellUIDList;
@property (nonatomic) unsigned long long columnIndex; // @synthesize columnIndex=_columnIndex;
@property (nonatomic) unsigned long long columnRemainDup; // @synthesize columnRemainDup=_columnRemainDup;
@property (nonatomic) unsigned long long index; // @synthesize index=_index;
@property (nonatomic) unsigned long long lastColumnDiffPos; // @synthesize lastColumnDiffPos=_lastColumnDiffPos;
@property (nonatomic) unsigned long long lastRowDiffPos; // @synthesize lastRowDiffPos=_lastRowDiffPos;
@property (nonatomic) unsigned long long rowIndex; // @synthesize rowIndex=_rowIndex;
@property (nonatomic) unsigned long long rowRemainDup; // @synthesize rowRemainDup=_rowRemainDup;

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithCellUIDList:(id)arg1;
- (struct TSTCellUID)nextCellUID;
- (UUIDData_5fbc143e)p_nextCellRefIdWithUIDIndexList:(const vector_e0f2bd7e *)arg1 UIDs:(const vector_dadc1b26 *)arg2 index:(unsigned long long *)arg3 remainDup:(unsigned long long *)arg4 lastDiffPos:(unsigned long long *)arg5 recentResults:(deque_c2509c49 *)arg6;

@end

