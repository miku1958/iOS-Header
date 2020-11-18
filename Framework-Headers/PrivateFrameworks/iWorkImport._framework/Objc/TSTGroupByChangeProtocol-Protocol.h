//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class TSTGroupNode;

@protocol TSTGroupByChangeProtocol
- (void)didAddRowUID:(const UUIDData_5fbc143e *)arg1 toGroup:(TSTGroupNode *)arg2;
- (void)didChangeGroupByStructure;
- (void)didCreateGroup:(TSTGroupNode *)arg1;
- (void)didRemoveGroup:(TSTGroupNode *)arg1;
- (void)didRemoveRowUID:(const UUIDData_5fbc143e *)arg1 fromGroup:(TSTGroupNode *)arg2;
- (void)endOfGroupingChangesBatch;
- (void)startOfGroupingChangesBatch;
- (void)willRemoveGroup:(TSTGroupNode *)arg1;
@end

