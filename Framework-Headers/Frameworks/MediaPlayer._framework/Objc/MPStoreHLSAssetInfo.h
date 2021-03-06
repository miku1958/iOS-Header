//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICStoreHLSAssetInfo, NSURL;

@interface MPStoreHLSAssetInfo : NSObject
{
    ICStoreHLSAssetInfo *_internalInfo;
}

@property (readonly, copy, nonatomic) NSURL *alternateKeyCertificateURL;
@property (readonly, copy, nonatomic) NSURL *alternateKeyServerURL;
@property (readonly, copy, nonatomic) NSURL *alternatePlaylistURL;
@property (readonly, nonatomic, getter=isiTunesStoreStream) BOOL iTunesStoreStream;
@property (readonly, copy, nonatomic) NSURL *keyCertificateURL;
@property (readonly, copy, nonatomic) NSURL *keyServerURL;
@property (readonly, copy, nonatomic) NSURL *playlistURL;

- (void).cxx_destruct;
- (id)initWithiTunesCloudStoreHLSAssetInfo:(id)arg1;

@end

