//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface FMReadWriteLock : NSObject
{
    NSString *_lockName;
    struct _opaque_pthread_rwlock_t _lock;
}

@property (nonatomic) struct _opaque_pthread_rwlock_t lock; // @synthesize lock=_lock;
@property (strong, nonatomic) NSString *lockName; // @synthesize lockName=_lockName;

- (void).cxx_destruct;
- (id)init;
- (id)initWithLockName:(id)arg1;
- (void)performWithReadLock:(CDUnknownBlockType)arg1;
- (void)performWithWriteLock:(CDUnknownBlockType)arg1;

@end
