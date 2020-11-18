//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>
#import <Intents/_INPBStartPhotoPlaybackIntentResponse-Protocol.h>

@class NSString, _INPBLocation;

@interface _INPBStartPhotoPlaybackIntentResponse : PBCodable <_INPBStartPhotoPlaybackIntentResponse, NSSecureCoding, NSCopying>
{
    CDStruct_a60b8694 _has;
    int _searchResultsCount;
    NSString *_albumName;
    _INPBLocation *_locationCreated;
}

@property (copy, nonatomic) NSString *albumName; // @synthesize albumName=_albumName;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) BOOL hasAlbumName;
@property (readonly, nonatomic) BOOL hasLocationCreated;
@property (nonatomic) BOOL hasSearchResultsCount;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) _INPBLocation *locationCreated; // @synthesize locationCreated=_locationCreated;
@property (nonatomic) int searchResultsCount; // @synthesize searchResultsCount=_searchResultsCount;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)dictionaryRepresentation;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end
