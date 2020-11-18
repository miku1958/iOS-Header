//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface AWDCoreRoutineMagicMomentsSuggestionInstance : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _confidence;
    int _durationSinceLastSuggestion;
    int _reposponceTime;
    NSString *_suggestionId;
    NSMutableArray *_suggestions;
    struct {
        unsigned int timestamp:1;
        unsigned int confidence:1;
        unsigned int durationSinceLastSuggestion:1;
        unsigned int reposponceTime:1;
    } _has;
}

@property (nonatomic) int confidence; // @synthesize confidence=_confidence;
@property (nonatomic) int durationSinceLastSuggestion; // @synthesize durationSinceLastSuggestion=_durationSinceLastSuggestion;
@property (nonatomic) BOOL hasConfidence;
@property (nonatomic) BOOL hasDurationSinceLastSuggestion;
@property (nonatomic) BOOL hasReposponceTime;
@property (readonly, nonatomic) BOOL hasSuggestionId;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) int reposponceTime; // @synthesize reposponceTime=_reposponceTime;
@property (strong, nonatomic) NSString *suggestionId; // @synthesize suggestionId=_suggestionId;
@property (strong, nonatomic) NSMutableArray *suggestions; // @synthesize suggestions=_suggestions;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;

+ (Class)suggestionsType;
- (void)addSuggestions:(id)arg1;
- (void)clearSuggestions;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)suggestionsAtIndex:(unsigned long long)arg1;
- (unsigned long long)suggestionsCount;
- (void)writeTo:(id)arg1;

@end

