//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class TSTCell, TSTCellMap, TSTConcurrentCellMap;

@protocol TSTCellWillChangeProtocol
- (void)willApplyBaseCellMap:(TSTCellMap *)arg1 tableUID:(const UUIDData_5fbc143e *)arg2;
- (void)willApplyCell:(TSTCell *)arg1 baseCellCoord:(struct TSUModelCellCoord)arg2 tableUID:(const UUIDData_5fbc143e *)arg3;
- (void)willApplyConcurrentCellMap:(TSTConcurrentCellMap *)arg1 tableUID:(const UUIDData_5fbc143e *)arg2;
- (void)willRemoveRows:(const vector_4dc5f307 *)arg1 tableUID:(const UUIDData_5fbc143e *)arg2;
@end
