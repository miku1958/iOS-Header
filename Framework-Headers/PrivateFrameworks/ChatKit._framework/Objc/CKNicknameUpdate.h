//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class CNContact, IMHandle, IMNickname;

@interface CKNicknameUpdate : NSObject
{
    IMHandle *_handle;
    IMNickname *_nickname;
    CNContact *_contact;
    unsigned long long _updateType;
}

@property (strong, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property (strong, nonatomic) IMHandle *handle; // @synthesize handle=_handle;
@property (strong, nonatomic) IMNickname *nickname; // @synthesize nickname=_nickname;
@property (nonatomic) unsigned long long updateType; // @synthesize updateType=_updateType;

- (void).cxx_destruct;
- (id)_updatedName;
- (id)contactWithUpdatedInformation;
- (id)description;
- (BOOL)isEqual:(id)arg1;
- (id)listSubtitleText;
- (id)listTitleText;

@end

