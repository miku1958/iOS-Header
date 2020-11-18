//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NPKProtoStandaloneError;

@interface NPKProtoStandalonePaymentProvisioningFlowProvisioningResultStepContext : PBCodable <NSCopying>
{
    NPKProtoStandaloneError *_error;
    BOOL _cardAdded;
    struct {
        unsigned int cardAdded:1;
    } _has;
}

@property (nonatomic) BOOL cardAdded; // @synthesize cardAdded=_cardAdded;
@property (strong, nonatomic) NPKProtoStandaloneError *error; // @synthesize error=_error;
@property (nonatomic) BOOL hasCardAdded;
@property (readonly, nonatomic) BOOL hasError;

- (void).cxx_destruct;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
