//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_queue;

@interface CFCommandQueuer : NSObject
{
    NSObject<OS_dispatch_queue> *_commandQueue;
}

@property (strong) NSObject<OS_dispatch_queue> *commandQueue; // @synthesize commandQueue=_commandQueue;

- (void).cxx_destruct;
- (void)dispatchBlock:(CDUnknownBlockType)arg1;
- (void)dispatchCommand:(id)arg1 isOneWay:(BOOL)arg2 withServiceHelper:(id)arg3 reply:(CDUnknownBlockType)arg4;
- (void)dispatchCommand:(id)arg1 withServiceHelper:(id)arg2 reply:(CDUnknownBlockType)arg3;
- (void)dispatchOneWayCommand:(id)arg1 withServiceHelper:(id)arg2;
- (void)initQueuesWithIdentifier:(id)arg1;
- (id)initWithCommandIdentifier:(id)arg1;

@end
