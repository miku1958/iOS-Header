//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CompanionSync/NSCopying-Protocol.h>

@class NSMutableArray;

@interface SYVectorClock : PBCodable <NSCopying>
{
    NSMutableArray *_clocks;
}

@property (strong, nonatomic) NSMutableArray *clocks; // @synthesize clocks=_clocks;

+ (void)initialize;
- (void).cxx_destruct;
- (BOOL)_setTheory_isEqual:(id)arg1;
- (void)addClocks:(id)arg1;
- (void)clearClocks;
- (id)clockForPeer:(id)arg1;
- (id)clockForPeerID:(id)arg1;
- (unsigned long long)clockValueForPeer:(id)arg1;
- (unsigned long long)clockValueForPeerID:(id)arg1;
- (id)clocksAtIndex:(unsigned long long)arg1;
- (unsigned long long)clocksCount;
- (id)compactDictionaryRepresentation;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (BOOL)hasClockForPeer:(id)arg1;
- (BOOL)hasClockForPeerID:(id)arg1;
- (unsigned long long)hash;
- (void)increaseClockForPeer:(id)arg1 by:(unsigned long long)arg2;
- (void)increaseClockForPeerID:(id)arg1 by:(unsigned long long)arg2;
- (void)incrementClockForPeer:(id)arg1;
- (void)incrementClockForPeerID:(id)arg1;
- (id)initWithJSONRepresentation:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)setClockValue:(unsigned long long)arg1 forPeer:(id)arg2;
- (void)setClockValue:(unsigned long long)arg1 forPeerID:(id)arg2;
- (void)writeTo:(id)arg1;

@end

