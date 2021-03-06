//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ManagedConfiguration/MCPayload.h>

#import <ManagedConfiguration/MCPerAccountVPNPayloadProtocol-Protocol.h>

@class NSArray, NSData, NSNumber, NSString;

@interface MCEmailAccountPayloadBase : MCPayload <MCPerAccountVPNPayloadProtocol>
{
    BOOL _preventMove;
    BOOL _preventAppSheet;
    BOOL _SMIMEEnabled;
    BOOL _isRecentsSyncingDisabled;
    BOOL _isMailDropEnabled;
    BOOL _SMIMESigningUserOverrideable;
    BOOL _SMIMESigningIdentityUserOverrideable;
    BOOL _SMIMEEncryptByDefaultUserOverrideable;
    BOOL _SMIMEEncryptionIdentityUserOverrideable;
    BOOL _SMIMEPerMessageSwitchEnabled;
    NSString *_VPNUUID;
    NSNumber *_SMIMESigningEnabled;
    NSString *_SMIMESigningIdentityUUID;
    NSNumber *_SMIMEEncryptionEnabled;
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
@property (nonatomic) BOOL SMIMEEncryptByDefaultUserOverrideable; // @synthesize SMIMEEncryptByDefaultUserOverrideable=_SMIMEEncryptByDefaultUserOverrideable;
@property (strong, nonatomic) NSNumber *SMIMEEncryptionEnabled; // @synthesize SMIMEEncryptionEnabled=_SMIMEEncryptionEnabled;
@property (strong, nonatomic) NSData *SMIMEEncryptionIdentityPersistentID; // @synthesize SMIMEEncryptionIdentityPersistentID=_SMIMEEncryptionIdentityPersistentID;
@property (strong, nonatomic) NSString *SMIMEEncryptionIdentityUUID; // @synthesize SMIMEEncryptionIdentityUUID=_SMIMEEncryptionIdentityUUID;
@property (nonatomic) BOOL SMIMEEncryptionIdentityUserOverrideable; // @synthesize SMIMEEncryptionIdentityUserOverrideable=_SMIMEEncryptionIdentityUserOverrideable;
@property (nonatomic) BOOL SMIMEPerMessageSwitchEnabled; // @synthesize SMIMEPerMessageSwitchEnabled=_SMIMEPerMessageSwitchEnabled;
@property (strong, nonatomic) NSNumber *SMIMEPerMessageSwitchEnabledNum; // @synthesize SMIMEPerMessageSwitchEnabledNum=_SMIMEPerMessageSwitchEnabledNum;
@property (strong, nonatomic) NSNumber *SMIMESigningEnabled; // @synthesize SMIMESigningEnabled=_SMIMESigningEnabled;
@property (strong, nonatomic) NSData *SMIMESigningIdentityPersistentID; // @synthesize SMIMESigningIdentityPersistentID=_SMIMESigningIdentityPersistentID;
@property (strong, nonatomic) NSString *SMIMESigningIdentityUUID; // @synthesize SMIMESigningIdentityUUID=_SMIMESigningIdentityUUID;
@property (nonatomic) BOOL SMIMESigningIdentityUserOverrideable; // @synthesize SMIMESigningIdentityUserOverrideable=_SMIMESigningIdentityUserOverrideable;
@property (nonatomic) BOOL SMIMESigningUserOverrideable; // @synthesize SMIMESigningUserOverrideable=_SMIMESigningUserOverrideable;
@property (readonly, strong, nonatomic) NSString *VPNUUID; // @synthesize VPNUUID=_VPNUUID;
@property (readonly, strong, nonatomic) NSArray *calendarAccountIdentifiers;
@property (readonly, strong, nonatomic) NSArray *contactsAccountIdentifiers;
@property (nonatomic) BOOL isMailDropEnabled; // @synthesize isMailDropEnabled=_isMailDropEnabled;
@property (strong, nonatomic) NSNumber *isMailDropEnabledNum; // @synthesize isMailDropEnabledNum=_isMailDropEnabledNum;
@property (nonatomic) BOOL isRecentsSyncingDisabled; // @synthesize isRecentsSyncingDisabled=_isRecentsSyncingDisabled;
@property (strong, nonatomic) NSNumber *isRecentsSyncingDisabledNum; // @synthesize isRecentsSyncingDisabledNum=_isRecentsSyncingDisabledNum;
@property (readonly, strong, nonatomic) NSArray *mailAccountIdentifiers;
@property (nonatomic) BOOL preventAppSheet; // @synthesize preventAppSheet=_preventAppSheet;
@property (strong, nonatomic) NSNumber *preventAppSheetNum; // @synthesize preventAppSheetNum=_preventAppSheetNum;
@property (nonatomic) BOOL preventMove; // @synthesize preventMove=_preventMove;
@property (strong, nonatomic) NSNumber *preventMoveNum; // @synthesize preventMoveNum=_preventMoveNum;

- (void).cxx_destruct;
- (void)addSMIMEEncryptionPayloadKeysTo:(id)arg1;
- (BOOL)containsSensitiveUserInformation;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (id)payloadDescriptionKeyValueSections;
- (id)stubDictionary;
- (id)verboseDescription;

@end

