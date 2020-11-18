//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Vision/VNRequest.h>

@class NSArray;

@interface VNGetClustersRequest : VNRequest
{
    NSArray *_clusterIDs;
}

@property (copy, nonatomic) NSArray *clusterIDs; // @synthesize clusterIDs=_clusterIDs;

- (void).cxx_destruct;
- (void)applyConfigurationOfRequest:(id)arg1;
- (id)initWithName:(id)arg1 options:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)internalPerformInContext:(id)arg1 error:(id *)arg2;
- (id)observationsCacheKey;
- (id)sequencedRequestPreviousObservationsKey;

@end
