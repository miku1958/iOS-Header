//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <Vision/VNRequestCancelling-Protocol.h>
#import <Vision/VNRequestWarming-Protocol.h>

@class VNRequestPerformer;

@interface VNPhotosRequestHandler : NSObject <VNRequestWarming, VNRequestCancelling>
{
    VNRequestPerformer *_requestPerformer;
    CDUnknownBlockType _burstAnalysisLoggingCallback;
    NSObject *_modelContextObject;
}

@property (copy, nonatomic) CDUnknownBlockType burstAnalysisLoggingCallback; // @synthesize burstAnalysisLoggingCallback=_burstAnalysisLoggingCallback;
@property (strong, nonatomic) NSObject *modelContextObject; // @synthesize modelContextObject=_modelContextObject;

- (void).cxx_destruct;
- (void)cancelAllRequests;
- (id)clusterContextWithOptions:(id)arg1 allowingCreation:(BOOL)arg2 error:(id *)arg3;
- (id)init;
- (BOOL)performRequests:(id)arg1 error:(id *)arg2;
- (BOOL)prepareForPerformingRequests:(id)arg1 error:(id *)arg2;
- (BOOL)prepareForPerformingRequestsOfClass:(id)arg1 error:(id *)arg2;

@end

