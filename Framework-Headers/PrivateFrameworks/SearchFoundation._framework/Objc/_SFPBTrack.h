//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBTrack-Protocol.h>

@class NSData, NSString, _SFPBActionItem, _SFPBURL;

@interface _SFPBTrack : PBCodable <_SFPBTrack, NSSecureCoding>
{
    CDStruct_62e447a2 _has;
    BOOL _highlighted;
    NSString *_title;
    NSString *_number;
    NSString *_duration;
    _SFPBURL *_preview;
    _SFPBActionItem *_playAction;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *duration; // @synthesize duration=_duration;
@property (readonly, nonatomic) BOOL hasDuration;
@property (readonly, nonatomic) BOOL hasHighlighted;
@property (readonly, nonatomic) BOOL hasNumber;
@property (readonly, nonatomic) BOOL hasPlayAction;
@property (readonly, nonatomic) BOOL hasPreview;
@property (readonly, nonatomic) BOOL hasTitle;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL highlighted; // @synthesize highlighted=_highlighted;
@property (readonly, nonatomic) NSData *jsonData;
@property (copy, nonatomic) NSString *number; // @synthesize number=_number;
@property (strong, nonatomic) _SFPBActionItem *playAction; // @synthesize playAction=_playAction;
@property (strong, nonatomic) _SFPBURL *preview; // @synthesize preview=_preview;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *title; // @synthesize title=_title;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

