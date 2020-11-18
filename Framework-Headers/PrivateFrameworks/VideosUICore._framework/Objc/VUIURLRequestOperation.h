//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUICore/VUIAsynchronousOperation.h>

@class NSData, NSError, NSURLRequest, NSURLResponse, NSURLSession, NSURLSessionDataTask;

@interface VUIURLRequestOperation : VUIAsynchronousOperation
{
    NSURLRequest *_request;
    NSData *_data;
    NSURLResponse *_response;
    NSError *_error;
    NSURLSession *_session;
    NSURLSessionDataTask *_task;
    unsigned long long _taskStartTime;
}

@property (copy, nonatomic) NSData *data; // @synthesize data=_data;
@property (readonly, nonatomic) unsigned long long elapsedTimeInMilliseconds;
@property (copy, nonatomic) NSError *error; // @synthesize error=_error;
@property (strong, nonatomic) NSURLRequest *request; // @synthesize request=_request;
@property (copy, nonatomic) NSURLResponse *response; // @synthesize response=_response;
@property (copy, nonatomic) NSURLSession *session; // @synthesize session=_session;
@property (copy, nonatomic) NSURLSessionDataTask *task; // @synthesize task=_task;
@property (nonatomic) unsigned long long taskStartTime; // @synthesize taskStartTime=_taskStartTime;

- (void).cxx_destruct;
- (void)_handleResponse:(id)arg1 responseData:(id)arg2 error:(id)arg3;
- (void)cancel;
- (void)executionDidBegin;
- (id)init;
- (id)initWithRequest:(id)arg1;
- (id)initWithRequest:(id)arg1 session:(id)arg2;

@end
