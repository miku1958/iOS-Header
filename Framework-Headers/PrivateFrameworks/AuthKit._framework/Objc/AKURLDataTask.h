//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSMutableData, NSURLRequest, NSURLSessionDataTask;

@interface AKURLDataTask : NSObject
{
    BOOL _canceledOrCompleted;
    NSURLRequest *_request;
    unsigned long long _retryCount;
    NSURLSessionDataTask *_underlyingTask;
    CDUnknownBlockType _completionHandler;
    NSMutableData *_receivedData;
    NSError *_lastRetryError;
}

@property (nonatomic) BOOL canceledOrCompleted; // @synthesize canceledOrCompleted=_canceledOrCompleted;
@property (copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (strong, nonatomic) NSError *lastRetryError; // @synthesize lastRetryError=_lastRetryError;
@property (strong, nonatomic) NSMutableData *receivedData; // @synthesize receivedData=_receivedData;
@property (strong, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property (nonatomic) unsigned long long retryCount; // @synthesize retryCount=_retryCount;
@property (strong, nonatomic) NSURLSessionDataTask *underlyingTask; // @synthesize underlyingTask=_underlyingTask;

- (void).cxx_destruct;
- (void)_completeWithError:(id)arg1;
- (id)description;

@end
