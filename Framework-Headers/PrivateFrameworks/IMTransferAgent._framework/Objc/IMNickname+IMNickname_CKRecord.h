//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IMSharedUtilities/IMNickname.h>

@interface IMNickname (IMNickname_CKRecord)
+ (id)_assetTargetURLForRecordName:(id)arg1 fieldName:(id)arg2 error:(id *)arg3;
+ (id)_dataDictionaryFromCKRecord:(id)arg1 error:(id *)arg2;
+ (id)nicknameFromPublicRecord:(id)arg1 preKey:(id)arg2 error:(id *)arg3;
- (id)_CKRecordFromDictionary:(id)arg1 recordName:(id)arg2 assetFieldNames:(id)arg3 error:(id *)arg4;
- (BOOL)_moveAvatarImage:(id)arg1 newURL:(id)arg2 error:(id *)arg3;
- (id)publicRecordForNicknameWithPreKey:(id)arg1 error:(id *)arg2;
- (BOOL)updateNicknameWithRecordID:(id)arg1 error:(id *)arg2;
@end
