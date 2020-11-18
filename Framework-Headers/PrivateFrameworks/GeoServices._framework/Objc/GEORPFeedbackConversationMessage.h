//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class GEORPPostedBy, GEORPTimestamp, NSMutableArray, NSString, PBDataReader, PBUnknownFields;

@interface GEORPFeedbackConversationMessage : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    NSString *_comments;
    GEORPTimestamp *_postedAt;
    GEORPPostedBy *_postedBy;
    NSMutableArray *_surveyResponses;
    NSString *_uuid;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_comments:1;
        unsigned int read_postedAt:1;
        unsigned int read_postedBy:1;
        unsigned int read_surveyResponses:1;
        unsigned int read_uuid:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

@property (strong, nonatomic) NSString *comments;
@property (readonly, nonatomic) BOOL hasComments;
@property (readonly, nonatomic) BOOL hasPostedAt;
@property (readonly, nonatomic) BOOL hasPostedBy;
@property (readonly, nonatomic) BOOL hasUuid;
@property (strong, nonatomic) GEORPTimestamp *postedAt;
@property (strong, nonatomic) GEORPPostedBy *postedBy;
@property (strong, nonatomic) NSMutableArray *surveyResponses;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;
@property (strong, nonatomic) NSString *uuid;

+ (BOOL)isValid:(id)arg1;
+ (Class)surveyResponseType;
- (void).cxx_destruct;
- (void)addSurveyResponse:(id)arg1;
- (void)clearSurveyResponses;
- (void)clearUnknownFields:(BOOL)arg1;
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
- (void)mergeFrom:(id)arg1;
- (void)readAll:(BOOL)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)surveyResponseAtIndex:(unsigned long long)arg1;
- (unsigned long long)surveyResponsesCount;
- (void)writeTo:(id)arg1;

@end
