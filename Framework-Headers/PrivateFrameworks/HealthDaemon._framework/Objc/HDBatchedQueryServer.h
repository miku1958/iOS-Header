//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/HDQueryServer.h>

@interface HDBatchedQueryServer : HDQueryServer
{
    CDUnknownBlockType _unitTest_queryServerObjectEnumerationHandler;
    CDUnknownBlockType _unitTest_queryServerWillSendBatchHandler;
}

@property (copy, nonatomic) CDUnknownBlockType unitTest_queryServerObjectEnumerationHandler; // @synthesize unitTest_queryServerObjectEnumerationHandler=_unitTest_queryServerObjectEnumerationHandler;
@property (copy, nonatomic) CDUnknownBlockType unitTest_queryServerWillSendBatchHandler; // @synthesize unitTest_queryServerWillSendBatchHandler=_unitTest_queryServerWillSendBatchHandler;

- (void).cxx_destruct;
- (CDUnknownBlockType)_processBatchHandlerForResearchAppECGAccess:(CDUnknownBlockType)arg1;
- (long long)batchObjectsWithEnumerator:(id)arg1 error:(id *)arg2 handler:(CDUnknownBlockType)arg3;
- (long long)batchObjectsWithEnumerator:(id)arg1 includeDeletedObjects:(BOOL)arg2 error:(id *)arg3 batchHandler:(CDUnknownBlockType)arg4;

@end

