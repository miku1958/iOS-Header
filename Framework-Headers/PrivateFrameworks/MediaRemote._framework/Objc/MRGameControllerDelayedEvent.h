//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface MRGameControllerDelayedEvent : NSObject
{
    unsigned long long _lastDownEvent;
    CDUnknownBlockType _sendEventBlock;
}

@property (nonatomic) unsigned long long lastDownEvent; // @synthesize lastDownEvent=_lastDownEvent;
@property (copy, nonatomic) CDUnknownBlockType sendEventBlock; // @synthesize sendEventBlock=_sendEventBlock;

- (void).cxx_destruct;
- (void)send;

@end

