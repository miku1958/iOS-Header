//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <AssistantServices/AFClientLiteClientCommandHandling-Protocol.h>

@protocol OS_dispatch_queue;

@interface AFClientLite : NSObject <AFClientLiteClientCommandHandling>
{
    NSObject<OS_dispatch_queue> *_queue;
    CDUnknownBlockType _commandHandler;
}

- (void).cxx_destruct;
- (void)_handleCommand:(id)arg1 isOneWay:(BOOL)arg2 commandHandler:(CDUnknownBlockType)arg3 completion:(CDUnknownBlockType)arg4;
- (void)handleCommand:(id)arg1 commandHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (oneway void)handleCommand:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleOneWayCommand:(id)arg1 commandHandler:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;

@end

