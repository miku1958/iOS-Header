//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSKSosBase.h>

__attribute__((visibility("hidden")))
@interface TSTCellUIDRegion : TSKSosBase
{
    vector_793e6c56 _cellUIDRangeList;
}

@property (readonly, nonatomic) unsigned long long cellCount;
@property (readonly, nonatomic) BOOL isEmpty;

+ (id)cellUIDRegionFromRegion:(id)arg1 inTable:(id)arg2;
+ (id)cellUIDRegionFromRegion:(id)arg1 inTableModel:(id)arg2;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)cellRegionFromTable:(id)arg1;
- (void)enumerateCellUIDRangesUsingBlock:(CDUnknownBlockType)arg1;
- (id)initFromMessage:(const struct CellUIDRegionArchive *)arg1;
- (void)saveToMessage:(struct CellUIDRegionArchive *)arg1;

@end

