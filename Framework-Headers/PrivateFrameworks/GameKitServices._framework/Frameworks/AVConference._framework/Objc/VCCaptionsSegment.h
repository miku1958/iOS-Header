//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AVConference/NSCopying-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface VCCaptionsSegment : PBCodable <NSCopying>
{
    unsigned int _confidence;
    NSString *_text;
    BOOL _hasSpaceAfter;
    struct {
        unsigned int confidence:1;
        unsigned int hasSpaceAfter:1;
    } _has;
}

@property (nonatomic) unsigned int confidence; // @synthesize confidence=_confidence;
@property (nonatomic) BOOL hasConfidence;
@property (nonatomic) BOOL hasHasSpaceAfter;
@property (nonatomic) BOOL hasSpaceAfter; // @synthesize hasSpaceAfter=_hasSpaceAfter;
@property (readonly, nonatomic) BOOL hasText;
@property (strong, nonatomic) NSString *text; // @synthesize text=_text;

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

