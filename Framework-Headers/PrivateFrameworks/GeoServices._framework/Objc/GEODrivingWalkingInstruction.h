//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOFormattedString, NSMutableArray, PBDataReader, PBUnknownFields;

__attribute__((visibility("hidden")))
@interface GEODrivingWalkingInstruction : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSMutableArray *_continueCommands;
    GEOFormattedString *_distance;
    NSMutableArray *_mergeCommands;
    NSMutableArray *_normalCommands;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_continueCommands:1;
        unsigned int read_distance:1;
        unsigned int read_mergeCommands:1;
        unsigned int read_normalCommands:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

@property (strong, nonatomic) NSMutableArray *continueCommands;
@property (strong, nonatomic) GEOFormattedString *distance;
@property (readonly, nonatomic) BOOL hasDistance;
@property (strong, nonatomic) NSMutableArray *mergeCommands;
@property (strong, nonatomic) NSMutableArray *normalCommands;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)continueCommandType;
+ (BOOL)isValid:(id)arg1;
+ (Class)mergeCommandType;
+ (Class)normalCommandType;
- (void).cxx_destruct;
- (void)addContinueCommand:(id)arg1;
- (void)addMergeCommand:(id)arg1;
- (void)addNormalCommand:(id)arg1;
- (void)clearContinueCommands;
- (void)clearMergeCommands;
- (void)clearNormalCommands;
- (void)clearUnknownFields:(BOOL)arg1;
- (id)continueCommandAtIndex:(unsigned long long)arg1;
- (unsigned long long)continueCommandsCount;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (id)init;
- (id)initWithData:(id)arg1;
- (id)initWithDictionary:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)jsonRepresentation;
- (id)mergeCommandAtIndex:(unsigned long long)arg1;
- (unsigned long long)mergeCommandsCount;
- (void)mergeFrom:(id)arg1;
- (id)normalCommandAtIndex:(unsigned long long)arg1;
- (unsigned long long)normalCommandsCount;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

