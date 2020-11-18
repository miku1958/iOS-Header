//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSTCellDictionary : NSObject
{
    struct os_unfair_lock_s _lock;
    struct map<TSUCellCoord, TSTCell *, std::__1::less<TSUCellCoord>, std::__1::allocator<std::__1::pair<const TSUCellCoord, TSTCell *>>> _cellsByCoord;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (struct TSCECellCoordSet)allCellCoords;
- (id)allCells;
- (void)applyBlockToAllCells:(CDUnknownBlockType)arg1;
- (id)cellAtCellID:(struct TSUCellCoord)arg1;
- (id)init;
- (vector_38b190b0)removeAllCells;
- (void)setCell:(id)arg1 atCellID:(struct TSUCellCoord)arg2;

@end

