//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEOFormattedString, GEOGenericInstruction, GEOTransitListInstruction, GEOTransitSignInstruction;
@protocol GEOServerFormattedString;

@interface GEOInstructionSet : PBCodable <NSCopying>
{
    GEOFormattedString *_countStopsText;
    GEOFormattedString *_departureBar;
    GEOGenericInstruction *_genericInstruction;
    GEOTransitListInstruction *_transitListInstruction;
    GEOTransitSignInstruction *_transitSignInstruction;
}

@property (readonly, nonatomic) id<GEOServerFormattedString> countStopsFormattedString;
@property (strong, nonatomic) GEOFormattedString *countStopsText; // @synthesize countStopsText=_countStopsText;
@property (strong, nonatomic) GEOFormattedString *departureBar; // @synthesize departureBar=_departureBar;
@property (readonly, nonatomic) id<GEOServerFormattedString> departureBarFormattedString;
@property (strong, nonatomic) GEOGenericInstruction *genericInstruction; // @synthesize genericInstruction=_genericInstruction;
@property (readonly, nonatomic) BOOL hasCountStopsText;
@property (readonly, nonatomic) BOOL hasDepartureBar;
@property (readonly, nonatomic) BOOL hasGenericInstruction;
@property (readonly, nonatomic) BOOL hasTransitListInstruction;
@property (readonly, nonatomic) BOOL hasTransitSignInstruction;
@property (strong, nonatomic) GEOTransitListInstruction *transitListInstruction; // @synthesize transitListInstruction=_transitListInstruction;
@property (strong, nonatomic) GEOTransitSignInstruction *transitSignInstruction; // @synthesize transitSignInstruction=_transitSignInstruction;

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

