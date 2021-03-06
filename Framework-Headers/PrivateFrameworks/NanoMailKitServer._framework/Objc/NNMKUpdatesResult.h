//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NNMKProtoMessageStatusUpdates, NSArray;

@interface NNMKUpdatesResult : NSObject
{
    NNMKProtoMessageStatusUpdates *_protoMessageUpdatesWithNotificationPriority;
    NNMKProtoMessageStatusUpdates *_protoMessageUpdatesWithDefaultPriority;
    NNMKProtoMessageStatusUpdates *_protoMessageUpdatesWithDefaultPriorityAndProtectedChannel;
    NSArray *_messageIdsWithNotificationPriority;
    NSArray *_messageIdsWithDefaultPriority;
    NSArray *_messageIdsWithDefaultPriorityAndProtectedChannel;
    NSArray *_messagesToAdd;
    NSArray *_messageIdsToDelete;
}

@property (strong, nonatomic) NSArray *messageIdsToDelete; // @synthesize messageIdsToDelete=_messageIdsToDelete;
@property (strong, nonatomic) NSArray *messageIdsWithDefaultPriority; // @synthesize messageIdsWithDefaultPriority=_messageIdsWithDefaultPriority;
@property (strong, nonatomic) NSArray *messageIdsWithDefaultPriorityAndProtectedChannel; // @synthesize messageIdsWithDefaultPriorityAndProtectedChannel=_messageIdsWithDefaultPriorityAndProtectedChannel;
@property (strong, nonatomic) NSArray *messageIdsWithNotificationPriority; // @synthesize messageIdsWithNotificationPriority=_messageIdsWithNotificationPriority;
@property (strong, nonatomic) NSArray *messagesToAdd; // @synthesize messagesToAdd=_messagesToAdd;
@property (strong, nonatomic) NNMKProtoMessageStatusUpdates *protoMessageUpdatesWithDefaultPriority; // @synthesize protoMessageUpdatesWithDefaultPriority=_protoMessageUpdatesWithDefaultPriority;
@property (strong, nonatomic) NNMKProtoMessageStatusUpdates *protoMessageUpdatesWithDefaultPriorityAndProtectedChannel; // @synthesize protoMessageUpdatesWithDefaultPriorityAndProtectedChannel=_protoMessageUpdatesWithDefaultPriorityAndProtectedChannel;
@property (strong, nonatomic) NNMKProtoMessageStatusUpdates *protoMessageUpdatesWithNotificationPriority; // @synthesize protoMessageUpdatesWithNotificationPriority=_protoMessageUpdatesWithNotificationPriority;

- (void).cxx_destruct;

@end

