//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoAnalysis/PHAVisionServiceFaceProcessingWorkerAdditionalJob.h>

#import <PhotoAnalysis/PHAFaceCropProcessingJobProcessFaceCropsOperationDelegate-Protocol.h>

@class NSOperationQueue, NSString, PHAFaceCropProcessingJobProcessFaceCropsOperation;

@interface PHAFaceCropProcessingJob : PHAVisionServiceFaceProcessingWorkerAdditionalJob <PHAFaceCropProcessingJobProcessFaceCropsOperationDelegate>
{
    NSOperationQueue *_operationQueue;
    PHAFaceCropProcessingJobProcessFaceCropsOperation *_processingOperation;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (float)completionScore;
- (id)initWithFaceProcessingWorker:(id)arg1 jobScenario:(unsigned long long)arg2 dirtyFaceCrops:(id)arg3;
- (void)operation:(id)arg1 didProcessFaceCrop:(id)arg2 withError:(id)arg3;
- (BOOL)startJob:(id *)arg1;
- (BOOL)stopJob:(id *)arg1;

@end
