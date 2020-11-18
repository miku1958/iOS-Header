//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaPlayer/NSCopying-Protocol.h>

@class NSMutableArray;

@interface MPPCompoundPredicate : PBCodable <NSCopying>
{
    NSMutableArray *_predicates;
}

@property (strong, nonatomic) NSMutableArray *predicates; // @synthesize predicates=_predicates;

- (void).cxx_destruct;
- (void)addPredicates:(id)arg1;
- (void)clearPredicates;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (id)predicatesAtIndex:(unsigned long long)arg1;
- (unsigned long long)predicatesCount;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

