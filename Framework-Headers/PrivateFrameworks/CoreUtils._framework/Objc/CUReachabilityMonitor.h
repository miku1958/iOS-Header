//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreUtils/NSURLSessionDelegate-Protocol.h>
#import <CoreUtils/NSURLSessionDownloadDelegate-Protocol.h>

@class NSString, NSURL, NSURLSession;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface CUReachabilityMonitor : NSObject <NSURLSessionDelegate, NSURLSessionDownloadDelegate>
{
    int _downloadStatus;
    NSObject<OS_dispatch_source> *_timeoutTimer;
    NSURLSession *_urlSession;
    CDUnknownBlockType _completionHandler;
    NSURL *_destinationURL;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    double _timeout;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSURL *destinationURL; // @synthesize destinationURL=_destinationURL;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) double timeout; // @synthesize timeout=_timeout;

- (void).cxx_destruct;
- (void)URLSession:(id)arg1 downloadTask:(id)arg2 didFinishDownloadingToURL:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)_activate;
- (void)_complete:(id)arg1;
- (void)_startDownload;
- (void)activate;
- (id)init;
- (void)invalidate;

@end

