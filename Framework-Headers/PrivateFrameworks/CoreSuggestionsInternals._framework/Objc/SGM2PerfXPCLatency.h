//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreSuggestionsInternals/NSCopying-Protocol.h>

@class NSString;

@interface SGM2PerfXPCLatency : PBCodable <NSCopying>
{
    NSString *_key;
    int _method;
    struct {
        unsigned int method:1;
    } _has;
}

@property (readonly, nonatomic) BOOL hasKey;
@property (nonatomic) BOOL hasMethod;
@property (strong, nonatomic) NSString *key; // @synthesize key=_key;
@property (nonatomic) int method; // @synthesize method=_method;

- (void).cxx_destruct;
- (int)StringAsMethod:(id)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)methodAsString:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

