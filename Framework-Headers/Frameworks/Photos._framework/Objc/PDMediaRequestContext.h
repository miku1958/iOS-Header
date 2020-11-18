//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Photos/PHAdjustmentDataRequestDelegate-Protocol.h>
#import <Photos/PHImageRequestDelegate-Protocol.h>
#import <Photos/PHRecyclableObject-Protocol.h>
#import <Photos/PHResourceAvailabilityChangeRequestDelegate-Protocol.h>
#import <Photos/PHVideoChoosingAndAvailabilityRequestDelegate-Protocol.h>
#import <Photos/PHVideoRequestDelegate-Protocol.h>

@class NSArray, NSDictionary, NSError, NSMutableArray, NSMutableDictionary, NSProgress, NSString, PDVideoRequest, PHAsset, PHImageDisplaySpec, PHImageRequestOptions, PHImageResult, PHLivePhotoRequestOptions, PHMediaRequest, PHVideoRequestOptions;
@protocol PHMediaRequestContextDelegate;

@interface PDMediaRequestContext : NSObject <PHImageRequestDelegate, PHResourceAvailabilityChangeRequestDelegate, PHVideoRequestDelegate, PHAdjustmentDataRequestDelegate, PHVideoChoosingAndAvailabilityRequestDelegate, PHRecyclableObject>
{
    unsigned long long _nextID;
    struct os_unfair_lock_s _lock;
    PHMediaRequest *_initialRequest;
    NSMutableArray *_requests;
    NSMutableArray *_jobs;
    NSMutableDictionary *_requestedResourcesByTaskIdentifier;
    CDUnknownBlockType _resultHandler;
    BOOL _isCancelled;
    PDVideoRequest *_outboundVideoRequest;
    BOOL _finalImageReceived;
    BOOL _finalVideoReceived;
    PHImageResult *_result;
    NSError *_error;
    NSDictionary *_info;
    NSMutableDictionary *_progressByTaskIdentifier;
    NSArray *_allProgresses;
    NSProgress *_totalProgress;
    int _requestID;
    id<PHMediaRequestContextDelegate> _delegate;
    long long _type;
    unsigned long long _managerID;
    PHAsset *_asset;
    PHImageDisplaySpec *_displaySpec;
    PHImageRequestOptions *_imageOptions;
    PHVideoRequestOptions *_videoOptions;
    PHLivePhotoRequestOptions *_livePhotoOptions;
}

@property (readonly, nonatomic) PHAsset *asset; // @synthesize asset=_asset;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PHMediaRequestContextDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) PHImageDisplaySpec *displaySpec; // @synthesize displaySpec=_displaySpec;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) PHImageRequestOptions *imageOptions; // @synthesize imageOptions=_imageOptions;
@property (strong, nonatomic) PHLivePhotoRequestOptions *livePhotoOptions; // @synthesize livePhotoOptions=_livePhotoOptions;
@property (readonly, nonatomic) unsigned long long managerID; // @synthesize managerID=_managerID;
@property (readonly, nonatomic) int requestID; // @synthesize requestID=_requestID;
@property (readonly) Class superclass;
@property (nonatomic) long long type; // @synthesize type=_type;
@property (strong, nonatomic) PHVideoRequestOptions *videoOptions; // @synthesize videoOptions=_videoOptions;

+ (id)imageRequestContextWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 imageRequestOptions:(id)arg4 displaySpec:(id)arg5 resultHandler:(CDUnknownBlockType)arg6;
+ (void)initialize;
+ (id)livePhotoRequestContextWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 livePhotoRequestOptions:(id)arg4 displaySpec:(id)arg5 resultHandler:(CDUnknownBlockType)arg6;
+ (id)videoRequestContextWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 videoRequestOptions:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (void).cxx_destruct;
- (id)_adjustmentRequest;
- (void)_availabilityRequest:(id)arg1 didReportProgress:(double)arg2 completed:(BOOL)arg3 error:(id)arg4;
- (long long)_imageDeliveryMode;
- (long long)_imageVersion;
- (id)_initialImageRequest;
- (id)_initialVideoRequest;
- (BOOL)_isNetworkAccessAllowed;
- (BOOL)_isSynchronous;
- (void)_makeAvailabilityRequest:(id)arg1 forResource:(id)arg2 mediaRequest:(id)arg3;
- (CDUnknownBlockType)_progressHandler;
- (id)_requestWithIdentifier:(id)arg1;
- (void)_setupProgressIfNeeded;
- (void)_spawnNewImageRequestWithBehaviorSpec:(id)arg1;
- (void)_startRequest:(id)arg1;
- (void)adjustmentDataRequest:(id)arg1 didFinishWithResultInfo:(id)arg2 error:(id)arg3;
- (void)adjustmentDataRequest:(id)arg1 didReportProgress:(double)arg2 completed:(BOOL)arg3 error:(id)arg4;
- (void)cancel;
- (void)imageRequest:(id)arg1 didFinishLoadingImageResult:(id)arg2 info:(id)arg3 error:(id)arg4;
- (void)imageRequest:(id)arg1 didProcessHintsWithLocallyAvailable:(BOOL)arg2 isDegraded:(BOOL)arg3;
- (void)imageRequest:(id)arg1 isQueryingCacheAndDidWait:(BOOL *)arg2 didFindImage:(BOOL *)arg3 resultHandler:(CDUnknownBlockType)arg4;
- (void)imageRequest:(id)arg1 isRequestingScheduledWorkBlock:(CDUnknownBlockType)arg2;
- (BOOL)imageRequestIsInitialRequestOfMultistageRequest:(id)arg1;
- (id)initWithRequestID:(int)arg1 managerID:(unsigned long long)arg2 asset:(id)arg3 displaySpec:(id)arg4 resultHandler:(CDUnknownBlockType)arg5;
- (void)mediaRequest:(id)arg1 isRequestingLocalAvailabilityChangeForResource:(id)arg2;
- (void)prepareForReuse;
- (void)recycleRequests;
- (void)resourceAvailabilityChangeRequest:(id)arg1 didFinishWithSuccess:(BOOL)arg2 url:(id)arg3 data:(id)arg4 info:(id)arg5 error:(id)arg6;
- (void)resourceAvailabilityChangeRequest:(id)arg1 didLoadData:(id)arg2;
- (void)resourceAvailabilityChangeRequest:(id)arg1 didReportProgress:(double)arg2 completed:(BOOL)arg3 error:(id)arg4;
- (void)start;
- (void)videoChoosingAndAvailabilityRequest:(id)arg1 didFinishWithVideoURL:(id)arg2 info:(id)arg3 error:(id)arg4;
- (void)videoChoosingAndAvailabilityRequest:(id)arg1 didReportProgress:(double)arg2 completed:(BOOL)arg3 error:(id)arg4;
- (void)videoRequest:(id)arg1 didFinishLoadingVideoURL:(id)arg2 info:(id)arg3 error:(id)arg4;
- (void)videoRequest:(id)arg1 isRequestingVideoChoosingForSize:(struct CGSize)arg2;

@end

