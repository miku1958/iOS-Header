//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMSharedUtilities/IMItem.h>

@interface IMItem (IMItem_CKRecord)
+ (id)createItemWithCKRecord:(id)arg1;
+ (id)groupActionProtobufForCompressedData:(id)arg1;
+ (id)groupTitleChangeProtobufForCompressedData:(id)arg1;
+ (id)locationShareStatusChangeProtobufForCompressedData:(id)arg1;
+ (id)messageActionChangeProtobufForCompressedData:(id)arg1;
+ (id)participantChangeProtobufForCompressedData:(id)arg1;
+ (id)populateIMGroupActionItem:(id)arg1 withProtobufData:(id)arg2;
+ (id)populateIMGroupTitleChangeItem:(id)arg1 withProtobufData:(id)arg2;
+ (id)populateIMLocationShareStatusChangeItem:(id)arg1 withProtobufData:(id)arg2;
+ (id)populateIMMessageActionItem:(id)arg1 withProtobufData:(id)arg2;
+ (id)populateIMMessageItemWithProtoBufFields:(id)arg1 withProtbufData:(id)arg2;
+ (id)populateIMParticipantChangeItem:(id)arg1 withProtobufData:(id)arg2;
+ (id)protobufForCompressedData:(id)arg1;
+ (void)resetSyncStateForMessage:(id)arg1 toState:(long long)arg2;
- (id)_accountControllerSharedInstance;
- (void)_populateCKRecordWithIMGroupActionItemFields:(id)arg1;
- (void)_populateCKRecordWithIMGroupTitleChangeItemFields:(id)arg1;
- (void)_populateCKRecordWithIMItemFields:(id)arg1;
- (void)_populateCKRecordWithIMLocationShareStatusChangeItemFields:(id)arg1;
- (void)_populateCKRecordWithIMMessageActionItemFields:(id)arg1;
- (void)_populateCKRecordWithIMMessageItemFields:(id)arg1;
- (void)_populateCKRecordWithIMParticipantChangeItemFields:(id)arg1;
- (id)_recordFromServerChangeToken;
- (id)_recordType;
- (BOOL)_shouldDownloadIfPhoneNumberAndNoSIM:(id)arg1;
- (BOOL)_usingStingRay;
- (id)compressedProtobufDataForGroupActionItem;
- (id)compressedProtobufDataForGroupTitleChangeItem;
- (id)compressedProtobufDataForLocationShareStatusChangeItem;
- (id)compressedProtobufDataForMessage;
- (id)compressedProtobufDataForMessageActionItem;
- (id)compressedProtobufDataForParticipantChangeItem;
- (id)compressedProtobufDataWithPadding:(id)arg1;
- (id)copyCKRecordRepresentationWithZoneID:(id)arg1 salt:(id)arg2;
- (BOOL)shouldStoreMessage;
@end

