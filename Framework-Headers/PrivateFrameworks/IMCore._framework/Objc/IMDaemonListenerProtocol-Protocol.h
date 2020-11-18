//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMCore/NSObject-Protocol.h>

@class IMItem, IMMessageItem, NSArray, NSData, NSDictionary, NSError, NSNumber, NSString;

@protocol IMDaemonListenerProtocol <NSObject>
- (void)account:(NSString *)arg1 allowListChanged:(NSArray *)arg2;
- (void)account:(NSString *)arg1 avAction:(unsigned int)arg2 withArguments:(NSDictionary *)arg3 toAVChat:(NSString *)arg4 isVideo:(BOOL)arg5;
- (void)account:(NSString *)arg1 blockIdleStatusChanged:(BOOL)arg2;
- (void)account:(NSString *)arg1 blockListChanged:(NSArray *)arg2;
- (void)account:(NSString *)arg1 blockingModeChanged:(unsigned int)arg2;
- (void)account:(NSString *)arg1 buddyInfo:(NSDictionary *)arg2 commandDelivered:(NSNumber *)arg3 properties:(NSDictionary *)arg4;
- (void)account:(NSString *)arg1 buddyInfo:(NSDictionary *)arg2 commandReceived:(NSNumber *)arg3 properties:(NSDictionary *)arg4;
- (void)account:(NSString *)arg1 buddyPictureChanged:(NSString *)arg2 imageData:(NSData *)arg3 imageHash:(NSString *)arg4;
- (void)account:(NSString *)arg1 buddyProperties:(NSDictionary *)arg2 buddyPictures:(NSDictionary *)arg3;
- (void)account:(NSString *)arg1 buddyPropertiesChanged:(NSArray *)arg2;
- (void)account:(NSString *)arg1 capabilitiesChanged:(unsigned long long)arg2;
- (void)account:(NSString *)arg1 chat:(NSString *)arg2 style:(unsigned char)arg3 chatProperties:(NSDictionary *)arg4 error:(NSError *)arg5;
- (void)account:(NSString *)arg1 chat:(NSString *)arg2 style:(unsigned char)arg3 chatProperties:(NSDictionary *)arg4 invitationReceived:(IMMessageItem *)arg5;
- (void)account:(NSString *)arg1 chat:(NSString *)arg2 style:(unsigned char)arg3 chatProperties:(NSDictionary *)arg4 member:(NSDictionary *)arg5 statusChanged:(int)arg6;
- (void)account:(NSString *)arg1 chat:(NSString *)arg2 style:(unsigned char)arg3 chatProperties:(NSDictionary *)arg4 messageReceived:(IMItem *)arg5;
- (void)account:(NSString *)arg1 chat:(NSString *)arg2 style:(unsigned char)arg3 chatProperties:(NSDictionary *)arg4 messageSent:(IMMessageItem *)arg5;
- (void)account:(NSString *)arg1 chat:(NSString *)arg2 style:(unsigned char)arg3 chatProperties:(NSDictionary *)arg4 messageUpdated:(IMItem *)arg5;
- (void)account:(NSString *)arg1 chat:(NSString *)arg2 style:(unsigned char)arg3 chatProperties:(NSDictionary *)arg4 messagesReceived:(NSArray *)arg5;
- (void)account:(NSString *)arg1 chat:(NSString *)arg2 style:(unsigned char)arg3 chatProperties:(NSDictionary *)arg4 messagesUpdated:(NSArray *)arg5;
- (void)account:(NSString *)arg1 chat:(NSString *)arg2 style:(unsigned char)arg3 chatProperties:(NSDictionary *)arg4 notifySentMessage:(IMMessageItem *)arg5 sendTime:(NSNumber *)arg6;
- (void)account:(NSString *)arg1 chat:(NSString *)arg2 style:(unsigned char)arg3 chatProperties:(NSDictionary *)arg4 statusChanged:(int)arg5 handleInfo:(NSArray *)arg6;
- (void)account:(NSString *)arg1 chat:(NSString *)arg2 style:(unsigned char)arg3 chatProperties:(NSDictionary *)arg4 updateProperties:(NSDictionary *)arg5;
- (void)account:(NSString *)arg1 conference:(NSString *)arg2 changedToNewConferenceID:(NSString *)arg3;
- (void)account:(NSString *)arg1 conference:(NSString *)arg2 invitationSentSuccessfully:(BOOL)arg3;
- (void)account:(NSString *)arg1 conference:(NSString *)arg2 peerID:(NSString *)arg3 propertiesUpdated:(NSDictionary *)arg4;
- (void)account:(NSString *)arg1 conference:(NSString *)arg2 peerIDChangedFromID:(NSString *)arg3 toID:(NSString *)arg4;
- (void)account:(NSString *)arg1 conference:(NSString *)arg2 receivedAVMessage:(unsigned int)arg3 from:(NSDictionary *)arg4 sessionID:(unsigned int)arg5 userInfo:(NSDictionary *)arg6;
- (void)account:(NSString *)arg1 conference:(NSString *)arg2 receivedCancelInvitationFrom:(NSDictionary *)arg3 properties:(NSDictionary *)arg4;
- (void)account:(NSString *)arg1 conference:(NSString *)arg2 receivedCounterProposalFrom:(NSDictionary *)arg3 properties:(NSDictionary *)arg4;
- (void)account:(NSString *)arg1 conference:(NSString *)arg2 receivedInvitationFrom:(NSDictionary *)arg3 properties:(NSDictionary *)arg4;
- (void)account:(NSString *)arg1 conference:(NSString *)arg2 receivedResponseToInvitationFrom:(NSDictionary *)arg3 properties:(NSDictionary *)arg4;
- (void)account:(NSString *)arg1 conference:(NSString *)arg2 receivedUpdateFrom:(NSDictionary *)arg3 data:(NSData *)arg4;
- (void)account:(NSString *)arg1 defaults:(NSDictionary *)arg2 blockList:(NSArray *)arg3 allowList:(NSArray *)arg4 blockingMode:(unsigned int)arg5 blockIdleStatus:(BOOL)arg6 status:(NSDictionary *)arg7 capabilities:(unsigned long long)arg8 serviceLoginStatus:(unsigned int)arg9 loginStatusMessage:(NSString *)arg10;
- (void)account:(NSString *)arg1 defaultsChanged:(NSDictionary *)arg2;
- (void)account:(NSString *)arg1 groupsChanged:(NSArray *)arg2 error:(NSError *)arg3;
- (void)account:(NSString *)arg1 handleSubscriptionRequestFrom:(NSDictionary *)arg2 withMessage:(NSString *)arg3;
- (void)account:(NSString *)arg1 loginStatusChanged:(unsigned int)arg2 message:(NSString *)arg3 reason:(int)arg4 properties:(NSDictionary *)arg5;
- (void)account:(NSString *)arg1 postedError:(NSError *)arg2;
- (void)account:(NSString *)arg1 relay:(NSString *)arg2 handleCancel:(NSDictionary *)arg3 fromPerson:(NSDictionary *)arg4;
- (void)account:(NSString *)arg1 relay:(NSString *)arg2 handleInitate:(NSDictionary *)arg3 fromPerson:(NSDictionary *)arg4;
- (void)account:(NSString *)arg1 relay:(NSString *)arg2 handleUpdate:(NSDictionary *)arg3 fromPerson:(NSDictionary *)arg4;
- (void)account:(NSString *)arg1 statusChanged:(NSDictionary *)arg2;
- (void)accountAdded:(NSString *)arg1 defaults:(NSDictionary *)arg2 service:(NSString *)arg3;
- (void)accountRemoved:(NSString *)arg1;
- (void)activeAccountsChanged:(NSArray *)arg1 forService:(NSString *)arg2;
- (void)attachmentQuery:(NSString *)arg1 chatID:(NSString *)arg2 services:(NSArray *)arg3 finishedWithResult:(NSArray *)arg4;
- (void)chat:(NSString *)arg1 displayNameUpdated:(NSString *)arg2;
- (void)chat:(NSString *)arg1 isFilteredUpdated:(BOOL)arg2;
- (void)chat:(NSString *)arg1 propertiesUpdated:(NSDictionary *)arg2;
- (void)chat:(NSString *)arg1 updated:(NSDictionary *)arg2;
- (void)chatLoadedWithChatIdentifier:(NSString *)arg1 chats:(NSArray *)arg2;
- (void)databaseFull;
- (void)databaseNoLongerFull;
- (void)databaseUpdated;
- (void)databaseUpdated:(NSString *)arg1;
- (void)defaultsChanged:(NSDictionary *)arg1 forService:(NSString *)arg2;
- (void)displayPinCodeForAccount:(NSString *)arg1 pinCode:(NSNumber *)arg2 deviceName:(NSString *)arg3 deviceType:(NSString *)arg4 phoneNumber:(NSString *)arg5;
- (void)fileTransfer:(NSString *)arg1 createdWithProperties:(NSDictionary *)arg2;
- (void)fileTransfer:(NSString *)arg1 updatedWithCurrentBytes:(unsigned long long)arg2 totalBytes:(unsigned long long)arg3 averageTransferRate:(unsigned long long)arg4;
- (void)fileTransfer:(NSString *)arg1 updatedWithProperties:(NSDictionary *)arg2;
- (void)fileTransfers:(NSArray *)arg1 createdWithLocalPaths:(NSArray *)arg2;
- (void)frequentRepliesQuery:(NSString *)arg1 chatID:(NSString *)arg2 services:(NSArray *)arg3 finishedWithResult:(NSArray *)arg4 limit:(unsigned long long)arg5;
- (void)historicalMessageGUIDsDeleted:(NSArray *)arg1 chatGUIDs:(NSArray *)arg2 queryID:(NSString *)arg3;
- (void)historyQuery:(NSString *)arg1 chatID:(NSString *)arg2 services:(NSArray *)arg3 finishedWithResult:(NSArray *)arg4 limit:(unsigned long long)arg5;
- (void)lastFailedMessageIDChanged:(long long)arg1;
- (void)leftChat:(NSString *)arg1;
- (void)markAsSpamQuery:(NSString *)arg1 chatID:(NSString *)arg2 services:(NSArray *)arg3 finishedWithResult:(NSNumber *)arg4;
- (void)messageQuery:(NSString *)arg1 finishedWithResult:(IMMessageItem *)arg2 chatGUIDs:(NSArray *)arg3;
- (void)pendingACRequestComplete;
- (void)pendingVCRequestComplete;
- (void)persistentProperty:(NSString *)arg1 changedTo:(id)arg2 from:(id)arg3;
- (void)pinCodeAlertCompleted:(NSString *)arg1 deviceName:(NSString *)arg2 deviceType:(NSString *)arg3 phoneNumber:(NSString *)arg4 responseFromDevice:(BOOL)arg5 wasCancelled:(BOOL)arg6;
- (void)property:(NSString *)arg1 changedTo:(id)arg2 from:(id)arg3;
- (void)qosClassWhileServicingRequestsResponse:(unsigned int)arg1 identifier:(NSString *)arg2;
- (void)setupComplete;
- (void)setupComplete:(BOOL)arg1 info:(NSDictionary *)arg2;
- (void)showForgotPasswordNotificationForAccount:(NSString *)arg1;
- (void)showInvalidCertNotificationForAccount:(NSString *)arg1;
- (void)standaloneFileTransferRegistered:(NSString *)arg1;
- (void)stickerPackRemoved:(NSArray *)arg1;
- (void)stickerPackUpdated:(NSDictionary *)arg1;
- (void)unreadCountChanged:(long long)arg1;
- (void)vcCapabilitiesChanged:(unsigned long long)arg1;
@end

