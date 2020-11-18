//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSURL;

@interface SSVPlaybackItem : NSObject
{
    NSDictionary *_itemDictionary;
    NSURL *_fallbackStreamingKeyServerURL;
    NSURL *_fallbackStreamingKeyCertificateURL;
}

@property (readonly, nonatomic) NSURL *HLSKeyCertificateURL;
@property (readonly, nonatomic) NSURL *HLSKeyServerURL;
@property (readonly, nonatomic) NSURL *HLSPlaylistURL;
@property (readonly, nonatomic) NSArray *assets;
@property (copy, nonatomic) NSURL *fallbackStreamingKeyCertificateURL; // @synthesize fallbackStreamingKeyCertificateURL=_fallbackStreamingKeyCertificateURL;
@property (copy, nonatomic) NSURL *fallbackStreamingKeyServerURL; // @synthesize fallbackStreamingKeyServerURL=_fallbackStreamingKeyServerURL;
@property (readonly, nonatomic, getter=isiTunesStoreStream) BOOL iTunesStoreStream;
@property (readonly, copy, nonatomic) NSDictionary *itemDictionary; // @synthesize itemDictionary=_itemDictionary;
@property (readonly, copy, nonatomic) id itemIdentifier;

- (void).cxx_destruct;
- (void)_enumerateAssetsUsingBlock:(CDUnknownBlockType)arg1;
- (id)assetForFlavor:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithItemDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
