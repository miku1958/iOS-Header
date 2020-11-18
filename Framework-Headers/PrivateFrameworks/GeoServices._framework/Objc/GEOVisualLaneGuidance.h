//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOVisualLaneGuidance : PBCodable <NSCopying>
{
    NSMutableArray *_instructions;
    NSMutableArray *_laneInfos;
    NSMutableArray *_titles;
}

@property (strong, nonatomic) NSMutableArray *instructions; // @synthesize instructions=_instructions;
@property (strong, nonatomic) NSMutableArray *laneInfos; // @synthesize laneInfos=_laneInfos;
@property (strong, nonatomic) NSMutableArray *titles; // @synthesize titles=_titles;

+ (Class)instructionType;
+ (Class)laneInfoType;
+ (Class)titleType;
- (void).cxx_destruct;
- (void)addInstruction:(id)arg1;
- (void)addLaneInfo:(id)arg1;
- (void)addTitle:(id)arg1;
- (void)clearInstructions;
- (void)clearLaneInfos;
- (void)clearTitles;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)instructionAtIndex:(unsigned long long)arg1;
- (unsigned long long)instructionsCount;
- (BOOL)isEqual:(id)arg1;
- (id)laneInfoAtIndex:(unsigned long long)arg1;
- (unsigned long long)laneInfosCount;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)titleAtIndex:(unsigned long long)arg1;
- (unsigned long long)titlesCount;
- (void)writeTo:(id)arg1;

@end

