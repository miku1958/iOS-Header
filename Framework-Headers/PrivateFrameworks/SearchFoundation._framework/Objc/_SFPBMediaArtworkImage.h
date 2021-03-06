//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <SearchFoundation/NSSecureCoding-Protocol.h>
#import <SearchFoundation/_SFPBMediaArtworkImage-Protocol.h>

@class NSData, NSString;

@interface _SFPBMediaArtworkImage : PBCodable <_SFPBMediaArtworkImage, NSSecureCoding>
{
    int _mediaEntityType;
    NSString *_persistentID;
    NSString *_spotlightIdentifier;
    NSString *_universalLibraryID;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSData *jsonData;
@property (nonatomic) int mediaEntityType; // @synthesize mediaEntityType=_mediaEntityType;
@property (copy, nonatomic) NSString *persistentID; // @synthesize persistentID=_persistentID;
@property (copy, nonatomic) NSString *spotlightIdentifier; // @synthesize spotlightIdentifier=_spotlightIdentifier;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *universalLibraryID; // @synthesize universalLibraryID=_universalLibraryID;

- (void).cxx_destruct;
- (id)dictionaryRepresentation;
- (id)initWithDictionary:(id)arg1;
- (id)initWithFacade:(id)arg1;
- (id)initWithJSON:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

