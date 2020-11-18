//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreLocationProtobuf/NSCopying-Protocol.h>

@class NSString;

@interface CLPMeta : PBCodable <NSCopying>
{
    long long _submissionId;
    NSString *_probeId;
    NSString *_productId;
    NSString *_softwareVersion;
    struct {
        unsigned int submissionId:1;
    } _has;
}

@property (readonly, nonatomic) BOOL hasProbeId;
@property (nonatomic) BOOL hasSubmissionId;
@property (strong, nonatomic) NSString *probeId; // @synthesize probeId=_probeId;
@property (strong, nonatomic) NSString *productId; // @synthesize productId=_productId;
@property (strong, nonatomic) NSString *softwareVersion; // @synthesize softwareVersion=_softwareVersion;
@property (nonatomic) long long submissionId; // @synthesize submissionId=_submissionId;

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

