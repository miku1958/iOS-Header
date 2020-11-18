//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoMailKitServer/NNMKDeviceRegistryHolder-Protocol.h>

@class NNMKResendScheduler, NSArray, NSDate, NSDictionary, NSString;

@protocol NNMKResendSchedulerDelegate <NNMKDeviceRegistryHolder>
- (void)resendScheduler:(NNMKResendScheduler *)arg1 didRequestDequeueIDSIdentifierForResend:(NSString *)arg2;
- (void)resendScheduler:(NNMKResendScheduler *)arg1 didRequestEnqueueIDSIdentifierForResend:(NSString *)arg2 date:(NSDate *)arg3 silent:(BOOL)arg4;
- (void)resendScheduler:(NNMKResendScheduler *)arg1 didRequestEnqueueIDSIdentifiersForResend:(NSDictionary *)arg2;
- (unsigned long long)resendScheduler:(NNMKResendScheduler *)arg1 didRequestNewResendIntervalForPreviousResendInterval:(unsigned long long)arg2 errorCode:(long long)arg3;
- (void)resendScheduler:(NNMKResendScheduler *)arg1 didRequestRetryFullSyncForMailboxes:(NSArray *)arg2;
- (void)resendScheduler:(NNMKResendScheduler *)arg1 didRequestRetrySendingAccountIdentifier:(NSString *)arg2 resendInterval:(unsigned long long)arg3;
- (void)resendScheduler:(NNMKResendScheduler *)arg1 didRequestRetrySendingAccountWithId:(NSString *)arg2;
- (void)resendScheduler:(NNMKResendScheduler *)arg1 didRequestRetrySendingComposeMessageProgress:(long long)arg2 messageId:(NSString *)arg3 resendInterval:(unsigned long long)arg4;
- (void)resendScheduler:(NNMKResendScheduler *)arg1 didRequestRetrySendingContentForMessageId:(NSString *)arg2 highPriority:(BOOL)arg3;
- (void)resendScheduler:(NNMKResendScheduler *)arg1 didRequestRetrySendingDeletionForAccountWithId:(NSString *)arg2 resendInterval:(unsigned long long)arg3;
- (void)resendScheduler:(NNMKResendScheduler *)arg1 didRequestRetrySendingMailboxSelectionWithResendInterval:(unsigned long long)arg2;
- (void)resendScheduler:(NNMKResendScheduler *)arg1 didRequestRetrySendingMessageDeletions:(NSDictionary *)arg2 deletionsMessageIds:(NSArray *)arg3 resendInterval:(unsigned long long)arg4;
- (void)resendScheduler:(NNMKResendScheduler *)arg1 didRequestRetrySendingMessageWithIds:(NSArray *)arg2;
- (void)resendScheduler:(NNMKResendScheduler *)arg1 didRequestRetrySendingVIPListWithResendInterval:(unsigned long long)arg2;
@end

