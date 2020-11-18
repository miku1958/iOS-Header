//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <CloudKitDaemon/NSCopying-Protocol.h>

@class NSData, NSMutableArray, NSString;

@interface CKDPNotificationSyncResponsePushMessage : PBCodable <NSCopying>
{
    int _badgeCount;
    NSString *_category;
    NSString *_dialog;
    NSData *_payload;
    NSString *_sound;
    int _source;
    NSString *_subtitle;
    NSMutableArray *_subtitleLocalizedArguments;
    NSString *_subtitleLocalizedKey;
    NSString *_title;
    NSMutableArray *_titleLocalizedArguments;
    NSString *_titleLocalizedKey;
    NSString *_uuid;
    BOOL _isRead;
    struct {
        unsigned int badgeCount:1;
        unsigned int source:1;
        unsigned int isRead:1;
    } _has;
}

@property (nonatomic) int badgeCount; // @synthesize badgeCount=_badgeCount;
@property (strong, nonatomic) NSString *category; // @synthesize category=_category;
@property (strong, nonatomic) NSString *dialog; // @synthesize dialog=_dialog;
@property (nonatomic) BOOL hasBadgeCount;
@property (readonly, nonatomic) BOOL hasCategory;
@property (readonly, nonatomic) BOOL hasDialog;
@property (nonatomic) BOOL hasIsRead;
@property (readonly, nonatomic) BOOL hasPayload;
@property (readonly, nonatomic) BOOL hasSound;
@property (nonatomic) BOOL hasSource;
@property (readonly, nonatomic) BOOL hasSubtitle;
@property (readonly, nonatomic) BOOL hasSubtitleLocalizedKey;
@property (readonly, nonatomic) BOOL hasTitle;
@property (readonly, nonatomic) BOOL hasTitleLocalizedKey;
@property (readonly, nonatomic) BOOL hasUuid;
@property (nonatomic) BOOL isRead; // @synthesize isRead=_isRead;
@property (strong, nonatomic) NSData *payload; // @synthesize payload=_payload;
@property (strong, nonatomic) NSString *sound; // @synthesize sound=_sound;
@property (nonatomic) int source; // @synthesize source=_source;
@property (strong, nonatomic) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property (strong, nonatomic) NSMutableArray *subtitleLocalizedArguments; // @synthesize subtitleLocalizedArguments=_subtitleLocalizedArguments;
@property (strong, nonatomic) NSString *subtitleLocalizedKey; // @synthesize subtitleLocalizedKey=_subtitleLocalizedKey;
@property (strong, nonatomic) NSString *title; // @synthesize title=_title;
@property (strong, nonatomic) NSMutableArray *titleLocalizedArguments; // @synthesize titleLocalizedArguments=_titleLocalizedArguments;
@property (strong, nonatomic) NSString *titleLocalizedKey; // @synthesize titleLocalizedKey=_titleLocalizedKey;
@property (strong, nonatomic) NSString *uuid; // @synthesize uuid=_uuid;

+ (Class)subtitleLocalizedArgumentsType;
+ (Class)titleLocalizedArgumentsType;
- (void).cxx_destruct;
- (int)StringAsSource:(id)arg1;
- (void)addSubtitleLocalizedArguments:(id)arg1;
- (void)addTitleLocalizedArguments:(id)arg1;
- (void)clearSubtitleLocalizedArguments;
- (void)clearTitleLocalizedArguments;
- (void)copyTo:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)sourceAsString:(int)arg1;
- (id)subtitleLocalizedArgumentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)subtitleLocalizedArgumentsCount;
- (id)titleLocalizedArgumentsAtIndex:(unsigned long long)arg1;
- (unsigned long long)titleLocalizedArgumentsCount;
- (void)writeTo:(id)arg1;

@end
