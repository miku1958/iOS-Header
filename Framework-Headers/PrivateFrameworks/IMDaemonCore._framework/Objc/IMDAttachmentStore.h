//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface IMDAttachmentStore : NSObject
{
}

+ (id)sharedInstance;
- (BOOL)_shouldEarlyReturnForWrongItemType:(id)arg1;
- (BOOL)_updateLegacyTransferGUIDOnMessageIfNeeded:(id)arg1 andUpdateTransfer:(id)arg2;
- (id)_updatedMessageBody:(id)arg1 replacingGuid:(id)arg2 withGuid:(id)arg3;
- (id)attachmentWithGUID:(id)arg1;
- (BOOL)deleteAttachmentDataForTransfer:(id)arg1;
- (BOOL)deleteAttachmentWithGUID:(id)arg1;
- (BOOL)deleteAttachmentsWithGUIDs:(id)arg1;
- (BOOL)isSafeToDeleteAttachmentAtPath:(id)arg1;
- (void)markAllAttachmentsAsNeedingCloudKitSync;
- (BOOL)removeAttachment:(id)arg1 fromMessageWithGUID:(id)arg2;
- (BOOL)storeAttachment:(id)arg1 associateWithMessageWithGUID:(id)arg2;
- (BOOL)updateAttachment:(id)arg1;
- (BOOL)updateLegacyTransferGUIDIfNeeded:(id)arg1;
- (BOOL)updateLegacyTransferGUIDOnMessageIfNeeded:(id)arg1;

@end
