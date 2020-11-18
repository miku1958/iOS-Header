//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesCloud/ICAsyncOperation.h>

@class ICStoreRequestContext, ICStoreURLRequest, NSObject, NSString;
@protocol OS_dispatch_queue;

@interface ICMusicSubscriptionPlaybackRequestOperation : ICAsyncOperation
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    ICStoreURLRequest *_activeURLRequest;
    BOOL _delegatedPlayback;
    NSString *_assetSourceStorefrontID;
    long long _requestType;
    CDUnknownBlockType _willBeginExecutionHandler;
    ICStoreRequestContext *_requestContext;
    CDUnknownBlockType _responseHandler;
    unsigned long long _storeCloudID;
    long long _storeSubscriptionAdamID;
    long long _storePurchasedAdamID;
    NSString *_cloudUniversalLibraryID;
}

@property (copy, nonatomic) NSString *assetSourceStorefrontID; // @synthesize assetSourceStorefrontID=_assetSourceStorefrontID;
@property (copy, nonatomic) NSString *cloudUniversalLibraryID; // @synthesize cloudUniversalLibraryID=_cloudUniversalLibraryID;
@property (nonatomic, getter=isDelegatedPlayback) BOOL delegatedPlayback; // @synthesize delegatedPlayback=_delegatedPlayback;
@property (copy, nonatomic) ICStoreRequestContext *requestContext; // @synthesize requestContext=_requestContext;
@property (nonatomic) long long requestType; // @synthesize requestType=_requestType;
@property (copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;
@property (nonatomic) unsigned long long storeCloudID; // @synthesize storeCloudID=_storeCloudID;
@property (nonatomic) long long storePurchasedAdamID; // @synthesize storePurchasedAdamID=_storePurchasedAdamID;
@property (nonatomic) long long storeSubscriptionAdamID; // @synthesize storeSubscriptionAdamID=_storeSubscriptionAdamID;
@property (copy, nonatomic) CDUnknownBlockType willBeginExecutionHandler; // @synthesize willBeginExecutionHandler=_willBeginExecutionHandler;

- (void).cxx_destruct;
- (void)cancel;
- (id)init;
- (void)start;

@end
