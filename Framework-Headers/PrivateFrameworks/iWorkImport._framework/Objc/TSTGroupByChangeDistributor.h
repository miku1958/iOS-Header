//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSCEDistributor.h>

#import <iWorkImport/TSTGroupByChangeProtocol-Protocol.h>

__attribute__((visibility("hidden")))
@interface TSTGroupByChangeDistributor : TSCEDistributor <TSTGroupByChangeProtocol>
{
}

- (void)didAddRowUID:(const UUIDData_5fbc143e *)arg1 toGroup:(id)arg2;
- (void)didChangeGroupByStructure;
- (void)didCreateGroup:(id)arg1;
- (void)didRemoveGroup:(id)arg1;
- (void)didRemoveRowUID:(const UUIDData_5fbc143e *)arg1 fromGroup:(id)arg2;
- (void)endOfGroupingChangesBatch;
- (id)protocol;
- (void)startOfGroupingChangesBatch;
- (void)willRemoveGroup:(id)arg1;

@end

