//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;
@protocol OS_dispatch_queue;

@interface PPKVOObserver : NSObject
{
    NSString *_name;
    NSString *_key;
    id _observee;
    CDUnknownBlockType _handler;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)observerWithName:(id)arg1 object:(id)arg2 key:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithName:(id)arg1 key:(id)arg2 observee:(id)arg3 handler:(CDUnknownBlockType)arg4;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

@end

