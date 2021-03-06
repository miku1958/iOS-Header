//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, NSMutableArray;
@protocol OS_dispatch_queue;

@interface AKPromise : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    BOOL _completed;
    id _value;
    NSError *_error;
    NSMutableArray *_callbacks;
}

- (void).cxx_destruct;
- (id)_chain:(CDUnknownBlockType)arg1;
- (void)_completeWithValue:(id)arg1 error:(id)arg2;
- (void)_startWithBlock:(CDUnknownBlockType)arg1;
- (id)catch:(CDUnknownBlockType)arg1;
- (id)initWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithError:(id)arg1;
- (id)initWithValue:(id)arg1;
- (void)onComplete:(CDUnknownBlockType)arg1;
- (id)then:(CDUnknownBlockType)arg1;

@end

