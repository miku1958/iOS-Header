//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class NSURLRequest, NSURLSessionDownloadTask, SFStartNetworkSearchFeedback;

@interface STSImageDownloadOperation : NSOperation
{
    NSURLSessionDownloadTask *_task;
    CDUnknownBlockType _begin;
    CDUnknownBlockType _progress;
    CDUnknownBlockType _completion;
    SFStartNetworkSearchFeedback *_feedback;
    double _startTime;
    BOOL _finished;
    BOOL _executing;
    NSURLRequest *_request;
}

@property (nonatomic, getter=isExecuting) BOOL executing; // @synthesize executing=_executing;
@property (nonatomic, getter=isFinished) BOOL finished; // @synthesize finished=_finished;
@property (readonly, nonatomic) NSURLRequest *request; // @synthesize request=_request;

- (void).cxx_destruct;
- (void)_markAsCompleted;
- (void)cancel;
- (void)completedWithResponse:(id)arg1 location:(id)arg2 timingData:(id)arg3 error:(id)arg4;
- (id)initWithRequest:(id)arg1 session:(id)arg2 begin:(CDUnknownBlockType)arg3 progress:(CDUnknownBlockType)arg4 completion:(CDUnknownBlockType)arg5;
- (BOOL)isAsynchronous;
- (void)main;
- (void)start;
- (void)updateProgressWithTotalBytesWritten:(long long)arg1 totalBytesExpectedToWrite:(long long)arg2;

@end
