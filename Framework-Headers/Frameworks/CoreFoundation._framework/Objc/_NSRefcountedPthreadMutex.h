//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _NSRefcountedPthreadMutex : NSObject
{
    struct _opaque_pthread_mutex_t lock;
}

- (void)dealloc;
- (void)finalize;
- (id)init;
- (void)lock;
- (void)unlock;

@end

