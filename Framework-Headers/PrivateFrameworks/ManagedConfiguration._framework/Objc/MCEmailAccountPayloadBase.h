//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ManagedConfiguration/MCPayload.h>

@class NSData, NSNumber, NSString;

@interface MCEmailAccountPayloadBase : MCPayload
{
    BOOL _preventMove;
    BOOL _preventAppSheet;
    BOOL _SMIMEEnabled;
    BOOL _isRecentsSyncingDisabled;
    BOOL _isMailDropEnabled;
    BOOL _SMIMEPerMessageSwitchEnabled;
    NSString *_SMIMESigningIdentityUUID;
    NSString *_SMIMEEncryptionIdentityUUID;
    NSData *_SMIMESigningIdentityPersistentID;
    NSData *_SMIMEEncryptionIdentityPersistentID;
    NSNumber *_preventMoveNum;
    NSNumber *_preventAppSheetNum;
    NSNumber *_SMIMEEnabledNum;
    NSNumber *_isRecentsSyncingDisabledNum;
    NSNumber *_isMailDropEnabledNum;
    NSNumber *_SMIMEPerMessageSwitchEnabledNum;
}

@property (nonatomic) BOOL SMIMEEnabled; // @synthesize SMIMEEnabled=_SMIMEEnabled;
@property (strong, nonatomic) NSNumber *SMIMEEnabledNum; // @synthesize SMIMEEnabledNum=_SMIMEEnabledNum;
@property (strong, nonatomic) NSData *SMIMEEncryptionIdentityPersistentID; // @synthesize SMIMEEncryptionIdentityPersistentID=_SMIMEEncryptionIdentityPersistentID;
@property (strong, nonatomic) NSString *SMIMEEncryptionIdentityUUID; // @synthesize SMIMEEncryptionIdentityUUID=_SMIMEEncryptionIdentityUUID;
@property (nonatomic) BOOL SMIMEPerMessageSwitchEnabled; // @synthesize SMIMEPerMessageSwitchEnabled=_SMIMEPerMessageSwitchEnabled;
@property (strong, nonatomic) NSNumber *SMIMEPerMessageSwitchEnabledNum; // @synthesize SMIMEPerMessageSwitchEnabledNum=_SMIMEPerMessageSwitchEnabledNum;
@property (strong, nonatomic) NSData *SMIMESigningIdentityPersistentID; // @synthesize SMIMESigningIdentityPersistentID=_SMIMESigningIdentityPersistentID;
@property (strong, nonatomic) NSString *SMIMESigningIdentityUUID; // @synthesize SMIMESigningIdentityUUID=_SMIMESigningIdentityUUID;
@property (nonatomic) BOOL isMailDropEnabled; // @synthesize isMailDropEnabled=_isMailDropEnabled;
@property (strong, nonatomic) NSNumber *isMailDropEnabledNum; // @synthesize isMailDropEnabledNum=_isMailDropEnabledNum;
@property (nonatomic) BOOL isRecentsSyncingDisabled; // @synthesize isRecentsSyncingDisabled=_isRecentsSyncingDisabled;
@property (strong, nonatomic) NSNumber *isRecentsSyncingDisabledNum; // @synthesize isRecentsSyncingDisabledNum=_isRecentsSyncingDisabledNum;
@property (nonatomic) BOOL preventAppSheet; // @synthesize preventAppSheet=_preventAppSheet;
@property (strong, nonatomic) NSNumber *preventAppSheetNum; // @synthesize preventAppSheetNum=_preventAppSheetNum;
@property (nonatomic) BOOL preventMove; // @synthesize preventMove=_preventMove;
@property (strong, nonatomic) NSNumber *preventMoveNum; // @synthesize preventMoveNum=_preventMoveNum;

- (void).cxx_destruct;
- (id)description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (id)payloadDescriptionKeyValueSections;
- (id)stubDictionary;

@end

