//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface RWIProtocolConsoleDomainEventDispatcher : NSObject
{
    struct AugmentableInspectorController *_controller;
}

- (id)initWithController:(struct AugmentableInspectorController *)arg1;
- (void)messageAddedWithMessage:(id)arg1;
- (void)messageRepeatCountUpdatedWithCount:(int)arg1;
- (void)messagesCleared;

@end

