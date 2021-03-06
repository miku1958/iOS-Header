//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoPassKit/NSCopying-Protocol.h>

@class NSString;

@interface NPKProtoStandalonePaymentProvisioningFlowReaderModeIngestionStepContext : PBCodable <NSCopying>
{
    float _ingestionProgress;
    int _ingestionState;
    NSString *_physicalCardImageURL;
    NSString *_subtitle;
    NSString *_title;
    struct {
        unsigned int ingestionProgress:1;
        unsigned int ingestionState:1;
    } _has;
}

@property (nonatomic) BOOL hasIngestionProgress;
@property (nonatomic) BOOL hasIngestionState;
@property (readonly, nonatomic) BOOL hasPhysicalCardImageURL;
@property (readonly, nonatomic) BOOL hasSubtitle;
@property (readonly, nonatomic) BOOL hasTitle;
@property (nonatomic) float ingestionProgress; // @synthesize ingestionProgress=_ingestionProgress;
@property (nonatomic) int ingestionState; // @synthesize ingestionState=_ingestionState;
@property (strong, nonatomic) NSString *physicalCardImageURL; // @synthesize physicalCardImageURL=_physicalCardImageURL;
@property (strong, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property (strong, nonatomic) NSString *title; // @synthesize title=_title;

- (void).cxx_destruct;
- (int)StringAsIngestionState:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)ingestionStateAsString:(int)arg1;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

