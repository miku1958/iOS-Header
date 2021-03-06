//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSendAnnouncementIntentResponse-Protocol.h>

@class NSArray, NSString;

@interface _INPBSendAnnouncementIntentResponse : PBCodable <_INPBSendAnnouncementIntentResponse, NSSecureCoding, NSCopying>
{
    struct _has;
    NSArray *_sentAnnouncements;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSArray *sentAnnouncements; // @synthesize sentAnnouncements=_sentAnnouncements;
@property (readonly, nonatomic) unsigned long long sentAnnouncementsCount;
@property (readonly) Class superclass;

+ (Class)sentAnnouncementsType;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)addSentAnnouncements:(id)arg1;
- (void)clearSentAnnouncements;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (id)sentAnnouncementsAtIndex:(unsigned long long)arg1;
- (void)writeTo:(id)arg1;

@end

