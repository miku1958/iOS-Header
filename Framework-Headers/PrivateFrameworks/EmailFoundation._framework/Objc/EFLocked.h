//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface EFLocked : NSObject
{
    struct os_unfair_lock_s _lock;
    id _object;
}

@property (readonly, nonatomic) struct os_unfair_lock_s *unfairLockForTesting;

- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)initWithObject:(id)arg1;
- (void)performWhileLocked:(CDUnknownBlockType)arg1;
- (void)setObject:(id)arg1;

@end
