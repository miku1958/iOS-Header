//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SGSqliteDatabaseSharedLock : NSObject
{
    struct _opaque_pthread_mutex_t _lock;
    long long _writeTransactionDepth;
}

@property (readonly, nonatomic) long long writeTransactionDepth; // @synthesize writeTransactionDepth=_writeTransactionDepth;

- (void)dealloc;
- (id)init;
- (void)runWithLockAcquired:(CDUnknownBlockType)arg1;

@end
