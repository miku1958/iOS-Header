//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface UMQueue : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;

+ (id)client;
+ (id)server;
+ (id)userList;
- (void).cxx_destruct;
- (void)_executeWithSelf:(id)arg1 block:(CDUnknownBlockType)arg2 synchronously:(BOOL)arg3;
- (void)executeWithSelf:(id)arg1 asynchronously:(CDUnknownBlockType)arg2;
- (void)executeWithSelf:(id)arg1 synchronously:(CDUnknownBlockType)arg2;

@end

