//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

#import <AppleAccount/NSURLConnectionDelegate-Protocol.h>

@class AARequest, AAResponse, AKAppleIDSession, NSHTTPURLResponse, NSMutableData, NSObject, NSString, NSURLConnection;
@protocol OS_dispatch_queue;

@interface AARequester : NSOperation <NSURLConnectionDelegate>
{
    AARequest *_request;
    AAResponse *_response;
    NSURLConnection *_urlConnection;
    CDUnknownBlockType _handler;
    NSMutableData *_data;
    NSHTTPURLResponse *_httpResponse;
    Class _responseClass;
    BOOL _isExecuting;
    BOOL _isFinished;
    BOOL _canceled;
    AKAppleIDSession *_appleIDSession;
    BOOL _shouldRetry;
    BOOL _isCanceled;
    NSObject<OS_dispatch_queue> *_handlerQueue;
}

@property (getter=isCanceled) BOOL canceled; // @synthesize canceled=_isCanceled;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (getter=isFinished) BOOL finished; // @synthesize finished=_isFinished;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *handlerQueue; // @synthesize handlerQueue=_handlerQueue;
@property (readonly) unsigned long long hash;
@property (nonatomic, getter=isExecuting) BOOL isExecuting; // @synthesize isExecuting=_isExecuting;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)__unsafe_callHandler;
- (void)_callHandler;
- (void)_kickOffRequest:(id)arg1;
- (void)cancel;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)connection:(id)arg1 willSendRequestForAuthenticationChallenge:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (id)initWithRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)start;

@end

