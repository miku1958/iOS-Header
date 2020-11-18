//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NNMKProtoMessageAdditions, NSMutableArray;

@interface NNMKAdditionResult : NSObject
{
    BOOL _receivedOldMessages;
    NNMKProtoMessageAdditions *_protoMessagesWithNotificationPriority;
    NNMKProtoMessageAdditions *_protoMessagesWithDefaultPriority;
    NSMutableArray *_messageIdsWithNotificationPriority;
    NSMutableArray *_messageIdsWithDefaultPriority;
    unsigned long long _resendInterval;
}

@property (strong, nonatomic) NSMutableArray *messageIdsWithDefaultPriority; // @synthesize messageIdsWithDefaultPriority=_messageIdsWithDefaultPriority;
@property (strong, nonatomic) NSMutableArray *messageIdsWithNotificationPriority; // @synthesize messageIdsWithNotificationPriority=_messageIdsWithNotificationPriority;
@property (strong, nonatomic) NNMKProtoMessageAdditions *protoMessagesWithDefaultPriority; // @synthesize protoMessagesWithDefaultPriority=_protoMessagesWithDefaultPriority;
@property (strong, nonatomic) NNMKProtoMessageAdditions *protoMessagesWithNotificationPriority; // @synthesize protoMessagesWithNotificationPriority=_protoMessagesWithNotificationPriority;
@property (nonatomic) BOOL receivedOldMessages; // @synthesize receivedOldMessages=_receivedOldMessages;
@property (nonatomic) unsigned long long resendInterval; // @synthesize resendInterval=_resendInterval;

- (void).cxx_destruct;

@end

