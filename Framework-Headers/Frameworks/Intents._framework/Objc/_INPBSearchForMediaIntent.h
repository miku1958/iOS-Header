//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBSearchForMediaIntent-Protocol.h>

@class NSArray, NSString, _INPBIntentMetadata, _INPBMediaSearch, _INPBPrivateSearchForMediaIntentData;

@interface _INPBSearchForMediaIntent : PBCodable <_INPBSearchForMediaIntent, NSSecureCoding, NSCopying>
{
    struct _has;
    _INPBIntentMetadata *_intentMetadata;
    NSArray *_mediaItems;
    _INPBMediaSearch *_mediaSearch;
    _INPBPrivateSearchForMediaIntentData *_privateSearchForMediaIntentData;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasIntentMetadata;
@property (readonly, nonatomic) BOOL hasMediaSearch;
@property (readonly, nonatomic) BOOL hasPrivateSearchForMediaIntentData;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) _INPBIntentMetadata *intentMetadata; // @synthesize intentMetadata=_intentMetadata;
@property (copy, nonatomic) NSArray *mediaItems; // @synthesize mediaItems=_mediaItems;
@property (readonly, nonatomic) unsigned long long mediaItemsCount;
@property (strong, nonatomic) _INPBMediaSearch *mediaSearch; // @synthesize mediaSearch=_mediaSearch;
@property (strong, nonatomic) _INPBPrivateSearchForMediaIntentData *privateSearchForMediaIntentData; // @synthesize privateSearchForMediaIntentData=_privateSearchForMediaIntentData;
@property (readonly) Class superclass;

+ (Class)mediaItemsType;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)addMediaItems:(id)arg1;
- (void)clearMediaItems;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)mediaItemsAtIndex:(unsigned long long)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

