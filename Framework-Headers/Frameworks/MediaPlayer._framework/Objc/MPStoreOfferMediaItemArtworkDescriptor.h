//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <MediaPlayer/NSCopying-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface MPStoreOfferMediaItemArtworkDescriptor : NSObject <NSCopying>
{
    long long _itemPersistentID;
    NSDictionary *_screenshotURLs;
    NSDictionary *_itemArtworkURLs;
    NSDictionary *_containerArtworkURLs;
    NSArray *_screenshotSizes;
    NSArray *_itemArtworkSizes;
    NSArray *_containerArtworkSizes;
    unsigned long long _hash;
    NSString *_cacheID;
}

@property (readonly, nonatomic) NSString *cacheID; // @synthesize cacheID=_cacheID;

- (void).cxx_destruct;
- (id)_availableSizesForArtworkURLs:(id)arg1;
- (id)_preferredArtworkURLsForType:(long long)arg1;
- (id)_sizeToURLDictionaryFromStoreDictionariesArray:(id)arg1;
- (id)artworkURLForSize:(struct CGSize)arg1 type:(long long)arg2;
- (id)availableSizesForArtworkOfType:(long long)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)initWithItemPersistentID:(long long)arg1 screenshotDictionaries:(id)arg2 itemArtworkDictionaries:(id)arg3 containerArtworkDictionaries:(id)arg4;
- (BOOL)isEqual:(id)arg1;

@end
