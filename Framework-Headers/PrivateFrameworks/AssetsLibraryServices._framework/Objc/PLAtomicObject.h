//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PLAtomicObject : NSObject
{
    struct os_unfair_lock_s _lock;
    id _object;
}

- (void).cxx_destruct;
- (void)atomicallyPerformBlockAndWait:(CDUnknownBlockType)arg1;
- (id)initWithObject:(id)arg1;
- (void)invalidateWithHandler:(CDUnknownBlockType)arg1;

@end
