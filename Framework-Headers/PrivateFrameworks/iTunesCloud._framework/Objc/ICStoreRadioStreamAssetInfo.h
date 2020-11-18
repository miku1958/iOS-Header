//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSURL;

@interface ICStoreRadioStreamAssetInfo : NSObject
{
    NSDictionary *_itemResponseDictionary;
    BOOL _iTunesStoreStream;
}

@property (readonly, nonatomic) long long flavor;
@property (nonatomic, getter=isiTunesStoreStream) BOOL iTunesStoreStream; // @synthesize iTunesStoreStream=_iTunesStoreStream;
@property (readonly, copy, nonatomic) NSURL *keyCertificateURL;
@property (readonly, copy, nonatomic) NSURL *keyServerURL;
@property (readonly, nonatomic) long long streamProtocol;
@property (readonly, copy, nonatomic) NSURL *streamURL;

- (void).cxx_destruct;
- (long long)ICStoreRadioStreamFlavorWithString:(id)arg1;
- (long long)ICStoreRadioStreamProtocolWithString:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithItemResponseDictionary:(id)arg1;

@end
