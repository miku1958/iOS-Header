//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNCompoundRequest.h>

__attribute__((visibility("hidden")))
@interface VNANFDDetectorCompoundRequest : VNCompoundRequest
{
}

+ (long long)compoundRequestRevisionForRequest:(id)arg1;
+ (id)compoundRequestsForOriginalRequests:(id)arg1 withPerformingContext:(id)arg2 error:(id *)arg3;
+ (Class)configurationClass;
+ (id)defaultProcessingDeviceForRevision:(unsigned long long)arg1;
+ (const CDStruct_7d93034e *)revisionAvailability;
+ (BOOL)warmUpSession:(id)arg1 error:(id *)arg2;
- (void)assignOriginalRequestsResultsFromObservations:(id)arg1 obtainedInPerformingContext:(id)arg2;
- (long long)dependencyProcessingOrdinality;
- (id)initWithDetectorType:(id)arg1 configuration:(id)arg2;
- (BOOL)internalPerformRevision:(unsigned long long)arg1 inContext:(id)arg2 error:(id *)arg3;
- (BOOL)warmUpSession:(id)arg1 error:(id *)arg2;

@end
