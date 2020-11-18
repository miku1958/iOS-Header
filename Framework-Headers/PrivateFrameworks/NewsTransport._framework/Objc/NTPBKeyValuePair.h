//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <NewsTransport/NSCopying-Protocol.h>

@class NSData, NSString, NTPBCacheCoordinatorHints, NTPBDate, NTPBNetworkSessionList, NTPBPersonalizationLocalData, NTPBReadingHistoryItem;

@interface NTPBKeyValuePair : PBCodable <NSCopying>
{
    NTPBCacheCoordinatorHints *_cacheCoordinatorHintsValue;
    NSData *_dataValue;
    NTPBDate *_dateValue;
    NSString *_key;
    NTPBNetworkSessionList *_networkSessionList;
    NTPBPersonalizationLocalData *_personalizationLocalData;
    NTPBReadingHistoryItem *_readingHistoryItem;
    NSData *_recordData;
    NSString *_stringValue;
    int _valueType;
    struct {
        unsigned int valueType:1;
    } _has;
}

@property (strong, nonatomic) NTPBCacheCoordinatorHints *cacheCoordinatorHintsValue; // @synthesize cacheCoordinatorHintsValue=_cacheCoordinatorHintsValue;
@property (strong, nonatomic) NSData *dataValue; // @synthesize dataValue=_dataValue;
@property (strong, nonatomic) NTPBDate *dateValue; // @synthesize dateValue=_dateValue;
@property (readonly, nonatomic) BOOL hasCacheCoordinatorHintsValue;
@property (readonly, nonatomic) BOOL hasDataValue;
@property (readonly, nonatomic) BOOL hasDateValue;
@property (readonly, nonatomic) BOOL hasKey;
@property (readonly, nonatomic) BOOL hasNetworkSessionList;
@property (readonly, nonatomic) BOOL hasPersonalizationLocalData;
@property (readonly, nonatomic) BOOL hasReadingHistoryItem;
@property (readonly, nonatomic) BOOL hasRecordData;
@property (readonly, nonatomic) BOOL hasStringValue;
@property (nonatomic) BOOL hasValueType;
@property (strong, nonatomic) NSString *key; // @synthesize key=_key;
@property (strong, nonatomic) NTPBNetworkSessionList *networkSessionList; // @synthesize networkSessionList=_networkSessionList;
@property (strong, nonatomic) NTPBPersonalizationLocalData *personalizationLocalData; // @synthesize personalizationLocalData=_personalizationLocalData;
@property (strong, nonatomic) NTPBReadingHistoryItem *readingHistoryItem; // @synthesize readingHistoryItem=_readingHistoryItem;
@property (strong, nonatomic) NSData *recordData; // @synthesize recordData=_recordData;
@property (strong, nonatomic) NSString *stringValue; // @synthesize stringValue=_stringValue;
@property (nonatomic) int valueType; // @synthesize valueType=_valueType;

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

