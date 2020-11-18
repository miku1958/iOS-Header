//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray;

@interface GEOInstructionErrorFeedback : PBCodable <NSCopying>
{
    NSMutableArray *_clientInstructions;
    int _instructionStage;
    int _maneuverType;
    NSMutableArray *_serverInstructions;
    BOOL _isSpoken;
    struct {
        unsigned int instructionStage:1;
        unsigned int maneuverType:1;
        unsigned int isSpoken:1;
    } _has;
}

@property (strong, nonatomic) NSMutableArray *clientInstructions; // @synthesize clientInstructions=_clientInstructions;
@property (nonatomic) BOOL hasInstructionStage;
@property (nonatomic) BOOL hasIsSpoken;
@property (nonatomic) BOOL hasManeuverType;
@property (nonatomic) int instructionStage; // @synthesize instructionStage=_instructionStage;
@property (nonatomic) BOOL isSpoken; // @synthesize isSpoken=_isSpoken;
@property (nonatomic) int maneuverType; // @synthesize maneuverType=_maneuverType;
@property (strong, nonatomic) NSMutableArray *serverInstructions; // @synthesize serverInstructions=_serverInstructions;

+ (Class)clientInstructionType;
+ (Class)serverInstructionType;
- (int)StringAsInstructionStage:(id)arg1;
- (int)StringAsManeuverType:(id)arg1;
- (void)addClientInstruction:(id)arg1;
- (void)addServerInstruction:(id)arg1;
- (void)clearClientInstructions;
- (void)clearServerInstructions;
- (id)clientInstructionAtIndex:(unsigned long long)arg1;
- (unsigned long long)clientInstructionsCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)instructionStageAsString:(int)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)maneuverTypeAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)serverInstructionAtIndex:(unsigned long long)arg1;
- (unsigned long long)serverInstructionsCount;
- (void)writeTo:(id)arg1;

@end

