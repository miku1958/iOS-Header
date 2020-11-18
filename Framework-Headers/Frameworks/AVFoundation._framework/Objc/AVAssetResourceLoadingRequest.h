//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AVFoundation/AVAssetResourceLoaderRequest-Protocol.h>

@class AVAssetResourceLoadingContentInformationRequest, AVAssetResourceLoadingDataRequest, AVAssetResourceLoadingRequestInternal, NSString, NSURLRequest, NSURLResponse;

@interface AVAssetResourceLoadingRequest : NSObject <AVAssetResourceLoaderRequest>
{
    AVAssetResourceLoadingRequestInternal *_loadingRequest;
}

@property (readonly, nonatomic, getter=isCancelled) BOOL cancelled;
@property (readonly, nonatomic) AVAssetResourceLoadingContentInformationRequest *contentInformationRequest;
@property (readonly, nonatomic) AVAssetResourceLoadingDataRequest *dataRequest;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic, getter=isFinished) BOOL finished;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSURLRequest *redirect;
@property (readonly, nonatomic) NSURLRequest *request;
@property (copy, nonatomic) NSURLResponse *response;
@property (readonly) Class superclass;

+ (SEL)_selectorForInformingDelegateOfCancellationByFig;
- (void)_addFigAssetImageGeneratorListeners;
- (void)_addFigAssetListeners;
- (void)_addFigPlaybackItemListeners;
- (void)_appendToCachedData:(id)arg1;
- (id)_getAndClearCachedData;
- (void)_performCancellationByClient;
- (void)_removeFigAssetImageGeneratorListeners;
- (void)_removeFigAssetListeners;
- (void)_removeFigPlaybackItemListeners;
- (id)_requestDictionary;
- (id)_resourceLoader;
- (void)_sendDataIncrementally:(id)arg1 data:(id)arg2;
- (void)_sendDictionaryForURLRequest:(id)arg1 context:(id)arg2;
- (void)_setContentInformationRequest:(id)arg1;
- (void)_setDataRequest:(id)arg1;
- (BOOL)_shouldInformDelegateOfFigCancellation;
- (BOOL)_tryToMarkAsCancelled;
- (id)_weakReference;
- (void)dealloc;
- (void)finalize;
- (void)finishLoading;
- (void)finishLoadingWithError:(id)arg1;
- (void)finishLoadingWithResponse:(id)arg1 data:(id)arg2 redirect:(id)arg3;
- (BOOL)finished;
- (void)generateStreamingContentKeyRequestDataAsynchronouslyForApp:(id)arg1 contentIdentifier:(id)arg2 options:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)init;
- (id)initWithResourceLoader:(id)arg1 requestDictionary:(id)arg2;
- (id)persistentContentKeyFromKeyVendorResponse:(id)arg1 options:(id)arg2 error:(id *)arg3;
- (id)serializableRepresentation;
- (id)streamingContentKeyRequestDataForApp:(id)arg1 contentIdentifier:(id)arg2 options:(id)arg3 error:(id *)arg4;

@end
