//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSArray, NSString;

@interface PKFieldProperties : NSObject <NSSecureCoding>
{
    BOOL _authenticationRequired;
    BOOL _backgroundTransaction;
    BOOL _secondaryPropertiesRequired;
    BOOL _secondaryPropertiesAcquired;
    BOOL _ECP2Field;
    unsigned long long _technology;
    long long _terminalType;
    long long _valueAddedServiceMode;
    unsigned long long _terminalSubtype;
    unsigned long long _pairingRequested;
    NSArray *_TCIs;
    NSArray *_merchantIdentifiers;
    NSString *_applicationIdentifier;
    NSString *_credentialIdentifier;
}

@property (nonatomic, getter=isECP2Field) BOOL ECP2Field; // @synthesize ECP2Field=_ECP2Field;
@property (copy, nonatomic) NSArray *TCIs; // @synthesize TCIs=_TCIs;
@property (readonly, nonatomic) long long accessTerminalSubtype;
@property (copy, nonatomic) NSString *applicationIdentifier; // @synthesize applicationIdentifier=_applicationIdentifier;
@property (nonatomic) BOOL authenticationRequired; // @synthesize authenticationRequired=_authenticationRequired;
@property (nonatomic) BOOL backgroundTransaction; // @synthesize backgroundTransaction=_backgroundTransaction;
@property (copy, nonatomic) NSString *credentialIdentifier; // @synthesize credentialIdentifier=_credentialIdentifier;
@property (copy, nonatomic) NSArray *merchantIdentifiers; // @synthesize merchantIdentifiers=_merchantIdentifiers;
@property (nonatomic) unsigned long long pairingRequested; // @synthesize pairingRequested=_pairingRequested;
@property (nonatomic) BOOL secondaryPropertiesAcquired; // @synthesize secondaryPropertiesAcquired=_secondaryPropertiesAcquired;
@property (nonatomic) BOOL secondaryPropertiesRequired; // @synthesize secondaryPropertiesRequired=_secondaryPropertiesRequired;
@property (readonly, nonatomic) BOOL shouldIgnore;
@property (readonly, nonatomic) unsigned long long technology; // @synthesize technology=_technology;
@property (readonly, nonatomic) unsigned long long terminalSubtype; // @synthesize terminalSubtype=_terminalSubtype;
@property (readonly, nonatomic) long long terminalType; // @synthesize terminalType=_terminalType;
@property (readonly, nonatomic) long long valueAddedServiceMode; // @synthesize valueAddedServiceMode=_valueAddedServiceMode;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTechnology:(unsigned long long)arg1 terminalType:(long long)arg2 terminalSubtype:(unsigned long long)arg3 valueAddedServiceMode:(long long)arg4;

@end
