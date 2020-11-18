//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface IDSInternalQueueController : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    void *_contextKey;
}

+ (id)sharedInstance;
- (void)assertQueueIsCurrent;
- (void)assertQueueIsNotCurrent;
- (void)dealloc;
- (id)init;
- (id)initWithName:(char *)arg1 contextKey:(void *)arg2;
- (BOOL)isQueueCurrent;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1 waitUntilDone:(BOOL)arg2;
- (id)queue;

@end

