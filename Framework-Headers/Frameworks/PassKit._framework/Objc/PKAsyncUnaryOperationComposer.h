//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface PKAsyncUnaryOperationComposer : NSObject
{
    struct os_unfair_lock_s _lock;
    NSMutableArray *_operations;
}

- (void).cxx_destruct;
- (void)addOperation:(CDUnknownBlockType)arg1;
- (id)evaluateWithInput:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)evaluatorWithInput:(id)arg1;
- (id)init;

@end
