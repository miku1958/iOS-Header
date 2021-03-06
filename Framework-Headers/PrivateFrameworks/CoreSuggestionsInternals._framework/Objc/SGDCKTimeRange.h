//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreSuggestionsInternals/NSCopying-Protocol.h>

@interface SGDCKTimeRange : PBCodable <NSCopying>
{
    double _end;
    long long _endUTCOffsetSeconds;
    double _start;
    long long _startUTCOffsetSeconds;
    BOOL _floating;
    struct {
        unsigned int end:1;
        unsigned int endUTCOffsetSeconds:1;
        unsigned int start:1;
        unsigned int startUTCOffsetSeconds:1;
        unsigned int floating:1;
    } _has;
}

@property (nonatomic) double end; // @synthesize end=_end;
@property (nonatomic) long long endUTCOffsetSeconds; // @synthesize endUTCOffsetSeconds=_endUTCOffsetSeconds;
@property (nonatomic) BOOL floating; // @synthesize floating=_floating;
@property (nonatomic) BOOL hasEnd;
@property (nonatomic) BOOL hasEndUTCOffsetSeconds;
@property (nonatomic) BOOL hasFloating;
@property (nonatomic) BOOL hasStart;
@property (nonatomic) BOOL hasStartUTCOffsetSeconds;
@property (nonatomic) double start; // @synthesize start=_start;
@property (nonatomic) long long startUTCOffsetSeconds; // @synthesize startUTCOffsetSeconds=_startUTCOffsetSeconds;

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

