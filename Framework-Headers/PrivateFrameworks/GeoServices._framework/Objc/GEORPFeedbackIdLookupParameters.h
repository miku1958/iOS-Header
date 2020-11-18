//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <GeoServices/NSCopying-Protocol.h>

@class NSMutableArray, PBDataReader, PBUnknownFields;

@interface GEORPFeedbackIdLookupParameters : PBCodable <NSCopying>
{
    PBDataReader *_reader;
    PBUnknownFields *_unknownFields;
    CDStruct_95bda58d _feedbackComponentTypes;
    NSMutableArray *_feedbackIds;
    unsigned int _readerMarkPos;
    unsigned int _readerMarkLength;
    struct os_unfair_lock_s _readerLock;
    struct {
        unsigned int read_unknownFields:1;
        unsigned int read_feedbackComponentTypes:1;
        unsigned int read_feedbackIds:1;
        unsigned int wrote_anyField:1;
    } _flags;
}

@property (readonly, nonatomic) int *feedbackComponentTypes;
@property (readonly, nonatomic) unsigned long long feedbackComponentTypesCount;
@property (strong, nonatomic) NSMutableArray *feedbackIds;
@property (readonly, nonatomic) PBUnknownFields *unknownFields;

+ (Class)feedbackIdType;
+ (BOOL)isValid:(id)arg1;
- (void).cxx_destruct;
- (int)StringAsFeedbackComponentTypes:(id)arg1;
- (void)addFeedbackComponentType:(int)arg1;
- (void)addFeedbackId:(id)arg1;
- (void)clearFeedbackComponentTypes;
- (void)clearFeedbackIds;
- (void)clearUnknownFields:(BOOL)arg1;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)description;
- (id)dictionaryRepresentation;
- (int)feedbackComponentTypeAtIndex:(unsigned long long)arg1;
- (id)feedbackComponentTypesAsString:(int)arg1;
- (id)feedbackIdAtIndex:(unsigned long long)arg1;
- (unsigned long long)feedbackIdsCount;
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
- (void)setFeedbackComponentTypes:(int *)arg1 count:(unsigned long long)arg2;
- (void)writeTo:(id)arg1;

@end
