//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSOperation.h>

@interface SCKAsyncBlockOperation : NSOperation
{
    BOOL _executing;
    BOOL _finished;
    CDUnknownBlockType _block;
}

@property (readonly, copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;

- (void).cxx_destruct;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (BOOL)isAsynchronous;
- (BOOL)isExecuting;
- (BOOL)isFinished;
- (void)start;

@end
