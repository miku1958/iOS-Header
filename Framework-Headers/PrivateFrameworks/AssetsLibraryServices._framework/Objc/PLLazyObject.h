//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PLLazyObject : NSObject
{
    BOOL _shouldRetryBlockOnNil;
    struct os_unfair_lock_s _lock;
    CDUnknownBlockType _block;
    id _object;
}

@property (readonly) id objectValue;

- (void).cxx_destruct;
- (void)accessLazyObjectAtomically:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithObject:(id)arg1;
- (id)initWithRetriableBlock:(CDUnknownBlockType)arg1;
- (id)initWithRetry:(BOOL)arg1 block:(CDUnknownBlockType)arg2;
- (void)invalidate;
- (void)invalidateWithHandler:(CDUnknownBlockType)arg1;

@end
