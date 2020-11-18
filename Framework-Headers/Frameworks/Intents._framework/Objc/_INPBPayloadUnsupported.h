//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>

@class NSMutableArray, PBUnknownFields;

@interface _INPBPayloadUnsupported : PBCodable <NSCopying>
{
    PBUnknownFields *_unknownFields;
    NSMutableArray *_conflictingParameters;
    int _reason;
    int _requestPaymentIntentCurrencyAmountUnsupportedReason;
    int _requestPaymentIntentPayerUnsupportedReason;
    int _sendMessageIntentRecipientUnsupportedReason;
    int _sendPaymentIntentCurrencyAmountUnsupportedReason;
    int _sendPaymentIntentPayeeUnsupportedReason;
    struct {
        unsigned int reason:1;
        unsigned int requestPaymentIntentCurrencyAmountUnsupportedReason:1;
        unsigned int requestPaymentIntentPayerUnsupportedReason:1;
        unsigned int sendMessageIntentRecipientUnsupportedReason:1;
        unsigned int sendPaymentIntentCurrencyAmountUnsupportedReason:1;
        unsigned int sendPaymentIntentPayeeUnsupportedReason:1;
    } _has;
}

@property (strong, nonatomic) NSMutableArray *conflictingParameters; // @synthesize conflictingParameters=_conflictingParameters;
@property (nonatomic) BOOL hasReason;
@property (nonatomic) BOOL hasRequestPaymentIntentCurrencyAmountUnsupportedReason;
@property (nonatomic) BOOL hasRequestPaymentIntentPayerUnsupportedReason;
@property (nonatomic) BOOL hasSendMessageIntentRecipientUnsupportedReason;
@property (nonatomic) BOOL hasSendPaymentIntentCurrencyAmountUnsupportedReason;
@property (nonatomic) BOOL hasSendPaymentIntentPayeeUnsupportedReason;
@property (nonatomic) int reason; // @synthesize reason=_reason;
@property (nonatomic) int requestPaymentIntentCurrencyAmountUnsupportedReason;
@property (nonatomic) int requestPaymentIntentPayerUnsupportedReason;
@property (nonatomic) int sendMessageIntentRecipientUnsupportedReason;
@property (nonatomic) int sendPaymentIntentCurrencyAmountUnsupportedReason;
@property (nonatomic) int sendPaymentIntentPayeeUnsupportedReason;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)conflictingParametersType;
+ (id)options;
- (void).cxx_destruct;
- (int)StringAsReason:(id)arg1;
- (int)StringAsRequestPaymentIntentCurrencyAmountUnsupportedReason:(id)arg1;
- (int)StringAsRequestPaymentIntentPayerUnsupportedReason:(id)arg1;
- (int)StringAsSendMessageIntentRecipientUnsupportedReason:(id)arg1;
- (int)StringAsSendPaymentIntentCurrencyAmountUnsupportedReason:(id)arg1;
- (int)StringAsSendPaymentIntentPayeeUnsupportedReason:(id)arg1;
- (void)addConflictingParameters:(id)arg1;
- (void)clearConflictingParameters;
- (id)conflictingParametersAtIndex:(unsigned long long)arg1;
- (unsigned long long)conflictingParametersCount;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)reasonAsString:(int)arg1;
- (id)requestPaymentIntentCurrencyAmountUnsupportedReasonAsString:(int)arg1;
- (id)requestPaymentIntentPayerUnsupportedReasonAsString:(int)arg1;
- (id)sendMessageIntentRecipientUnsupportedReasonAsString:(int)arg1;
- (id)sendPaymentIntentCurrencyAmountUnsupportedReasonAsString:(int)arg1;
- (id)sendPaymentIntentPayeeUnsupportedReasonAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

