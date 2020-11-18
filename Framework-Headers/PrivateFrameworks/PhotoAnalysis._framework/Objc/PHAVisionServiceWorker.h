//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoAnalysis/PHAWorker.h>

#import <PhotoAnalysis/PHAVisionServiceAssetsAnalyzingOperationDelegate-Protocol.h>

@class NSMapTable, NSMutableDictionary, NSNumber, NSObject, NSOperationQueue, NSString;
@protocol OS_dispatch_queue;

@interface PHAVisionServiceWorker : PHAWorker <PHAVisionServiceAssetsAnalyzingOperationDelegate>
{
    NSOperationQueue *_assetAnalysisOperationQueue;
    NSObject<OS_dispatch_queue> *_commandDispatchQueue;
    NSMapTable *_jobToAssetsAnalyzingOperationMapTable;
    NSMutableDictionary *_coalescedAnalysisResultsByAssetLocalIdentifier;
    NSMutableDictionary *_coalescedJobResultsByAssetLocalIdentifier;
    NSNumber *_lastRecordedDarkWakeState;
    _Atomic unsigned long long _lastPerformedJobScenario;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (CDUnknownBlockType)assetResourceLargestToSmallestComparator;
+ (CDUnknownBlockType)assetResourceSmallestToLargestComparator;
+ (void)initialize;
- (void).cxx_destruct;
- (void)_checkForDarkWakeStateTransition;
- (struct CGImage *)_createCGImageFromImageSource:(struct CGImageSource *)arg1 imageOptions:(id)arg2 orientation:(unsigned long long *)arg3 error:(id *)arg4;
- (unsigned long long)analyzeAssetResourceFileAtURL:(id)arg1 forAsset:(id)arg2 withAttributes:(id)arg3 error:(id *)arg4;
- (unsigned long long)analyzeAssetWithLocalIdentifer:(id)arg1 workerJob:(id)arg2 error:(id *)arg3;
- (unsigned long long)analyzeAssetWithLocalIdentifier:(id)arg1 dataLoadingOptions:(id)arg2 usingBlock:(CDUnknownBlockType)arg3 error:(id *)arg4;
- (unsigned long long)analyzeImageData:(id)arg1 forAsset:(id)arg2 withAttributes:(id)arg3 error:(id *)arg4;
- (id)assetResourcesForAsset:(id)arg1 fromDesiredTypes:(const long long *)arg2 count:(unsigned long long)arg3;
- (id)assetWithLocalIdentifier:(id)arg1 error:(id *)arg2;
- (Class)assetsAnalyzingOperationClass;
- (BOOL)canProvideAnalysisJobResultInformation:(id)arg1 withoutRequiringAssetResourceForAsset:(id)arg2;
- (void)coalesceJobResult:(unsigned long long)arg1 forAssetLocalIdentifier:(id)arg2;
- (void)coalesceResultsDictionary:(id)arg1 forAssetLocalIdentifier:(id)arg2;
- (struct CGImage *)createCGImageForAssetResource:(id)arg1 imageOptions:(id)arg2 orientation:(unsigned long long *)arg3 error:(id *)arg4;
- (struct CGImage *)createCGImageFromImageFileURL:(id)arg1 imageOptions:(id)arg2 orientation:(unsigned long long *)arg3 error:(id *)arg4;
- (id)defaultImageCreationOptions;
- (void)didPerformJob:(id)arg1;
- (BOOL)getLocallyAvailableAssetResource:(id *)arg1 forAnalyzingAsset:(id)arg2 error:(id *)arg3;
- (id)imageDataForAssetResource:(id)arg1 error:(id *)arg2;
- (id)initWithPhotoAnalysisManager:(id)arg1 dataLoader:(id)arg2;
- (void)insidePhotoLibraryTransactionPersistResultsDictionary:(id)arg1 forAsset:(id)arg2;
- (BOOL)isExecutingDuringDarkWake;
- (unsigned long long)lastPerformedJobScenario;
- (id)localFileURLForAssetResource:(id)arg1 error:(id *)arg2;
- (id)newAssetFetchOptions;
- (id)newCVMLRequestOptions;
- (id)newObjectFetchOptions;
- (void)performCVMLForcedCleanup;
- (void)performCVMLForcedCleanupWithOptions:(id)arg1;
- (id)preferredAssetResourcesForAnalyzingAsset:(id)arg1;
- (BOOL)processAsset:(id)arg1 error:(id *)arg2;
- (void)scheduleProcessingOfAssetsWithLocalIdentifiers:(id)arg1;
- (void)scheduleProcessingOfAssetsWithLocalIdentifiers:(id)arg1 withPriority:(long long)arg2;
- (void)shutdown;
- (BOOL)startAcknowledgeDeletionsJob:(id)arg1 error:(id *)arg2;
- (BOOL)startAnalysisJob:(id)arg1 error:(id *)arg2;
- (void)startup;
- (BOOL)stopAcknowledgeDeletionsJob:(id)arg1 error:(id *)arg2;
- (BOOL)stopAnalysisJob:(id)arg1 error:(id *)arg2;
- (BOOL)supportsCoalescingResults;
- (void)visionServiceAssetsProcessingOperation:(id)arg1 didExecuteToCompletion:(BOOL)arg2;
- (void)willCompleteJob:(id)arg1;
- (void)willPerformJob:(id)arg1;

@end
