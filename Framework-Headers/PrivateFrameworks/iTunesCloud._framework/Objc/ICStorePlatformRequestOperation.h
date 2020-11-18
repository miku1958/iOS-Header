//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iTunesCloud/ICAsyncOperation.h>

@class ICStorePlatformRequest, ICStoreURLRequest, ICURLSession, NSObject;
@protocol OS_dispatch_queue;

@interface ICStorePlatformRequestOperation : ICAsyncOperation
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    ICStoreURLRequest *_activeURLRequest;
    ICStorePlatformRequestOperation *_strongSelf;
    ICURLSession *_urlSession;
    ICStorePlatformRequest *_platformRequest;
    CDUnknownBlockType _responseHandler;
}

@property (readonly, copy, nonatomic) ICStorePlatformRequest *platformRequest; // @synthesize platformRequest=_platformRequest;
@property (copy, nonatomic) CDUnknownBlockType responseHandler; // @synthesize responseHandler=_responseHandler;

- (void).cxx_destruct;
- (id)_URLRequestWithBaseURL:(id)arg1;
- (void)_enqueueDataRequest:(id)arg1;
- (void)_executePersonalized;
- (void)_executeUnpersonalized;
- (void)_finishWithResponse:(id)arg1 error:(id)arg2;
- (id)_requestContext;
- (void)cancel;
- (void)execute;
- (void)finishWithError:(id)arg1;
- (id)initWithPlatformRequest:(id)arg1;
- (id)initWithPlatformRequest:(id)arg1 usingURLSession:(id)arg2;

@end
