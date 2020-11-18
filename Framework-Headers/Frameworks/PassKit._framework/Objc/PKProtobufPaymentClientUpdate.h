//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <PassKitCore/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface PKProtobufPaymentClientUpdate : PBCodable <NSCopying>
{
    NSMutableArray *_paymentSummaryItems;
    NSString *_remotePaymentRequestIdentifier;
    NSString *_selectedAID;
    NSMutableArray *_shippingMethods;
    unsigned int _status;
    CDStruct_47fe53f2 _has;
}

@property (readonly, nonatomic) BOOL hasRemotePaymentRequestIdentifier;
@property (readonly, nonatomic) BOOL hasSelectedAID;
@property (nonatomic) BOOL hasStatus;
@property (strong, nonatomic) NSMutableArray *paymentSummaryItems; // @synthesize paymentSummaryItems=_paymentSummaryItems;
@property (strong, nonatomic) NSString *remotePaymentRequestIdentifier; // @synthesize remotePaymentRequestIdentifier=_remotePaymentRequestIdentifier;
@property (strong, nonatomic) NSString *selectedAID; // @synthesize selectedAID=_selectedAID;
@property (strong, nonatomic) NSMutableArray *shippingMethods; // @synthesize shippingMethods=_shippingMethods;
@property (nonatomic) unsigned int status; // @synthesize status=_status;

+ (Class)paymentSummaryItemsType;
+ (Class)shippingMethodsType;
- (void).cxx_destruct;
- (void)addPaymentSummaryItems:(id)arg1;
- (void)addShippingMethods:(id)arg1;
- (void)clearPaymentSummaryItems;
- (void)clearShippingMethods;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)paymentSummaryItemsAtIndex:(unsigned long long)arg1;
- (unsigned long long)paymentSummaryItemsCount;
- (BOOL)readFrom:(id)arg1;
- (id)shippingMethodsAtIndex:(unsigned long long)arg1;
- (unsigned long long)shippingMethodsCount;
- (void)writeTo:(id)arg1;

@end
