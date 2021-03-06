//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreUtils/NSURLSessionDelegate-Protocol.h>

@class NSMutableDictionary, NSString, NSURLSession;
@protocol OS_dispatch_queue;

@interface CUXMLRPCClient : NSObject <NSURLSessionDelegate>
{
    NSMutableDictionary *_tasks;
    struct LogCategory *_ucat;
    NSURLSession *_urlSession;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
    NSString *_label;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property (copy, nonatomic) NSString *label; // @synthesize label=_label;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_activate;
- (void)_handleResponse:(id)arg1 data:(id)arg2 error:(id)arg3 identifier:(id)arg4 responseHandler:(CDUnknownBlockType)arg5;
- (void)_invalidate;
- (void)_requestURL:(id)arg1 methodName:(id)arg2 params:(id)arg3 httpHeaders:(id)arg4 identifier:(id)arg5 responseHandler:(CDUnknownBlockType)arg6;
- (void)activate;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void)requestURL:(id)arg1 methodName:(id)arg2 params:(id)arg3 httpHeaders:(id)arg4 identifier:(id *)arg5 responseHandler:(CDUnknownBlockType)arg6;

@end

