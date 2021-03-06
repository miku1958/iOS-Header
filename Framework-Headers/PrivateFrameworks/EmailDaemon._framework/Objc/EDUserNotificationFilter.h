//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@protocol EMBlockedSenderReader, EMVIPReader;

@interface EDUserNotificationFilter : NSObject
{
    id<EMBlockedSenderReader> _blockedSenderReader;
    id<EMVIPReader> _vipReader;
}

@property (readonly, nonatomic) id<EMBlockedSenderReader> blockedSenderReader; // @synthesize blockedSenderReader=_blockedSenderReader;
@property (readonly, nonatomic) id<EMVIPReader> vipReader; // @synthesize vipReader=_vipReader;

- (void).cxx_destruct;
- (BOOL)_messageNeedsNotification:(id)arg1;
- (id)initWithBlockedSenderReader:(id)arg1 vipReader:(id)arg2;
- (id)messagesNeedingNotification:(id)arg1;

@end

