//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBFinancialAccountValue-Protocol.h>

@class NSString, _INPBBalanceAmountValue, _INPBDataString, _INPBValueMetadata;

@interface _INPBFinancialAccountValue : PBCodable <_INPBFinancialAccountValue, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int accountType:1;
    } _has;
    int _accountType;
    _INPBDataString *_accountNickname;
    NSString *_accountNumber;
    _INPBBalanceAmountValue *_balance;
    _INPBDataString *_organizationName;
    _INPBBalanceAmountValue *_secondaryBalance;
    _INPBValueMetadata *_valueMetadata;
}

@property (strong, nonatomic) _INPBDataString *accountNickname; // @synthesize accountNickname=_accountNickname;
@property (copy, nonatomic) NSString *accountNumber; // @synthesize accountNumber=_accountNumber;
@property (nonatomic) int accountType; // @synthesize accountType=_accountType;
@property (strong, nonatomic) _INPBBalanceAmountValue *balance; // @synthesize balance=_balance;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasAccountNickname;
@property (readonly, nonatomic) BOOL hasAccountNumber;
@property (nonatomic) BOOL hasAccountType;
@property (readonly, nonatomic) BOOL hasBalance;
@property (readonly, nonatomic) BOOL hasOrganizationName;
@property (readonly, nonatomic) BOOL hasSecondaryBalance;
@property (readonly, nonatomic) BOOL hasValueMetadata;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) _INPBDataString *organizationName; // @synthesize organizationName=_organizationName;
@property (strong, nonatomic) _INPBBalanceAmountValue *secondaryBalance; // @synthesize secondaryBalance=_secondaryBalance;
@property (readonly) Class superclass;
@property (strong, nonatomic) _INPBValueMetadata *valueMetadata; // @synthesize valueMetadata=_valueMetadata;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (int)StringAsAccountType:(id)arg1;
- (id)accountTypeAsString:(int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

