//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList, NSMutableArray;

@interface COMAPPLEFELDSPARPROTOCOLLIVERPOOLArticleScores : PBCodable <NSCopying>
{
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *_globalCohorts;
    COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *_sourceChannelCohorts;
    NSMutableArray *_topicCohortScores;
    NSMutableArray *_topicCohorts;
}

@property (strong, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *globalCohorts; // @synthesize globalCohorts=_globalCohorts;
@property (readonly, nonatomic) BOOL hasGlobalCohorts;
@property (readonly, nonatomic) BOOL hasSourceChannelCohorts;
@property (strong, nonatomic) COMAPPLEFELDSPARPROTOCOLLIVERPOOLCohortList *sourceChannelCohorts; // @synthesize sourceChannelCohorts=_sourceChannelCohorts;
@property (strong, nonatomic) NSMutableArray *topicCohortScores; // @synthesize topicCohortScores=_topicCohortScores;
@property (strong, nonatomic) NSMutableArray *topicCohorts; // @synthesize topicCohorts=_topicCohorts;

+ (Class)topicCohortScoresType;
+ (Class)topicCohortsType;
- (void).cxx_destruct;
- (void)addTopicCohortScores:(id)arg1;
- (void)addTopicCohorts:(id)arg1;
- (void)clearTopicCohortScores;
- (void)clearTopicCohorts;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)topicCohortScoresAtIndex:(unsigned long long)arg1;
- (unsigned long long)topicCohortScoresCount;
- (id)topicCohortsAtIndex:(unsigned long long)arg1;
- (unsigned long long)topicCohortsCount;
- (void)writeTo:(id)arg1;

@end
