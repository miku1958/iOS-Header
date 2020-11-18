//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MMCS/NSURLSessionDataDelegate-Protocol.h>
#import <MMCS/NSURLSessionDataDelegatePrivate-Protocol.h>
#import <MMCS/NSURLSessionDelegate-Protocol.h>
#import <MMCS/NSURLSessionTaskDelegate-Protocol.h>

@class NSMutableDictionary, NSOperationQueue, NSString, NSURLSession, NSURLSessionConfiguration;

__attribute__((visibility("hidden")))
@interface MMCSHTTPSession : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate, NSURLSessionDataDelegatePrivate>
{
    BOOL _isBackground;
    NSString *_sessionName;
    NSString *_sessionConfigurationId;
    NSURLSession *_urlSession;
    NSURLSessionConfiguration *_urlSessionConfiguration;
    NSOperationQueue *_operationQueue;
    NSMutableDictionary *_contextsForTasks;
}

@property (strong, nonatomic) NSMutableDictionary *contextsForTasks; // @synthesize contextsForTasks=_contextsForTasks;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property BOOL isBackground; // @synthesize isBackground=_isBackground;
@property (strong, nonatomic) NSOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property (strong, nonatomic) NSString *sessionConfigurationId; // @synthesize sessionConfigurationId=_sessionConfigurationId;
@property (strong, nonatomic) NSString *sessionName; // @synthesize sessionName=_sessionName;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property (strong, nonatomic) NSURLSessionConfiguration *urlSessionConfiguration; // @synthesize urlSessionConfiguration=_urlSessionConfiguration;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 _willRetryBackgroundDataTask:(id)arg2 withError:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didSendBodyData:(long long)arg3 totalBytesSent:(long long)arg4 totalBytesExpectedToSend:(long long)arg5;
- (void)URLSession:(id)arg1 task:(id)arg2 needNewBodyStream:(CDUnknownBlockType)arg3;
- (id)dataTaskWithRequest:(id)arg1 uuid:(id)arg2 forHTTPContext:(id)arg3;
- (id)initWithName:(id)arg1 sessionConfigurationId:(id)arg2 configuration:(id)arg3;
- (void)invalidateAndCancel;
- (id)mmcsHTTPContextForTask:(id)arg1 reason:(id)arg2;

@end

