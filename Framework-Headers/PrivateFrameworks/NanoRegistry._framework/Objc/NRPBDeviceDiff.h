//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NanoRegistry/NSCopying-Protocol.h>

@class NSMutableArray;

@interface NRPBDeviceDiff : PBCodable <NSCopying>
{
    NSMutableArray *_diffs;
    NSMutableArray *_names;
}

@property (strong, nonatomic) NSMutableArray *diffs; // @synthesize diffs=_diffs;
@property (strong, nonatomic) NSMutableArray *names; // @synthesize names=_names;

+ (Class)diffsType;
+ (Class)namesType;
- (void).cxx_destruct;
- (void)addDiffs:(id)arg1;
- (void)addNames:(id)arg1;
- (void)clearDiffs;
- (void)clearNames;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)diffsAtIndex:(unsigned long long)arg1;
- (unsigned long long)diffsCount;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (id)namesAtIndex:(unsigned long long)arg1;
- (unsigned long long)namesCount;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

