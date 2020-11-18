//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DASubCal/NSURLSessionDataDelegate-Protocol.h>
#import <DASubCal/NSURLSessionDelegate-Protocol.h>
#import <DASubCal/NSURLSessionTaskDelegate-Protocol.h>

@class DAStatusReport, NSDate, NSFileHandle, NSMutableData, NSString, NSTimer, NSURL, NSURLSession, NSURLSessionDataTask;
@protocol SubCalURLRequestDelegate;

@interface SubCalURLRequest : NSObject <NSURLSessionDelegate, NSURLSessionTaskDelegate, NSURLSessionDataDelegate>
{
    BOOL _useFileCache;
    BOOL _wasUserRequested;
    BOOL _sendDataUpdateCallback;
    BOOL _finished;
    NSURL *_url;
    id<SubCalURLRequestDelegate> _delegate;
    NSString *_username;
    NSString *_password;
    double _timestamp;
    NSString *_filePath;
    DAStatusReport *_statusReport;
    NSURLSession *_session;
    NSURLSessionDataTask *_task;
    NSMutableData *_connectionData;
    NSFileHandle *_fileHandle;
    NSDate *_startTime;
    NSTimer *_idleTimer;
    NSString *_startRunloopDescriptionString;
}

@property (strong, nonatomic) NSMutableData *connectionData; // @synthesize connectionData=_connectionData;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SubCalURLRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSFileHandle *fileHandle; // @synthesize fileHandle=_fileHandle;
@property (strong, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property (nonatomic) BOOL finished; // @synthesize finished=_finished;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSTimer *idleTimer; // @synthesize idleTimer=_idleTimer;
@property (copy, nonatomic) NSString *password; // @synthesize password=_password;
@property (nonatomic) BOOL sendDataUpdateCallback; // @synthesize sendDataUpdateCallback=_sendDataUpdateCallback;
@property (strong, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property (strong, nonatomic) NSString *startRunloopDescriptionString; // @synthesize startRunloopDescriptionString=_startRunloopDescriptionString;
@property (strong, nonatomic) NSDate *startTime; // @synthesize startTime=_startTime;
@property (strong, nonatomic) DAStatusReport *statusReport; // @synthesize statusReport=_statusReport;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSURLSessionDataTask *task; // @synthesize task=_task;
@property (nonatomic) double timestamp; // @synthesize timestamp=_timestamp;
@property (copy, nonatomic) NSURL *url; // @synthesize url=_url;
@property (nonatomic) BOOL useFileCache; // @synthesize useFileCache=_useFileCache;
@property (copy, nonatomic) NSString *username; // @synthesize username=_username;
@property (nonatomic) BOOL wasUserRequested; // @synthesize wasUserRequested=_wasUserRequested;

+ (id)_cachedICSFilesDirectory;
+ (void)_initializeFileCache;
- (void).cxx_destruct;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveData:(id)arg3;
- (void)URLSession:(id)arg1 dataTask:(id)arg2 didReceiveResponse:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 didBecomeInvalidWithError:(id)arg2;
- (void)URLSession:(id)arg1 didReceiveChallenge:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didCompleteWithError:(id)arg3;
- (void)URLSession:(id)arg1 task:(id)arg2 didReceiveChallenge:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)URLSession:(id)arg1 task:(id)arg2 willPerformHTTPRedirection:(id)arg3 newRequest:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (BOOL)_canAuthenticateAgainstProtectionSpace:(id)arg1;
- (void)_cancelIdleTimer;
- (void)_createIdleTimer;
- (void)_extendIdleTimer;
- (void)_finishWithError:(id)arg1;
- (void)_handleAuthenticationChallenge:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)_idleTimerFired;
- (void)_markEndTime;
- (void)_markStartTime;
- (void)_openFileHandle;
- (void)_receivedDataForFile:(id)arg1;
- (void)_respondToChallenge:(id)arg1 withCredential:(id)arg2 noCredentialBehavior:(int)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)_setHeadersOnRequest:(id)arg1;
- (void)cancel;
- (id)initWithURL:(id)arg1 wasUserRequested:(BOOL)arg2;
- (void)startConnection;

@end

