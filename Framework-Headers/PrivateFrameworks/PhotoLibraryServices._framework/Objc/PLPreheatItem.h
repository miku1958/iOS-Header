//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_group, OS_dispatch_queue;

@interface PLPreheatItem : NSObject
{
    int _format;
    long long _imageType;
    struct CGSize _optimalSourcePixelSize;
    NSString *_assetUUID;
    BOOL _CPLPrefetching;
    NSObject<OS_dispatch_queue> *_CPLPrefetchingIsolationQueue;
    NSString *_CPLPrefetchingDoneToken;
    int _CPLNotifyRegistrationToken;
    BOOL _CPLPrefetchingCancelled;
    NSObject<OS_dispatch_group> *_CPLPrefetchingWaitGroup;
    BOOL _cachingAllowed;
    int _requestCount;
    BOOL _didCompleteCPLPrefetchingWithSuccessOrError;
    BOOL _CPLPrefetchingWasCancelled;
    int _bestFormat;
    NSString *_virtualCPLTaskIdentifier;
}

@property (readonly, nonatomic) BOOL CPLPrefetching; // @synthesize CPLPrefetching=_CPLPrefetching;
@property (readonly, strong, nonatomic) NSObject<OS_dispatch_group> *CPLPrefetchingWaitGroup; // @synthesize CPLPrefetchingWaitGroup=_CPLPrefetchingWaitGroup;
@property BOOL CPLPrefetchingWasCancelled; // @synthesize CPLPrefetchingWasCancelled=_CPLPrefetchingWasCancelled;
@property (readonly, copy, nonatomic) NSString *assetUUID; // @synthesize assetUUID=_assetUUID;
@property (nonatomic) int bestFormat; // @synthesize bestFormat=_bestFormat;
@property (nonatomic) BOOL cachingAllowed; // @synthesize cachingAllowed=_cachingAllowed;
@property BOOL didCompleteCPLPrefetchingWithSuccessOrError; // @synthesize didCompleteCPLPrefetchingWithSuccessOrError=_didCompleteCPLPrefetchingWithSuccessOrError;
@property (readonly, nonatomic) int format; // @synthesize format=_format;
@property (readonly, nonatomic) long long imageType; // @synthesize imageType=_imageType;
@property (readonly, nonatomic) struct CGSize optimalSourcePixelSize; // @synthesize optimalSourcePixelSize=_optimalSourcePixelSize;
@property (strong) NSString *virtualCPLTaskIdentifier; // @synthesize virtualCPLTaskIdentifier=_virtualCPLTaskIdentifier;

- (BOOL)addImageHandler:(CDUnknownBlockType)arg1;
- (id)cachedImage:(BOOL *)arg1;
- (id)cachedImageIfAvailable:(BOOL *)arg1;
- (void)cancelPreheatRequestWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (long long)decrementRequestCount;
- (id)description;
- (long long)incrementRequestCount;
- (id)initForCPLPrefetchingWithAssetUUID:(id)arg1 format:(int)arg2;
- (BOOL)isCancelled;
- (BOOL)isRetained;
- (void)startPreheatRequestWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

