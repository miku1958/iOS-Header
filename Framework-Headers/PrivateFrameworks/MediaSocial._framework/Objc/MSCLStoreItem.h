//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaSocial/NSCopying-Protocol.h>

@class MPArtworkCatalog, NSString, SKUIArtworkList, SSLookupItemArtwork;

@interface MSCLStoreItem : NSObject <NSCopying>
{
    MPArtworkCatalog *_artworkCatalog;
    SKUIArtworkList *_artworkList;
    SSLookupItemArtwork *_artworkTemplate;
    NSString *_artistName;
    NSString *_collectionName;
    NSString *_displayName;
    NSString *_itemIdentifier;
    NSString *_kind;
}

@property (copy, nonatomic) NSString *artistName; // @synthesize artistName=_artistName;
@property (strong, nonatomic) MPArtworkCatalog *artworkCatalog; // @synthesize artworkCatalog=_artworkCatalog;
@property (copy, nonatomic) SKUIArtworkList *artworkList; // @synthesize artworkList=_artworkList;
@property (strong, nonatomic) SSLookupItemArtwork *artworkTemplate; // @synthesize artworkTemplate=_artworkTemplate;
@property (copy, nonatomic) NSString *collectionName; // @synthesize collectionName=_collectionName;
@property (copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property (copy, nonatomic) NSString *itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property (copy, nonatomic) NSString *kind; // @synthesize kind=_kind;

- (void).cxx_destruct;
- (id)copyMediaSocialPostItem;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithItemDictionary:(id)arg1;

@end
