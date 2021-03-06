//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBMediaDestination-Protocol.h>

@class NSString, _INPBString;

@interface _INPBMediaDestination : PBCodable <_INPBMediaDestination, NSSecureCoding, NSCopying>
{
    struct {
        unsigned int mediaDestinationType:1;
    } _has;
    int _mediaDestinationType;
    _INPBString *_playlistName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL hasMediaDestinationType;
@property (readonly, nonatomic) BOOL hasPlaylistName;
@property (readonly) unsigned long long hash;
@property (nonatomic) int mediaDestinationType; // @synthesize mediaDestinationType=_mediaDestinationType;
@property (strong, nonatomic) _INPBString *playlistName; // @synthesize playlistName=_playlistName;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (int)StringAsMediaDestinationType:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)mediaDestinationTypeAsString:(int)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

