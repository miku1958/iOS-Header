//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVAssetResourceLoadingContentInformationRequest, AVAssetResourceLoadingDataRequest, AVWeakReference, NSDictionary, NSMutableData, NSMutableURLRequest, NSURLRequest, NSURLResponse;
@protocol OS_dispatch_queue;

@interface AVAssetResourceLoadingRequestInternal : NSObject
{
    AVWeakReference *weakReference;
    AVWeakReference *weakReferenceToResourceLoader;
    NSDictionary *requestDictionary;
    NSMutableURLRequest *URLRequest;
    NSURLResponse *response;
    NSURLRequest *redirect;
    NSObject<OS_dispatch_queue> *dataCachingQueue;
    NSMutableData *cachedData;
    NSDictionary *cachedContentInformation;
    AVAssetResourceLoadingContentInformationRequest *contentInformationRequest;
    AVAssetResourceLoadingDataRequest *dataRequest;
    int finished;
    int cancelled;
    int sentContentInfo;
    struct OpaqueFigPlaybackItem *figPlaybackItem;
    struct OpaqueFigAssetImageGenerator *figImageGenerator;
    struct OpaqueFigAsset *figAsset;
    CDUnknownBlockType streamingKeyRequestCompletionHandler;
}

@end

