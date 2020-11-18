//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <AppleIDAuthSupport/NSURLSessionDataDelegate-Protocol.h>

@class NSError, NSMutableData, NSMutableURLRequest, NSString, NSURLSession, NSURLSessionDataTask;
@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface AIASRequest : NSObject <NSURLSessionDataDelegate>
{
    BOOL _done;
    BOOL _success;
    NSMutableURLRequest *_URLRequest;
    NSMutableData *_data;
    struct __AppleIDAuthSupportData *_context;
    NSObject<OS_dispatch_semaphore> *_sema;
    NSURLSession *_session;
    NSURLSessionDataTask *_task;
    NSError *_error;
}

@property (strong) NSMutableURLRequest *URLRequest; // @synthesize URLRequest=_URLRequest;
@property struct __AppleIDAuthSupportData *context; // @synthesize context=_context;
@property (strong) NSMutableData *data; // @synthesize data=_data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL done; // @synthesize done=_done;
@property (strong) NSError *error; // @synthesize error=_error;
@property (readonly) unsigned long long hash;
@property (strong) NSObject<OS_dispatch_semaphore> *sema; // @synthesize sema=_sema;
@property (strong) NSURLSession *session; // @synthesize session=_session;
@property BOOL success; // @synthesize success=_success;
@property (readonly) Class superclass;
@property (strong) NSURLSessionDataTask *task; // @synthesize task=_task;

- (void).cxx_destruct;
- (id)initWithURL:(id)arg1 data:(struct __CFDictionary *)arg2 clientInfo:(id)arg3 proxiedClientInfo:(id)arg4 companionClientInfo:(id)arg5;
- (void)resume;

@end

