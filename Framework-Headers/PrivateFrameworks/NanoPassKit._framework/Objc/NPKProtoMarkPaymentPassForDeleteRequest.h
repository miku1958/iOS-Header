//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBRequest.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface NPKProtoMarkPaymentPassForDeleteRequest : PBRequest <NSCopying>
{
    NSString *_passID;
    NSMutableArray *_paymentApplicationAIDs;
}

@property (strong, nonatomic) NSString *passID; // @synthesize passID=_passID;
@property (strong, nonatomic) NSMutableArray *paymentApplicationAIDs; // @synthesize paymentApplicationAIDs=_paymentApplicationAIDs;

+ (Class)paymentApplicationAIDsType;
- (void).cxx_destruct;
- (void)addPaymentApplicationAIDs:(id)arg1;
- (void)clearPaymentApplicationAIDs;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)paymentApplicationAIDsAtIndex:(unsigned long long)arg1;
- (unsigned long long)paymentApplicationAIDsCount;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
