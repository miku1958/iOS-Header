//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CoreParsec/NSSecureCoding-Protocol.h>
#import <CoreParsec/_CPProcessableFeedback-Protocol.h>
#import <CoreParsec/_CPSearchViewAppearFeedback-Protocol.h>

@class NSData, NSDictionary, NSString;

@interface _CPSearchViewAppearFeedback : PBCodable <_CPProcessableFeedback, _CPSearchViewAppearFeedback, NSSecureCoding>
{
    struct {
        unsigned int timestamp:1;
        unsigned int viewAppearEvent:1;
        unsigned int isOnLockScreen:1;
        unsigned int isOverApp:1;
        unsigned int readerTextAvailable:1;
    } _has;
    BOOL _isOnLockScreen;
    BOOL _isOverApp;
    BOOL _readerTextAvailable;
    int _viewAppearEvent;
    unsigned long long _timestamp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property (readonly, nonatomic) id feedbackJSON;
@property (readonly, nonatomic) BOOL hasIsOnLockScreen;
@property (readonly, nonatomic) BOOL hasIsOverApp;
@property (readonly, nonatomic) BOOL hasReaderTextAvailable;
@property (readonly, nonatomic) BOOL hasTimestamp;
@property (readonly, nonatomic) BOOL hasViewAppearEvent;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL isOnLockScreen; // @synthesize isOnLockScreen=_isOnLockScreen;
@property (nonatomic) BOOL isOverApp; // @synthesize isOverApp=_isOverApp;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) BOOL readerTextAvailable; // @synthesize readerTextAvailable=_readerTextAvailable;
@property (readonly, nonatomic) BOOL requiresQueryId;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, nonatomic) unsigned long long timestamp;
@property (nonatomic) unsigned long long timestamp; // @synthesize timestamp=_timestamp;
@property (nonatomic) int viewAppearEvent; // @synthesize viewAppearEvent=_viewAppearEvent;

- (id)init;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
