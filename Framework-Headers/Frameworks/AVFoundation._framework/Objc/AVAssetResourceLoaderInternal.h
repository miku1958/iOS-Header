//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVAssetClientURLRequestHelper, AVAssetCustomURLBridgeForNSURLSession, AVWeakReference, NSMutableDictionary, NSOperationQueue, NSURLSession;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AVAssetResourceLoaderInternal : NSObject
{
    AVAssetClientURLRequestHelper *URLRequestHelper;
    AVWeakReference *weakReferenceToAsset;
    NSObject<OS_dispatch_queue> *stateQueue;
    AVWeakReference *weakReferenceToDelegate;
    NSObject<OS_dispatch_queue> *delegateQueue;
    struct OpaqueFigCustomURLLoader *customURLLoader;
    struct OpaqueFigCustomURLHandler *customURLHandler;
    struct OpaqueFigCustomURLHandler *authHandler;
    struct OpaqueFigCustomURLHandler *contentKeySessionCustomURLHandler;
    int loadingCancelled;
    NSMutableDictionary *pendingRequests;
    NSObject<OS_dispatch_queue> *contentInformationCachingQueue;
    NSMutableDictionary *contentInformationCache;
    BOOL preloadsEligibleContentKeys;
    long long makeResourceLoaderURLSessionSupportStuffOnlyOnce;
    NSURLSession *URLSession;
    AVAssetCustomURLBridgeForNSURLSession *bridgeBetweenHandlerAndSession;
    NSOperationQueue *URLSessionOperationQueue;
}

@end

