//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_semaphore;

@interface TSTConcurrentMutableCellUIDSet : NSObject
{
    struct unordered_map<TSU::UUIDData<TSP::UUIDData>, TSUMutableUUIDSet *, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData>>, std::__1::allocator<std::__1::pair<const TSU::UUIDData<TSP::UUIDData>, TSUMutableUUIDSet *>>> _rowUIDToColumnUIDSetMap;
    NSObject<OS_dispatch_semaphore> *_sem;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addCellUID:(const struct TSTCellUID *)arg1;
- (id)init;
- (id)reapAccumulatedCellRegionWithTable:(id)arg1;

@end
