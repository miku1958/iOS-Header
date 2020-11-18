//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoMailKitServer/NNMKSyncServiceEndpoint.h>

@protocol NNMKMessagesSyncServiceServerDelegate;

@interface NNMKMessagesSyncServiceServer : NNMKSyncServiceEndpoint
{
    id<NNMKMessagesSyncServiceServerDelegate> _delegate;
}

@property (weak, nonatomic) id<NNMKMessagesSyncServiceServerDelegate> delegate; // @synthesize delegate=_delegate;

- (void).cxx_destruct;
- (id)addMessages:(id)arg1 notificationPriority:(BOOL)arg2;
- (void)connectivityChanged;
- (id)deleteMessages:(id)arg1 notificationPriority:(BOOL)arg2;
- (void)failedSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(long long)arg2;
- (id)initWithQueue:(id)arg1;
- (void)readProtobufData:(id)arg1 type:(unsigned long long)arg2;
- (id)sendBatchedFetchResult:(id)arg1;
- (id)sendInitialMessagesSync:(id)arg1;
- (id)sendMoreMessages:(id)arg1;
- (id)sendMoreMessagesForConversation:(id)arg1;
- (void)spaceBecameAvailable;
- (void)successfullySentProtobufWithIDSIdentifier:(id)arg1;
- (id)updateMessagesStatus:(id)arg1 notificationPriority:(BOOL)arg2;

@end

