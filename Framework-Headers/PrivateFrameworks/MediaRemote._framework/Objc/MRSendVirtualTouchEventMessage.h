//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaRemote/MRProtocolMessage.h>

__attribute__((visibility("hidden")))
@interface MRSendVirtualTouchEventMessage : MRProtocolMessage
{
}

@property (readonly, nonatomic) struct _MRHIDTouchEvent event;
@property (readonly, nonatomic) unsigned long long virtualDeviceID;

- (id)initWithTouchEvent:(struct _MRHIDTouchEvent)arg1 virtualDeviceID:(unsigned long long)arg2;
- (unsigned long long)priority;
- (unsigned long long)type;

@end

