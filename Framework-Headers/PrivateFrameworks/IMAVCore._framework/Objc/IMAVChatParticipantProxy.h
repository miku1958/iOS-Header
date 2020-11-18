//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class IMAVChat, IMAVChatProxy, NSDictionary, NSString;

@interface IMAVChatParticipantProxy : NSObject
{
    NSDictionary *_info;
    IMAVChatProxy *_chat;
}

@property (readonly, nonatomic) BOOL _inviteDelivered;
@property (readonly, strong, nonatomic) IMAVChat *avChat;
@property (readonly, strong, nonatomic) NSString *name;

- (void)dealloc;
- (void)forwardInvocation:(id)arg1;
- (id)initWithDictionary:(id)arg1 chat:(id)arg2;
- (BOOL)isLocalParticipant;

@end

