//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <GeoServices/GEOResourceLoadOperation-Protocol.h>
#import <GeoServices/NSURLSessionDataDelegate-Protocol.h>

@class GEOApplicationAuditToken, GEOReportedProgress, NSData, NSDate, NSMutableData, NSProgress, NSString, NSURL, NSURLSession, NSURLSessionTask;
@protocol GEORequestCounterTicket, OS_dispatch_queue, OS_os_log;

@interface GEOResourceLoadOperation : NSObject <NSURLSessionDataDelegate, GEOResourceLoadOperation>
{
    NSURL *_url;
    NSURL *_proxyURL;
    CDUnknownBlockType _completionHandler;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    NSURLSession *_session;
    NSURLSessionTask *_task;
    id<GEORequestCounterTicket> _requestCounterTicket;
    NSString *_eTag;
    NSMutableData *_data;
    BOOL _expectsPartialContent;
    GEOApplicationAuditToken *_auditToken;
    NSURL *_authProxyURL;
    struct os_unfair_lock_s _lock;
    BOOL _requiresWiFi;
    BOOL _preferDirectNetworking;
    GEOReportedProgress *_progress;
    NSObject<OS_os_log> *_log;
    NSString *_serviceAddress;
    NSDate *_starttime;
}

@property (readonly, nonatomic) NSData *data; // @synthesize data=_data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL preferDirectNetworking; // @synthesize preferDirectNetworking=_preferDirectNetworking;
@property (readonly) NSProgress *progress;
@property (nonatomic) BOOL requiresWiFi; // @synthesize requiresWiFi=_requiresWiFi;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didFinishCollectingMetrics:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)cancel;
- (void)dealloc;
- (id)initWithResource:(id)arg1 existingPartialData:(id)arg2 eTag:(id)arg3 auditToken:(id)arg4 baseURL:(id)arg5 alternateURLs:(id)arg6 proxyURL:(id)arg7 log:(id)arg8;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1 callbackQueue:(id)arg2;

@end
