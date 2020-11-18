//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, PHAsset;

__attribute__((visibility("hidden")))
@interface PUResourceDownloadRequest : NSObject
{
    NSMutableDictionary *_progressByRequestIdentifier;
    CDUnknownBlockType _downloadCompletionHandler;
    BOOL _shouldTreatLivePhotosAsStills;
    BOOL __downloadCanceled;
    PHAsset *_asset;
    long long _requestType;
    double _progress;
    CDUnknownBlockType _progressChangeHandler;
}

@property (nonatomic, getter=_isDownloadCanceled, setter=_setDownloadCanceled:) BOOL _downloadCanceled; // @synthesize _downloadCanceled=__downloadCanceled;
@property (readonly) PHAsset *asset; // @synthesize asset=_asset;
@property (nonatomic) double progress; // @synthesize progress=_progress;
@property (copy, nonatomic) CDUnknownBlockType progressChangeHandler; // @synthesize progressChangeHandler=_progressChangeHandler;
@property (readonly) long long requestType; // @synthesize requestType=_requestType;
@property (nonatomic) BOOL shouldTreatLivePhotosAsStills; // @synthesize shouldTreatLivePhotosAsStills=_shouldTreatLivePhotosAsStills;

- (void).cxx_destruct;
- (void)_didFinishDownloadWithSuccess:(BOOL)arg1 error:(id)arg2;
- (void)_fetchResourcesForConsumingAsset:(id)arg1 networkAccessAllowed:(BOOL)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_fetchResourcesForEditingAsset:(id)arg1 networkAccessAllowed:(BOOL)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_fetchResourcesWithNetworkAccessAllowed:(BOOL)arg1 handler:(CDUnknownBlockType)arg2;
- (void)_setProgress:(double)arg1;
- (void)_simulateFetchResourcesWithDuration:(double)arg1 success:(BOOL)arg2 networkAccessAllowed:(BOOL)arg3 handler:(CDUnknownBlockType)arg4;
- (void)_updateCombinedProgressWithValue:(double)arg1 forRequestIdentifier:(id)arg2 networkAccessAllowed:(BOOL)arg3;
- (void)cancelDownloadRequest;
- (void)downloadRequiredResourcesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)fetchIsDownloadRequiredWithHandler:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithAsset:(id)arg1 requestType:(long long)arg2;

@end
