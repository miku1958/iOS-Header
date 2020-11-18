//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NPKProtoStandalonePaymentCredentialUnion, NPKProtoStandalonePaymentProvisioningFlowManualEntryStepContext, NPKProtoStandalonePaymentRemoteCredential;

@interface NPKProtoStandalonePaymentProvisioningFlowSecondaryManualEntryStepContext : PBCodable <NSCopying>
{
    NPKProtoStandalonePaymentCredentialUnion *_credential;
    NPKProtoStandalonePaymentProvisioningFlowManualEntryStepContext *_manualEntryStepContext;
    NPKProtoStandalonePaymentRemoteCredential *_remoteCredential;
    BOOL _allowsAddingDifferentCard;
    struct {
        unsigned int allowsAddingDifferentCard:1;
    } _has;
}

@property (nonatomic) BOOL allowsAddingDifferentCard; // @synthesize allowsAddingDifferentCard=_allowsAddingDifferentCard;
@property (strong, nonatomic) NPKProtoStandalonePaymentCredentialUnion *credential; // @synthesize credential=_credential;
@property (nonatomic) BOOL hasAllowsAddingDifferentCard;
@property (readonly, nonatomic) BOOL hasCredential;
@property (readonly, nonatomic) BOOL hasRemoteCredential;
@property (strong, nonatomic) NPKProtoStandalonePaymentProvisioningFlowManualEntryStepContext *manualEntryStepContext; // @synthesize manualEntryStepContext=_manualEntryStepContext;
@property (strong, nonatomic) NPKProtoStandalonePaymentRemoteCredential *remoteCredential; // @synthesize remoteCredential=_remoteCredential;

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
