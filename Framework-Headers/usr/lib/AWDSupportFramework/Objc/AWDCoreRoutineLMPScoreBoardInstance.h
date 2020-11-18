//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@class NSString;

@interface AWDCoreRoutineLMPScoreBoardInstance : PBCodable <NSCopying>
{
    int _corrects;
    int _incorrects;
    int _invalids;
    NSString *_keyword;
    int _unknowns;
    struct {
        unsigned int corrects:1;
        unsigned int incorrects:1;
        unsigned int invalids:1;
        unsigned int unknowns:1;
    } _has;
}

@property (nonatomic) int corrects; // @synthesize corrects=_corrects;
@property (nonatomic) BOOL hasCorrects;
@property (nonatomic) BOOL hasIncorrects;
@property (nonatomic) BOOL hasInvalids;
@property (readonly, nonatomic) BOOL hasKeyword;
@property (nonatomic) BOOL hasUnknowns;
@property (nonatomic) int incorrects; // @synthesize incorrects=_incorrects;
@property (nonatomic) int invalids; // @synthesize invalids=_invalids;
@property (strong, nonatomic) NSString *keyword; // @synthesize keyword=_keyword;
@property (nonatomic) int unknowns; // @synthesize unknowns=_unknowns;

- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

