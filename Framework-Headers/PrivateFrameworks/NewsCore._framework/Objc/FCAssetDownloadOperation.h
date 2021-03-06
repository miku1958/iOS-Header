//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCNetworkOperation.h>

@class FCNetworkBehaviorMonitor, NSData, NSDictionary, NSError, NSHTTPURLResponse, NSString, NSURL;

@interface FCAssetDownloadOperation : FCNetworkOperation
{
    int _networkEventType;
    NSURL *_URL;
    NSString *_loggingKey;
    long long _downloadDestination;
    NSDictionary *_additionalRequestHTTPHeaders;
    FCNetworkBehaviorMonitor *_networkBehaviorMonitor;
    CDUnknownBlockType _fileDownloadCompletionHandler;
    CDUnknownBlockType _dataDownloadCompletionHandler;
    NSURL *_downloadedFileURL;
    NSData *_downloadedData;
    NSString *_requestUUID;
    double _taskStartTime;
    NSDictionary *_timingData;
    NSString *_responseMIMEType;
    NSHTTPURLResponse *_httpResponse;
    unsigned long long _responseSize;
    NSError *_error;
}

@property (strong, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property (copy, nonatomic) NSDictionary *additionalRequestHTTPHeaders; // @synthesize additionalRequestHTTPHeaders=_additionalRequestHTTPHeaders;
@property (copy, nonatomic) CDUnknownBlockType dataDownloadCompletionHandler; // @synthesize dataDownloadCompletionHandler=_dataDownloadCompletionHandler;
@property (nonatomic) long long downloadDestination; // @synthesize downloadDestination=_downloadDestination;
@property (strong, nonatomic) NSData *downloadedData; // @synthesize downloadedData=_downloadedData;
@property (strong, nonatomic) NSURL *downloadedFileURL; // @synthesize downloadedFileURL=_downloadedFileURL;
@property (strong, nonatomic) NSError *error; // @synthesize error=_error;
@property (copy, nonatomic) CDUnknownBlockType fileDownloadCompletionHandler; // @synthesize fileDownloadCompletionHandler=_fileDownloadCompletionHandler;
@property (strong, nonatomic) NSHTTPURLResponse *httpResponse; // @synthesize httpResponse=_httpResponse;
@property (copy, nonatomic) NSString *loggingKey; // @synthesize loggingKey=_loggingKey;
@property (strong, nonatomic) FCNetworkBehaviorMonitor *networkBehaviorMonitor; // @synthesize networkBehaviorMonitor=_networkBehaviorMonitor;
@property (nonatomic) int networkEventType; // @synthesize networkEventType=_networkEventType;
@property (strong, nonatomic) NSString *requestUUID; // @synthesize requestUUID=_requestUUID;
@property (strong, nonatomic) NSString *responseMIMEType; // @synthesize responseMIMEType=_responseMIMEType;
@property (nonatomic) unsigned long long responseSize; // @synthesize responseSize=_responseSize;
@property (nonatomic) double taskStartTime; // @synthesize taskStartTime=_taskStartTime;
@property (strong, nonatomic) NSDictionary *timingData; // @synthesize timingData=_timingData;

+ (id)sharedURLRequestScheduler;
+ (id)sharedURLSession;
- (void).cxx_destruct;
- (unsigned long long)maxRetries;
- (void)operationWillFinishWithError:(id)arg1;
- (void)performOperation;
- (void)prepareOperation;
- (id)throttleGroup;
- (BOOL)validateOperation;

@end

