//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSCEUUidReferenceMap : NSObject
{
    struct unordered_map<TSU::UUIDData<TSP::UUIDData>, std::__1::unordered_set<TSCEInternalCellReference, std::__1::hash<TSCEInternalCellReference>, std::__1::equal_to<TSCEInternalCellReference>, std::__1::allocator<TSCEInternalCellReference>>, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData>>, std::__1::allocator<std::__1::pair<const TSU::UUIDData<TSP::UUIDData>, std::__1::unordered_set<TSCEInternalCellReference, std::__1::hash<TSCEInternalCellReference>, std::__1::equal_to<TSCEInternalCellReference>, std::__1::allocator<TSCEInternalCellReference>>>>> _cellRefsByUuid;
    struct unordered_map<TSCEInternalCellReference, std::__1::unordered_set<TSU::UUIDData<TSP::UUIDData>, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData>>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData>>>, std::__1::hash<TSCEInternalCellReference>, std::__1::equal_to<TSCEInternalCellReference>, std::__1::allocator<std::__1::pair<const TSCEInternalCellReference, std::__1::unordered_set<TSU::UUIDData<TSP::UUIDData>, std::__1::hash<TSUUUID>, std::__1::equal_to<TSU::UUIDData<TSP::UUIDData>>, std::__1::allocator<TSU::UUIDData<TSP::UUIDData>>>>>> _uuidsByCellRef;
}

+ (id)_stringForInternalCellRef:(const struct TSCEInternalCellReference *)arg1;
- (id).cxx_construct;
- (void).cxx_destruct;
- (void)addCellRef:(const struct TSCECellRef *)arg1 dependencyTracker:(struct TSCEDependencyTracker *)arg2 forUuid:(const UUIDData_5fbc143e *)arg3;
- (void)addCellRef:(const struct TSCEInternalCellReference *)arg1 forUuid:(const UUIDData_5fbc143e *)arg2;
- (id)description;
- (void)encodeToArchive:(struct UuidReferenceMapArchive *)arg1;
- (void)getCellRefs:(unordered_set_7ec2a700 *)arg1 dependencyTracker:(struct TSCEDependencyTracker *)arg2 referringToUuid:(const UUIDData_5fbc143e *)arg3;
- (void)getCellRefs:(unordered_set_7ec2a700 *)arg1 dependencyTracker:(struct TSCEDependencyTracker *)arg2 referringToUuids:(const vector_4dc5f307 *)arg3;
- (id)initFromArchive:(const struct UuidReferenceMapArchive *)arg1 dependencyTracker:(struct TSCEDependencyTracker *)arg2;
- (void)p_getCellRefs:(unordered_set_c4d0cfce *)arg1 referringToUuids:(const vector_4dc5f307 *)arg2;
- (void)removeCellRef:(const struct TSCEInternalCellReference *)arg1;
- (void)removeCellRef:(const struct TSCECellRef *)arg1 dependencyTracker:(struct TSCEDependencyTracker *)arg2 forUuid:(const UUIDData_5fbc143e *)arg3;
- (void)removeCellRef:(const struct TSCEInternalCellReference *)arg1 forUuid:(const UUIDData_5fbc143e *)arg2;

@end
