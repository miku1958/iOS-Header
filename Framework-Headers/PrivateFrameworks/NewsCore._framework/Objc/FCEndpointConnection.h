//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCAppConfigurationObserving-Protocol.h>
#import <NewsCore/NSURLSessionDelegate-Protocol.h>

@class FCAsyncSerialQueue, NSString, NSURL, NSURLSession;
@protocol FCContentContext;

@interface FCEndpointConnection : NSObject <NSURLSessionDelegate, FCAppConfigurationObserving>
{
    id<FCContentContext> _context;
    NSURL *_baseURL;
    NSURLSession *_session;
    FCAsyncSerialQueue *_requestSerialQueue;
}

@property (copy) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property (strong, nonatomic) id<FCContentContext> context; // @synthesize context=_context;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) FCAsyncSerialQueue *requestSerialQueue; // @synthesize requestSerialQueue=_requestSerialQueue;
@property (strong, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property (readonly) Class superclass;

+ (id)_errorByUpdatingRetryStatusForError:(id)arg1;
+ (id)_errorForStatus:(long long)arg1 url:(id)arg2;
- (void).cxx_destruct;
- (id)initWithContext:(id)arg1;
- (void)performHTTPRequestWithURL:(id)arg1 method:(id)arg2 data:(id)arg3 contentType:(id)arg4 priority:(float)arg5 callbackQueue:(id)arg6 completion:(CDUnknownBlockType)arg7;

@end

