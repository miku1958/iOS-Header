//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MIME/MFScheduler-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface _MFQueueScheduler : NSObject <MFScheduler>
{
    NSObject<OS_dispatch_queue> *_queue;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (BOOL)_prefersImmediateExecution;
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithQueue:(id)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (id)performCancelableBlock:(CDUnknownBlockType)arg1;

@end

