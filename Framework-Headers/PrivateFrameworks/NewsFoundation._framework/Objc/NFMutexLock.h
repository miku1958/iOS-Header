//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsFoundation/NFLocking-Protocol.h>

@interface NFMutexLock : NSObject <NFLocking>
{
    struct _opaque_pthread_mutex_t {
        long long __sig;
        char __opaque[56];
    } _lock;
}

- (void)dealloc;
- (id)init;
- (id)initWithOptions:(unsigned long long)arg1;
- (void)lock;
- (void)performWithLockSync:(CDUnknownBlockType)arg1;
- (void)unlock;

@end
