//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICStoreRadioStreamAssetInfo, NSURL;

@interface MPStoreRadioStreamAssetInfo : NSObject
{
    ICStoreRadioStreamAssetInfo *_internalInfo;
    BOOL _iTunesStoreStream;
}

@property (readonly, nonatomic) long long flavor;
@property (nonatomic, getter=isiTunesStoreStream) BOOL iTunesStoreStream; // @synthesize iTunesStoreStream=_iTunesStoreStream;
@property (readonly, copy, nonatomic) NSURL *keyCertificateURL;
@property (readonly, copy, nonatomic) NSURL *keyServerURL;
@property (readonly, nonatomic) long long streamProtocol;
@property (readonly, copy, nonatomic) NSURL *streamURL;

- (void).cxx_destruct;
- (long long)MPStoreRadioStreamFlavorFromICStoreRadioStreamFlavor:(long long)arg1;
- (long long)MPStoreRadioStreamProtocolFromICStoreRadioStreamProtocol:(long long)arg1;
- (id)initWithiTunesCloudStoreRadioStreamAssetInfo:(id)arg1;
- (BOOL)isITunesStoreStream;

@end

