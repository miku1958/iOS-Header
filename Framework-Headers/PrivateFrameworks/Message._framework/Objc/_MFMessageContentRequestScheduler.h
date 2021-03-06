//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Message/EFScheduler-Protocol.h>

@class EDMessagePersistence, NSString;
@protocol EFScheduler;

@interface _MFMessageContentRequestScheduler : NSObject <EFScheduler>
{
    unsigned long long _requestID;
    id<EFScheduler> _scheduler;
    EDMessagePersistence *_messagePersistence;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) EDMessagePersistence *messagePersistence; // @synthesize messagePersistence=_messagePersistence;
@property (strong, nonatomic) id<EFScheduler> scheduler; // @synthesize scheduler=_scheduler;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)afterDelay:(double)arg1 performBlock:(CDUnknownBlockType)arg2;
- (id)initWithScheduler:(id)arg1 messagePersistence:(id)arg2;
- (id)initWithScheduler:(id)arg1 requestID:(unsigned long long)arg2 messagePersistence:(id)arg3;
- (void)performBlock:(CDUnknownBlockType)arg1;
- (void)performBlockWithActivity:(CDUnknownBlockType)arg1 requestID:(unsigned long long)arg2;
- (id)performCancelableBlock:(CDUnknownBlockType)arg1;
- (void)performSyncBarrierBlock:(CDUnknownBlockType)arg1;
- (void)performSyncBlock:(CDUnknownBlockType)arg1;
- (void)performVoucherPreservingBlock:(CDUnknownBlockType)arg1;
- (id)performWithObject:(id)arg1;

@end

