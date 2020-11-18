//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface IMCoreAutomationNotifications : NSObject
{
    long long _chatsWrittenCount;
    long long _messagesWrittenCount;
    long long _attachmentsWrittenCount;
}

@property (readonly) long long attachmentsWrittenCount; // @synthesize attachmentsWrittenCount=_attachmentsWrittenCount;
@property (readonly) long long chatsWrittenCount; // @synthesize chatsWrittenCount=_chatsWrittenCount;
@property (readonly) long long messagesWrittenCount; // @synthesize messagesWrittenCount=_messagesWrittenCount;

+ (id)sharedInstance;
- (void)addNewAttachmentsSyncedCount:(long long)arg1;
- (void)addNewChatsSyncedCount:(long long)arg1;
- (void)addNewMessagesSyncedCount:(long long)arg1;
- (void)clearSyncCounts;
- (id)init;
- (void)postCoreAutomationNotificationFinishedPeriodicSyncNotificationWithStartTime:(id)arg1 chatsDidsync:(BOOL)arg2 messagesDidSync:(BOOL)arg3 attachmentsDidSync:(BOOL)arg4;
- (void)postCoreAutomationNotificationFinishedPurgingAttachments:(id)arg1 withErrorString:(id)arg2;
- (void)postCoreAutomationNotificationFinishedTapToDownload:(id)arg1 downloadedFromCloudKitSuccessfully:(BOOL)arg2;
- (void)postCoreAutomationNotificationWithAction:(id)arg1;
- (void)postCoreAutomationNotificationWithDictionary:(id)arg1 withVerboseLogging:(BOOL)arg2;

@end

