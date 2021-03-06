//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSearchForBillsIntent-Protocol.h>

@class NSString, _INPBBillPayeeValue, _INPBDateTimeRange, _INPBIntentMetadata;

@interface _INPBSearchForBillsIntent : PBCodable <_INPBSearchForBillsIntent, NSSecureCoding, NSCopying>
{
    CDStruct_c8e9def3 _has;
    int _billType;
    int _status;
    _INPBBillPayeeValue *_billPayee;
    _INPBDateTimeRange *_dueDateRange;
    _INPBIntentMetadata *_intentMetadata;
    _INPBDateTimeRange *_paymentDateRange;
}

@property (strong, nonatomic) _INPBBillPayeeValue *billPayee; // @synthesize billPayee=_billPayee;
@property (nonatomic) int billType; // @synthesize billType=_billType;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) _INPBDateTimeRange *dueDateRange; // @synthesize dueDateRange=_dueDateRange;
@property (readonly, nonatomic) BOOL hasBillPayee;
@property (nonatomic) BOOL hasBillType;
@property (readonly, nonatomic) BOOL hasDueDateRange;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly, nonatomic) BOOL hasPaymentDateRange;
@property (nonatomic) BOOL hasStatus;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property (strong, nonatomic) _INPBDateTimeRange *paymentDateRange; // @synthesize paymentDateRange=_paymentDateRange;
@property (nonatomic) int status; // @synthesize status=_status;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (int)StringAsBillType:(id)arg1;
- (int)StringAsStatus:(id)arg1;
- (id)billTypeAsString:(int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)statusAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

