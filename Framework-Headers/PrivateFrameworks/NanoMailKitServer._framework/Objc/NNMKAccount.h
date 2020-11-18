//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoMailKitServer/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface NNMKAccount : NSObject <NSSecureCoding>
{
    BOOL _shouldArchive;
    NSString *_accountId;
    NSString *_localId;
    NSString *_parentAccountIdentifier;
    NSString *_displayName;
    unsigned long long _sourceType;
    NSArray *_emailAddresses;
    NSString *_username;
    NSString *_defaultEmailAddress;
    unsigned long long _standaloneState;
    NSArray *_mailboxes;
}

@property (strong, nonatomic) NSString *accountId; // @synthesize accountId=_accountId;
@property (copy, nonatomic) NSString *defaultEmailAddress; // @synthesize defaultEmailAddress=_defaultEmailAddress;
@property (strong, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property (strong, nonatomic) NSArray *emailAddresses; // @synthesize emailAddresses=_emailAddresses;
@property (strong, nonatomic) NSString *localId; // @synthesize localId=_localId;
@property (strong, nonatomic) NSArray *mailboxes; // @synthesize mailboxes=_mailboxes;
@property (strong, nonatomic) NSString *parentAccountIdentifier; // @synthesize parentAccountIdentifier=_parentAccountIdentifier;
@property (nonatomic) BOOL shouldArchive; // @synthesize shouldArchive=_shouldArchive;
@property (nonatomic) unsigned long long sourceType; // @synthesize sourceType=_sourceType;
@property (nonatomic) unsigned long long standaloneState; // @synthesize standaloneState=_standaloneState;
@property (strong, nonatomic) NSString *username; // @synthesize username=_username;

+ (id)generateAccountIdForAccount:(id)arg1;
+ (id)generateIdentifierFromEmailsAddresses:(id)arg1;
+ (id)inboxesFromAccounts:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isiCloud;
- (BOOL)maySupportStandaloneMode;

@end
