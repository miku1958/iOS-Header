//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsFoundation/CNScheduler-Protocol.h>

@class NSString;
@protocol CNScheduler;

@interface CNTimeProfilingSchedulerDecorator : NSObject <CNScheduler>
{
    id<CNScheduler> _scheduler;
    unsigned long long _blockCounter;
}

@property (readonly, nonatomic) unsigned long long blockCounter; // @synthesize blockCounter=_blockCounter;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<CNScheduler> scheduler; // @synthesize scheduler=_scheduler;
@property (readonly) Class superclass;
@property (readonly) double timestamp;

+ (id)os_log;
- (void).cxx_destruct;
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2;
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2 qualityOfService:(unsigned long long)arg3;
- (id)initWithScheduler:(id)arg1;
- (unsigned long long)nextBlockNumber;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)performBlock:(CDUnknownBlockType)arg1 qualityOfService:(unsigned long long)arg2;
- (id)performCancelableBlock:(CDUnknownBlockType)arg1;
- (id)performCancelableBlock:(CDUnknownBlockType)arg1 qualityOfService:(unsigned long long)arg2;

@end

