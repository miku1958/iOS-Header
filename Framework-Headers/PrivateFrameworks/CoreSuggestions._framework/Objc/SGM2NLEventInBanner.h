//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreSuggestions/NSCopying-Protocol.h>

@class NSString;

@interface SGM2NLEventInBanner : PBCodable <NSCopying>
{
    int _actionType;
    NSString *_addedAttendeesCount;
    NSString *_calendarAppUsageLevel;
    unsigned int _confidenceScore;
    int _dateAdj;
    unsigned int _daysFromStartDate;
    int _duraAdj;
    NSString *_eventType;
    int _extractionLevel;
    int _interface;
    NSString *_key;
    NSString *_languageID;
    int _locationAdj;
    int _mailAppUsageLevel;
    int _messagesAppUsageLevel;
    unsigned int _participantCount;
    int _significantSender;
    int _titleAdj;
    int _titleSource;
    unsigned int _usedBubblesCount;
    struct {
        unsigned int actionType:1;
        unsigned int confidenceScore:1;
        unsigned int dateAdj:1;
        unsigned int daysFromStartDate:1;
        unsigned int duraAdj:1;
        unsigned int extractionLevel:1;
        unsigned int interface:1;
        unsigned int locationAdj:1;
        unsigned int mailAppUsageLevel:1;
        unsigned int messagesAppUsageLevel:1;
        unsigned int participantCount:1;
        unsigned int significantSender:1;
        unsigned int titleAdj:1;
        unsigned int titleSource:1;
        unsigned int usedBubblesCount:1;
    } _has;
}

@property (nonatomic) int actionType; // @synthesize actionType=_actionType;
@property (strong, nonatomic) NSString *addedAttendeesCount; // @synthesize addedAttendeesCount=_addedAttendeesCount;
@property (strong, nonatomic) NSString *calendarAppUsageLevel; // @synthesize calendarAppUsageLevel=_calendarAppUsageLevel;
@property (nonatomic) unsigned int confidenceScore; // @synthesize confidenceScore=_confidenceScore;
@property (nonatomic) int dateAdj; // @synthesize dateAdj=_dateAdj;
@property (nonatomic) unsigned int daysFromStartDate; // @synthesize daysFromStartDate=_daysFromStartDate;
@property (nonatomic) int duraAdj; // @synthesize duraAdj=_duraAdj;
@property (strong, nonatomic) NSString *eventType; // @synthesize eventType=_eventType;
@property (nonatomic) int extractionLevel; // @synthesize extractionLevel=_extractionLevel;
@property (nonatomic) BOOL hasActionType;
@property (readonly, nonatomic) BOOL hasAddedAttendeesCount;
@property (readonly, nonatomic) BOOL hasCalendarAppUsageLevel;
@property (nonatomic) BOOL hasConfidenceScore;
@property (nonatomic) BOOL hasDateAdj;
@property (nonatomic) BOOL hasDaysFromStartDate;
@property (nonatomic) BOOL hasDuraAdj;
@property (readonly, nonatomic) BOOL hasEventType;
@property (nonatomic) BOOL hasExtractionLevel;
@property (nonatomic) BOOL hasInterface;
@property (readonly, nonatomic) BOOL hasKey;
@property (readonly, nonatomic) BOOL hasLanguageID;
@property (nonatomic) BOOL hasLocationAdj;
@property (nonatomic) BOOL hasMailAppUsageLevel;
@property (nonatomic) BOOL hasMessagesAppUsageLevel;
@property (nonatomic) BOOL hasParticipantCount;
@property (nonatomic) BOOL hasSignificantSender;
@property (nonatomic) BOOL hasTitleAdj;
@property (nonatomic) BOOL hasTitleSource;
@property (nonatomic) BOOL hasUsedBubblesCount;
@property (nonatomic) int interface; // @synthesize interface=_interface;
@property (strong, nonatomic) NSString *key; // @synthesize key=_key;
@property (strong, nonatomic) NSString *languageID; // @synthesize languageID=_languageID;
@property (nonatomic) int locationAdj; // @synthesize locationAdj=_locationAdj;
@property (nonatomic) int mailAppUsageLevel; // @synthesize mailAppUsageLevel=_mailAppUsageLevel;
@property (nonatomic) int messagesAppUsageLevel; // @synthesize messagesAppUsageLevel=_messagesAppUsageLevel;
@property (nonatomic) unsigned int participantCount; // @synthesize participantCount=_participantCount;
@property (nonatomic) int significantSender; // @synthesize significantSender=_significantSender;
@property (nonatomic) int titleAdj; // @synthesize titleAdj=_titleAdj;
@property (nonatomic) int titleSource; // @synthesize titleSource=_titleSource;
@property (nonatomic) unsigned int usedBubblesCount; // @synthesize usedBubblesCount=_usedBubblesCount;

- (void).cxx_destruct;
- (int)StringAsActionType:(id)arg1;
- (int)StringAsDateAdj:(id)arg1;
- (int)StringAsDuraAdj:(id)arg1;
- (int)StringAsExtractionLevel:(id)arg1;
- (int)StringAsInterface:(id)arg1;
- (int)StringAsLocationAdj:(id)arg1;
- (int)StringAsMailAppUsageLevel:(id)arg1;
- (int)StringAsMessagesAppUsageLevel:(id)arg1;
- (int)StringAsSignificantSender:(id)arg1;
- (int)StringAsTitleAdj:(id)arg1;
- (int)StringAsTitleSource:(id)arg1;
- (id)actionTypeAsString:(int)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dateAdjAsString:(int)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)duraAdjAsString:(int)arg1;
- (id)extractionLevelAsString:(int)arg1;
- (unsigned long long)hash;
- (id)interfaceAsString:(int)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)locationAdjAsString:(int)arg1;
- (id)mailAppUsageLevelAsString:(int)arg1;
- (void)mergeFrom:(id)arg1;
- (id)messagesAppUsageLevelAsString:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)significantSenderAsString:(int)arg1;
- (id)titleAdjAsString:(int)arg1;
- (id)titleSourceAsString:(int)arg1;
- (void)writeTo:(id)arg1;

@end

