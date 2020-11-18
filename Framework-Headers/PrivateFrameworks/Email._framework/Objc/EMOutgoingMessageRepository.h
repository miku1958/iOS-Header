//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Email/EFLoggable-Protocol.h>

@class EMRemoteConnection, NSString;

@interface EMOutgoingMessageRepository : NSObject <EFLoggable>
{
    EMRemoteConnection *_connection;
}

@property (strong) EMRemoteConnection *connection; // @synthesize connection=_connection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)log;
+ (id)remoteInterface;
+ (id)signpostLog;
- (void).cxx_destruct;
- (void)deleteDraftsInMailbox:(id)arg1 documentID:(id)arg2 previousDraftObjectID:(id)arg3;
- (id)deliverMessage:(id)arg1 usingMailDrop:(BOOL)arg2;
- (id)initWithRemoteConnection:(id)arg1;
- (BOOL)isProcessing;
- (unsigned long long)numberOfPendingMessages;
- (BOOL)outboxContainsMessageFromAccount:(id)arg1;
- (void)processAllQueuedMessages;
- (void)resumeDeliveryQueue;
- (id)saveDraftMessage:(id)arg1 mailboxObjectID:(id)arg2 previousDraftObjectID:(id)arg3;
- (unsigned long long)signpostID;
- (void)suspendDeliveryQueue;

@end
