//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoMailKitServer/NNMKSyncServiceEndpoint.h>

@protocol NNMKMessagesSyncServiceClientDelegate;

@interface NNMKMessagesSyncServiceClient : NNMKSyncServiceEndpoint
{
    id<NNMKMessagesSyncServiceClientDelegate> _delegate;
}

@property (weak, nonatomic) id<NNMKMessagesSyncServiceClientDelegate> delegate; // @synthesize delegate=_delegate;

- (void).cxx_destruct;
- (void)connectivityChanged;
- (id)deleteMessages:(id)arg1;
- (void)failedSendingProtobufWithIDSIdentifier:(id)arg1 errorCode:(long long)arg2;
- (id)initWithQueue:(id)arg1;
- (void)readProtobufData:(id)arg1 type:(unsigned long long)arg2;
- (void)requestCompactMessages:(id)arg1;
- (id)sendMessage:(id)arg1;
- (void)successfullySentProtobufWithIDSIdentifier:(id)arg1;
- (id)updateMailboxSelection:(id)arg1;
- (id)updateMessagesStatus:(id)arg1;
- (void)warnMessagesFilteredOut:(id)arg1;

@end

