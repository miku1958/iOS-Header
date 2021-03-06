//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CFNetwork/__NSCFLocalSessionTask.h>

#import <CFNetwork/NSURLSessionDownloadTaskSubclass-Protocol.h>
#import <CFNetwork/__NSCFLocalDownloadFileOpener-Protocol.h>

@class NSDictionary, NSObject, NSString, __NSCFLocalDownloadFile;
@protocol OS_dispatch_data;

@interface __NSCFLocalDownloadTask : __NSCFLocalSessionTask <NSURLSessionDownloadTaskSubclass, __NSCFLocalDownloadFileOpener>
{
    CDUnknownBlockType _fileCompletion;
    __NSCFLocalDownloadFile *_downloadFile;
    NSObject<OS_dispatch_data> *_writeBuffer;
    unsigned long long _ioSuspend;
    long long _totalWrote;
    CDUnknownBlockType _resumeCallback;
    long long _initialResumeSize;
    NSDictionary *_originalResumeInfo;
    unsigned long long _transientWriteProgress;
    CDUnknownBlockType _afterDidReportProgressOnQueue;
    CDUnknownBlockType _dataAckCompletion;
    int _seqNo;
    BOOL _canWrite;
    BOOL _suppressProgress;
    BOOL _needFinish;
    BOOL _didIssueNeedFinish;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong) __NSCFLocalDownloadFile *downloadFile; // @synthesize downloadFile=_downloadFile;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)_expandResumeData:(id)arg1;
- (const struct __CFDictionary *)_copySocketStreamProperties;
- (void)_onqueue_cancelByProducingResumeData:(CDUnknownBlockType)arg1;
- (void)_onqueue_completeInitialization;
- (void)_onqueue_didReceiveResponse:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_onqueue_willCacheResponse:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)_task_onqueue_didFinish;
- (void)_task_onqueue_didReceiveDispatchData:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)cancelByProducingResumeData:(CDUnknownBlockType)arg1;
- (id)createResumeInformation:(id)arg1;
- (void)dealloc;
- (BOOL)isKindOfClass:(Class)arg1;
- (int)openItemForPath:(id)arg1 mode:(int)arg2;
- (void)terminateExtractorWithError:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

