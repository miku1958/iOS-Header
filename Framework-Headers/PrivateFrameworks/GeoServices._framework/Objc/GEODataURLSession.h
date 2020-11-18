//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEODataSession-Protocol.h>
#import <GeoServices/NSURLSessionDataDelegate-Protocol.h>

@class GEODataURLSessionList, GEODataURLSessionTaskQueue, NSMutableDictionary, NSOperationQueue, NSString;
@protocol OS_dispatch_queue, OS_dispatch_source;

__attribute__((visibility("hidden")))
@interface GEODataURLSession : NSObject <NSURLSessionDataDelegate, GEODataSession>
{
    GEODataURLSessionList *_urlSessions;
    NSObject<OS_dispatch_queue> *_sessionIsolation;
    NSOperationQueue *_sessionIsolationOperationQueue;
    NSMutableDictionary *_sessionTasks;
    GEODataURLSessionTaskQueue *_tileTaskQueue;
    NSObject<OS_dispatch_source> *_memoryNotificationEventSource;
    unsigned int _nextSessionIdentifier;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (nonatomic) unsigned int nextSessionIdentifier; // @synthesize nextSessionIdentifier=_nextSessionIdentifier;
@property (readonly, nonatomic) NSObject<OS_dispatch_queue> *sessionIsolation; // @synthesize sessionIsolation=_sessionIsolation;
@property (readonly, nonatomic) NSOperationQueue *sessionIsolationOperationQueue; // @synthesize sessionIsolationOperationQueue=_sessionIsolationOperationQueue;
@property (readonly, nonatomic) NSMutableDictionary *sessionTasks; // @synthesize sessionTasks=_sessionTasks;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) GEODataURLSessionTaskQueue *tileTaskQueue;
@property (readonly, nonatomic) GEODataURLSessionList *urlSessions; // @synthesize urlSessions=_urlSessions;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 _willSendRequestForEstablishedConnection:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)_configureTask:(id)arg1 withRequest:(id)arg2;
- (id)activeSessionIdentifiers;
- (void)configureTask:(id)arg1 withRequest:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4;
- (id)createNewURLSessionWithRequest:(id)arg1;
- (void)didReceiveMemmoryPressureWarning;
- (id)init;
- (void)pruneInactiveSessions;
- (id)removeTaskForURLSession:(id)arg1 task:(id)arg2;
- (id)taskForURLSession:(id)arg1 task:(id)arg2;
- (id)taskWithRequest:(id)arg1 rules:(id)arg2 delegate:(id)arg3 delegateQueue:(id)arg4;
- (void)tearDown;
- (id)urlSessionForRequest:(id)arg1;

@end

