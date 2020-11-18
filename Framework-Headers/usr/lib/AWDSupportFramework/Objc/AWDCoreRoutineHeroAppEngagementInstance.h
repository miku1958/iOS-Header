//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <AWDSupportFramework/NSCopying-Protocol.h>

@class NSString;

@interface AWDCoreRoutineHeroAppEngagementInstance : PBCodable <NSCopying>
{
    unsigned long long _timestamp;
    int _actionType;
    NSString *_suggestionId;
    int _uiPlacement;
    struct {
        unsigned int timestamp:1;
        unsigned int actionType:1;
        unsigned int uiPlacement:1;
    } _has;
}

@property (nonatomic) int actionType; // @synthesize actionType=_actionType;
@property (nonatomic) BOOL hasActionType;
@property (readonly, nonatomic) BOOL hasSuggestionId;
@property (nonatomic) BOOL hasTimestamp;
@property (nonatomic) BOOL hasUiPlacement;
@property (strong, nonatomic) NSString *suggestionId; // @synthesize suggestionId=_suggestionId;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property (nonatomic) int uiPlacement; // @synthesize uiPlacement=_uiPlacement;

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
