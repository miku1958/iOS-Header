//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AdPlatformsCommon/NSLocking-Protocol.h>

@interface APUnfairRecursiveLock : NSObject <NSLocking>
{
    struct os_unfair_recursive_lock_s _lock;
}

- (id)init;
- (void)lock;
- (void)unlock;

@end
