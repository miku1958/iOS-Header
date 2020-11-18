//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSHTTPURLResponse, NSHashTable, NSMutableData, NSString, NSURL, NSURLSessionTask;
@protocol OS_dispatch_queue, TPSURLSessionDelegate;

@interface TPSURLSessionTask : NSObject
{
    NSObject<OS_dispatch_queue> *_sessionTaskDelegateQueue;
    BOOL _cancelled;
    BOOL _isCacheData;
    struct TPSURLSessionDelegateResponds _delegateResponds;
    id<TPSURLSessionDelegate> _networkDelegate;
    unsigned long long _downloadTaskTotalBytes;
    unsigned long long _retryCount;
    long long _dataType;
    NSString *_identifier;
    id _formattedData;
    NSURLSessionTask *_task;
    NSHTTPURLResponse *_response;
    NSString *_lastModified;
    NSMutableData *_dataTaskData;
    NSError *_dataError;
    NSHashTable *_sessionTaskDelegates;
}

@property (readonly, nonatomic) NSURL *URL;
@property (nonatomic, getter=isCancelled) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property (strong, nonatomic) NSError *dataError; // @synthesize dataError=_dataError;
@property (strong, nonatomic) NSMutableData *dataTaskData; // @synthesize dataTaskData=_dataTaskData;
@property (nonatomic) long long dataType; // @synthesize dataType=_dataType;
@property (nonatomic) struct TPSURLSessionDelegateResponds delegateResponds; // @synthesize delegateResponds=_delegateResponds;
@property (nonatomic) unsigned long long downloadTaskTotalBytes; // @synthesize downloadTaskTotalBytes=_downloadTaskTotalBytes;
@property (strong, nonatomic) id formattedData; // @synthesize formattedData=_formattedData;
@property (strong, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (nonatomic) BOOL isCacheData; // @synthesize isCacheData=_isCacheData;
@property (strong, nonatomic) NSString *lastModified; // @synthesize lastModified=_lastModified;
@property (weak, nonatomic) id<TPSURLSessionDelegate> networkDelegate; // @synthesize networkDelegate=_networkDelegate;
@property (nonatomic) float priority; // @dynamic priority;
@property (strong, nonatomic) NSHTTPURLResponse *response; // @synthesize response=_response;
@property (nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property (strong, nonatomic) NSHashTable *sessionTaskDelegates; // @synthesize sessionTaskDelegates=_sessionTaskDelegates;
@property (strong, nonatomic) NSURLSessionTask *task; // @synthesize task=_task;

+ (struct TPSURLSessionDelegateResponds)delegateRespondsWithDelegate:(id)arg1;
- (void).cxx_destruct;
- (void)cancel;
- (void)dealloc;
- (void)didCompleteWithError:(id)arg1;
- (id)initWithSessionTask:(id)arg1 identifier:(id)arg2;
- (void)registerDelegate:(id)arg1;
- (void)resume;
- (void)unregisterDelegate:(id)arg1;

@end
