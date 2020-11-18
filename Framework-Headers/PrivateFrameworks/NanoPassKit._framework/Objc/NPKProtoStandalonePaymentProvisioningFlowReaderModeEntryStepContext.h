//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NPKProtoStandalonePaymentSetupProduct, NSMutableArray, NSString;

@interface NPKProtoStandalonePaymentProvisioningFlowReaderModeEntryStepContext : PBCodable <NSCopying>
{
    NPKProtoStandalonePaymentSetupProduct *_product;
    NSMutableArray *_setupFields;
    NSString *_subtitle;
    NSString *_title;
}

@property (readonly, nonatomic) BOOL hasProduct;
@property (readonly, nonatomic) BOOL hasSubtitle;
@property (readonly, nonatomic) BOOL hasTitle;
@property (strong, nonatomic) NPKProtoStandalonePaymentSetupProduct *product; // @synthesize product=_product;
@property (strong, nonatomic) NSMutableArray *setupFields; // @synthesize setupFields=_setupFields;
@property (strong, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property (strong, nonatomic) NSString *title; // @synthesize title=_title;

+ (Class)setupFieldsType;
- (void).cxx_destruct;
- (void)addSetupFields:(id)arg1;
- (void)clearSetupFields;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)setupFieldsAtIndex:(unsigned long long)arg1;
- (unsigned long long)setupFieldsCount;
- (void)writeTo:(id)arg1;

@end
