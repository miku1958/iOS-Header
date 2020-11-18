//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUMediaProvider.h>

@class AVAsset, AVAssetImageGenerator, AVVideoComposition, NSCache, NSMutableArray, NSMutableDictionary, NSObject, UIImage;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface PUFilmstripMediaProvider : PUMediaProvider
{
    NSObject<OS_dispatch_queue> *_generationQueue;
    BOOL _deliversImagesInOrder;
    AVAsset *_asset;
    AVVideoComposition *_videoComposition;
    double _timeTolerance;
    UIImage *_placeholderImage;
    AVAssetImageGenerator *__imageGenerator;
    long long __requestNumber;
    NSMutableDictionary *__completionHandlersByRequestNumber;
    NSCache *__imageCache;
    NSMutableArray *__pendingResults;
    NSMutableDictionary *__resultsByRequestNumber;
}

@property (strong, nonatomic, setter=_setCompletionHandlersByRequestNumber:) NSMutableDictionary *_completionHandlersByRequestNumber; // @synthesize _completionHandlersByRequestNumber=__completionHandlersByRequestNumber;
@property (strong, nonatomic, setter=_setImageCache:) NSCache *_imageCache; // @synthesize _imageCache=__imageCache;
@property (strong, nonatomic, setter=_setImageGenerator:) AVAssetImageGenerator *_imageGenerator; // @synthesize _imageGenerator=__imageGenerator;
@property (strong, nonatomic, setter=_setPendingResults:) NSMutableArray *_pendingResults; // @synthesize _pendingResults=__pendingResults;
@property (nonatomic, setter=_setRequestNumber:) long long _requestNumber; // @synthesize _requestNumber=__requestNumber;
@property (strong, nonatomic, setter=_setResultsByRequestNumber:) NSMutableDictionary *_resultsByRequestNumber; // @synthesize _resultsByRequestNumber=__resultsByRequestNumber;
@property (readonly, nonatomic) AVAsset *asset; // @synthesize asset=_asset;
@property (nonatomic) BOOL deliversImagesInOrder; // @synthesize deliversImagesInOrder=_deliversImagesInOrder;
@property (strong, nonatomic) UIImage *placeholderImage; // @synthesize placeholderImage=_placeholderImage;
@property (nonatomic) double timeTolerance; // @synthesize timeTolerance=_timeTolerance;
@property (readonly, nonatomic) AVVideoComposition *videoComposition; // @synthesize videoComposition=_videoComposition;

- (void).cxx_destruct;
- (void)_deliverPendingResults;
- (void)_deliverPlaceholderImage;
- (void)_deliverResult:(id)arg1;
- (void)_didGenerateImage:(struct CGImage *)arg1 error:(id)arg2 requestedTime:(CDStruct_1b6d18a9)arg3 actualTime:(CDStruct_1b6d18a9)arg4 forResult:(id)arg5;
- (void)_generateImageForResult:(id)arg1;
- (void)cancelAllRequests;
- (void)cancelImageRequest:(int)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithAVAsset:(id)arg1 videoComposition:(id)arg2;
- (int)requestImageForAsset:(id)arg1 targetSize:(struct CGSize)arg2 contentMode:(long long)arg3 options:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;

@end
