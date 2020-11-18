//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSKModel-Protocol.h>

@class TSCECalculationEngine, TSPObject;
@protocol TSCECalculationEngineRegistration;

@protocol TSCECalculationEngineRegistration <TSKModel>
- (UUIDData_5fbc143e)formulaOwnerUID;
- (TSPObject<TSCECalculationEngineRegistration> *)objectToArchiveInDependencyTracker;
- (BOOL)registerLast;
- (void)registerWithCalculationEngineForDocumentLoad:(TSCECalculationEngine *)arg1;
- (void)unregisterFromCalculationEngine:(TSCECalculationEngine *)arg1;
@end

