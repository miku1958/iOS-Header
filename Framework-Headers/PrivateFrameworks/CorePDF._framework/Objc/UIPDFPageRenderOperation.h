//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@class UIPDFPageRenderJob;

@interface UIPDFPageRenderOperation : NSOperation
{
    UIPDFPageRenderJob *_job;
    BOOL executing;
    BOOL finished;
}

@property (strong) UIPDFPageRenderJob *job; // @synthesize job=_job;

- (void)completeOperation;
- (void)dealloc;
- (id)initWithJob:(id)arg1;
- (BOOL)isConcurrent;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)main;
- (void)start;

@end

