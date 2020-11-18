//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Navigation/NSCopying-Protocol.h>

@class NSMutableArray, NSString;

@interface MNTracePlaybackDetails : PBCodable <NSCopying>
{
    double _currentPosition;
    double _traceDuration;
    NSMutableArray *_bookmarks;
    int _eventType;
    unsigned int _recordedBookmarkID;
    NSString *_tracePath;
    struct {
        unsigned int currentPosition:1;
        unsigned int traceDuration:1;
        unsigned int eventType:1;
        unsigned int recordedBookmarkID:1;
    } _has;
}

@property (strong, nonatomic) NSMutableArray *bookmarks; // @synthesize bookmarks=_bookmarks;
@property (nonatomic) double currentPosition; // @synthesize currentPosition=_currentPosition;
@property (nonatomic) int eventType; // @synthesize eventType=_eventType;
@property (nonatomic) BOOL hasCurrentPosition;
@property (nonatomic) BOOL hasEventType;
@property (nonatomic) BOOL hasRecordedBookmarkID;
@property (nonatomic) BOOL hasTraceDuration;
@property (readonly, nonatomic) BOOL hasTracePath;
@property (nonatomic) unsigned int recordedBookmarkID; // @synthesize recordedBookmarkID=_recordedBookmarkID;
@property (nonatomic) double traceDuration; // @synthesize traceDuration=_traceDuration;
@property (strong, nonatomic) NSString *tracePath; // @synthesize tracePath=_tracePath;

+ (Class)bookmarkType;
- (void).cxx_destruct;
- (int)StringAsEventType:(id)arg1;
- (void)addBookmark:(id)arg1;
- (id)bookmarkAtIndex:(unsigned long long)arg1;
- (unsigned long long)bookmarksCount;
- (void)clearBookmarks;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (id)eventTypeAsString:(int)arg1;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
