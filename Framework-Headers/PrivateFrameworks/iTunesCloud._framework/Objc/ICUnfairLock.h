//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface ICUnfairLock : NSObject
{
    struct os_unfair_lock_s _lock;
}

- (id)init;
- (void)lock;
- (void)lockWithBlock:(CDUnknownBlockType)arg1;
- (void)unlock;

@end
