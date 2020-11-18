//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ManagedConfiguration/MCEmailAccountPayloadBase.h>

@class NSNumber, NSString;

@interface MCEmailAccountPayload : MCEmailAccountPayloadBase
{
    NSString *_emailAccountDescription;
    NSString *_emailAccountName;
    NSString *_emailAccountType;
    NSString *_emailAddress;
    NSString *_incomingMailServerAuthentication;
    NSString *_incomingMailServerHostname;
    NSNumber *_incomingMailServerPortNumber;
    BOOL _incomingMailServerUseSSL;
    NSString *_incomingMailServerUsername;
    NSString *_incomingMailServerIMAPPathPrefix;
    NSString *_incomingPassword;
    NSString *_outgoingPassword;
    BOOL _outgoingPasswordSameAsIncomingPassword;
    NSString *_outgoingMailServerAuthentication;
    NSString *_outgoingMailServerHostname;
    NSNumber *_outgoingMailServerPortNumber;
    BOOL _outgoingMailServerUseSSL;
    NSString *_outgoingMailServerUsername;
    NSNumber *_incomingMailServerUseSSLNum;
    NSNumber *_outgoingPasswordSameAsIncomingPasswordNum;
    NSNumber *_outgoingMailServerUseSSLNum;
}

@property (readonly, strong, nonatomic) NSString *emailAccountDescription; // @synthesize emailAccountDescription=_emailAccountDescription;
@property (readonly, strong, nonatomic) NSString *emailAccountName; // @synthesize emailAccountName=_emailAccountName;
@property (readonly, strong, nonatomic) NSString *emailAccountType; // @synthesize emailAccountType=_emailAccountType;
@property (readonly, strong, nonatomic) NSString *emailAddress; // @synthesize emailAddress=_emailAddress;
@property (readonly, strong, nonatomic) NSString *incomingMailServerAuthentication; // @synthesize incomingMailServerAuthentication=_incomingMailServerAuthentication;
@property (readonly, strong, nonatomic) NSString *incomingMailServerHostname; // @synthesize incomingMailServerHostname=_incomingMailServerHostname;
@property (readonly, strong, nonatomic) NSString *incomingMailServerIMAPPathPrefix; // @synthesize incomingMailServerIMAPPathPrefix=_incomingMailServerIMAPPathPrefix;
@property (readonly, strong, nonatomic) NSNumber *incomingMailServerPortNumber; // @synthesize incomingMailServerPortNumber=_incomingMailServerPortNumber;
@property (readonly, nonatomic) BOOL incomingMailServerUseSSL; // @synthesize incomingMailServerUseSSL=_incomingMailServerUseSSL;
@property (readonly, nonatomic) NSNumber *incomingMailServerUseSSLNum; // @synthesize incomingMailServerUseSSLNum=_incomingMailServerUseSSLNum;
@property (readonly, strong, nonatomic) NSString *incomingMailServerUsername; // @synthesize incomingMailServerUsername=_incomingMailServerUsername;
@property (readonly, strong, nonatomic) NSString *incomingPassword; // @synthesize incomingPassword=_incomingPassword;
@property (readonly, strong, nonatomic) NSString *outgoingMailServerAuthentication; // @synthesize outgoingMailServerAuthentication=_outgoingMailServerAuthentication;
@property (readonly, strong, nonatomic) NSString *outgoingMailServerHostname; // @synthesize outgoingMailServerHostname=_outgoingMailServerHostname;
@property (readonly, strong, nonatomic) NSNumber *outgoingMailServerPortNumber; // @synthesize outgoingMailServerPortNumber=_outgoingMailServerPortNumber;
@property (readonly, nonatomic) BOOL outgoingMailServerUseSSL; // @synthesize outgoingMailServerUseSSL=_outgoingMailServerUseSSL;
@property (readonly, nonatomic) NSNumber *outgoingMailServerUseSSLNum; // @synthesize outgoingMailServerUseSSLNum=_outgoingMailServerUseSSLNum;
@property (readonly, strong, nonatomic) NSString *outgoingMailServerUsername; // @synthesize outgoingMailServerUsername=_outgoingMailServerUsername;
@property (readonly, strong, nonatomic) NSString *outgoingPassword; // @synthesize outgoingPassword=_outgoingPassword;
@property (readonly, nonatomic) BOOL outgoingPasswordSameAsIncomingPassword; // @synthesize outgoingPasswordSameAsIncomingPassword=_outgoingPasswordSameAsIncomingPassword;
@property (readonly, nonatomic) NSNumber *outgoingPasswordSameAsIncomingPasswordNum; // @synthesize outgoingPasswordSameAsIncomingPasswordNum=_outgoingPasswordSameAsIncomingPasswordNum;

+ (id)localizedPluralForm;
+ (id)localizedSingularForm;
+ (id)profileNameFromAccountTag:(id)arg1;
+ (id)typeStrings;
- (void).cxx_destruct;
- (id)_authenticationTypeLocalizedString:(id)arg1;
- (id)_emailAccountTypeLocalizedString;
- (id)description;
- (id)initWithDictionary:(id)arg1 profile:(id)arg2 outError:(id *)arg3;
- (id)payloadDescriptionKeyValueSections;
- (id)stubDictionary;
- (id)subtitle1Description;
- (id)subtitle1Label;
- (id)subtitle2Description;
- (id)subtitle2Label;
- (id)title;

@end

