//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSThread, NSURLSessionDataTask;
@protocol NSURLSessionDataDelegate;

@interface APNSURLSessionTaskInfo : NSObject
{
    NSURLSessionDataTask *_task;
    id<NSURLSessionDataDelegate> _delegate;
    NSThread *_thread;
    NSArray *_modes;
}

@property (weak) id<NSURLSessionDataDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong) NSArray *modes; // @synthesize modes=_modes;
@property (readonly) NSURLSessionDataTask *task; // @synthesize task=_task;
@property (strong) NSThread *thread; // @synthesize thread=_thread;

- (void).cxx_destruct;
- (id)initWithTask:(id)arg1 delegate:(id)arg2 modes:(id)arg3;
- (void)invalidate;
- (void)perform:(CDUnknownBlockType)arg1 waitUntilDone:(BOOL)arg2;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)performBlockAndWait:(CDUnknownBlockType)arg1;
- (void)performBlockOnClientThread:(CDUnknownBlockType)arg1;

@end
