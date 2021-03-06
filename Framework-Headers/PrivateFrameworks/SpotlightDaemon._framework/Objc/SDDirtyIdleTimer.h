//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue, OS_dispatch_source, OS_os_transaction;

@interface SDDirtyIdleTimer : NSObject
{
    unsigned int _resetCount;
    unsigned int _dirtyCount;
    unsigned long long _idleTimeout;
    unsigned long long _dirtyTimeout;
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _block;
    NSObject<OS_dispatch_source> *_idleTimer;
    unsigned long long _idleStartTime;
    NSObject<OS_os_transaction> *_transaction;
}

@property (copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property (nonatomic) unsigned int dirtyCount; // @synthesize dirtyCount=_dirtyCount;
@property (nonatomic) unsigned long long dirtyTimeout; // @synthesize dirtyTimeout=_dirtyTimeout;
@property (nonatomic) unsigned long long idleStartTime; // @synthesize idleStartTime=_idleStartTime;
@property (nonatomic) unsigned long long idleTimeout; // @synthesize idleTimeout=_idleTimeout;
@property (strong, nonatomic) NSObject<OS_dispatch_source> *idleTimer; // @synthesize idleTimer=_idleTimer;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property (nonatomic) unsigned int resetCount; // @synthesize resetCount=_resetCount;
@property (strong, nonatomic) NSObject<OS_os_transaction> *transaction; // @synthesize transaction=_transaction;

- (void).cxx_destruct;
- (void)_stop;
- (void)cancel;
- (id)description;
- (void)dirty;
- (id)initWithQueue:(id)arg1 timeoutBlock:(CDUnknownBlockType)arg2;

@end

