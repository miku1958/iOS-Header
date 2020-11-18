//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ProtocolBuffer/PBCodable.h>

#import <MediaPlaybackCore/NSCopying-Protocol.h>

@class _MPCProtoRadioContentReferenceLibraryAlbumContentReference, _MPCProtoRadioContentReferenceLibraryArtistContentReference, _MPCProtoRadioContentReferenceLibraryItemContentReference, _MPCProtoRadioContentReferenceStoreContentReference;

@interface _MPCProtoRadioContentReference : PBCodable <NSCopying>
{
    _MPCProtoRadioContentReferenceLibraryAlbumContentReference *_libraryAlbumContentReference;
    _MPCProtoRadioContentReferenceLibraryArtistContentReference *_libraryArtistContentReference;
    _MPCProtoRadioContentReferenceLibraryItemContentReference *_libraryItemContentReference;
    _MPCProtoRadioContentReferenceStoreContentReference *_storeContentReference;
}

@property (readonly, nonatomic) BOOL hasLibraryAlbumContentReference;
@property (readonly, nonatomic) BOOL hasLibraryArtistContentReference;
@property (readonly, nonatomic) BOOL hasLibraryItemContentReference;
@property (readonly, nonatomic) BOOL hasStoreContentReference;
@property (strong, nonatomic) _MPCProtoRadioContentReferenceLibraryAlbumContentReference *libraryAlbumContentReference; // @synthesize libraryAlbumContentReference=_libraryAlbumContentReference;
@property (strong, nonatomic) _MPCProtoRadioContentReferenceLibraryArtistContentReference *libraryArtistContentReference; // @synthesize libraryArtistContentReference=_libraryArtistContentReference;
@property (strong, nonatomic) _MPCProtoRadioContentReferenceLibraryItemContentReference *libraryItemContentReference; // @synthesize libraryItemContentReference=_libraryItemContentReference;
@property (strong, nonatomic) _MPCProtoRadioContentReferenceStoreContentReference *storeContentReference; // @synthesize storeContentReference=_storeContentReference;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)dictionaryRepresentation;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;
- (void)mergeFrom:(id)arg1;
- (BOOL)readFrom:(id)arg1;
- (void)writeTo:(id)arg1;

@end

