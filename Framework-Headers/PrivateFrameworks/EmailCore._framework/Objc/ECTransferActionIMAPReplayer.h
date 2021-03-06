//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <EmailCore/ECTransferActionReplayer.h>

#import <EmailCore/ECIMAPLocalActionReplayer-Protocol.h>
#import <EmailCore/ECTransferActionReplayerSubclassMethods-Protocol.h>

@class NSString;
@protocol ECIMAPLocalActionReplayerDelegate, ECIMAPServerInterface;

@interface ECTransferActionIMAPReplayer : ECTransferActionReplayer <ECTransferActionReplayerSubclassMethods, ECIMAPLocalActionReplayer>
{
    id<ECIMAPServerInterface> serverInterface;
    id<ECIMAPLocalActionReplayerDelegate> delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ECIMAPLocalActionReplayerDelegate> delegate; // @synthesize delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) id<ECIMAPServerInterface> serverInterface; // @synthesize serverInterface;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_transferItems:(id)arg1 destinationMailboxURL:(id)arg2 isMove:(BOOL)arg3;
- (id)appendItem:(id)arg1 mailboxURL:(id)arg2;
- (id)copyItems:(id)arg1 destinationMailboxURL:(id)arg2;
- (BOOL)deleteSourceMessagesFromTransferItems:(id)arg1;
- (BOOL)downloadFailed;
- (id)fetchBodyDataForRemoteID:(id)arg1 mailboxURL:(id)arg2;
- (BOOL)isRecoverableError:(id)arg1;
- (id)moveItems:(id)arg1 destinationMailboxURL:(id)arg2;

@end

