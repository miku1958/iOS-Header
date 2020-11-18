//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSString;

@interface COMAPPLEFELDSPARPROTOCOLANALYTICSEVENTSIssueData : PBCodable <NSCopying>
{
    NSString *_issueId;
    int _issueType;
    BOOL _isBundlePaid;
    CDStruct_e072d072 _has;
}

@property (nonatomic) BOOL hasIsBundlePaid;
@property (readonly, nonatomic) BOOL hasIssueId;
@property (nonatomic) BOOL hasIssueType;
@property (nonatomic) BOOL isBundlePaid; // @synthesize isBundlePaid=_isBundlePaid;
@property (strong, nonatomic) NSString *issueId; // @synthesize issueId=_issueId;
@property (nonatomic) int issueType; // @synthesize issueType=_issueType;

- (void).cxx_destruct;
- (int)StringAsIssueType:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)issueTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

