//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MediaPlayer/NSCopying-Protocol.h>

@class NSDictionary, NSString, NSURL;

@interface MPStreamingDownloadSession : NSObject <NSCopying>
{
    BOOL _didStartLeaseSession;
    BOOL _iTunesStoreStream;
    BOOL _isHLSAsset;
    NSString *_assetFlavor;
    unsigned long long _assetQuality;
    unsigned long long _downloadToken;
    unsigned long long _protectionType;
    NSDictionary *_purchaseBundle;
    NSDictionary *_responseAssetDictionary;
    NSURL *_sourceURL;
    NSURL *_streamingKeyServerURL;
    NSURL *_streamingKeyCertificateURL;
    NSURL *_alternateSourceURL;
    NSURL *_alternateHLSPlaylistURL;
    NSURL *_alternateHLSKeyServerURL;
    NSURL *_alternateHLSKeyCertificateURL;
}

@property (copy, nonatomic) NSURL *alternateHLSKeyCertificateURL; // @synthesize alternateHLSKeyCertificateURL=_alternateHLSKeyCertificateURL;
@property (copy, nonatomic) NSURL *alternateHLSKeyServerURL; // @synthesize alternateHLSKeyServerURL=_alternateHLSKeyServerURL;
@property (copy, nonatomic) NSURL *alternateHLSPlaylistURL; // @synthesize alternateHLSPlaylistURL=_alternateHLSPlaylistURL;
@property (copy, nonatomic) NSURL *alternateSourceURL; // @synthesize alternateSourceURL=_alternateSourceURL;
@property (copy, nonatomic) NSString *assetFlavor; // @synthesize assetFlavor=_assetFlavor;
@property (nonatomic) unsigned long long assetQuality; // @synthesize assetQuality=_assetQuality;
@property (nonatomic) BOOL didStartLeaseSession; // @synthesize didStartLeaseSession=_didStartLeaseSession;
@property (nonatomic) unsigned long long downloadToken; // @synthesize downloadToken=_downloadToken;
@property (nonatomic, getter=isiTunesStoreStream) BOOL iTunesStoreStream; // @synthesize iTunesStoreStream=_iTunesStoreStream;
@property (nonatomic) BOOL isHLSAsset; // @synthesize isHLSAsset=_isHLSAsset;
@property (nonatomic) unsigned long long protectionType; // @synthesize protectionType=_protectionType;
@property (copy, nonatomic) NSDictionary *purchaseBundle; // @synthesize purchaseBundle=_purchaseBundle;
@property (strong, nonatomic) NSDictionary *responseAssetDictionary; // @synthesize responseAssetDictionary=_responseAssetDictionary;
@property (copy, nonatomic) NSURL *sourceURL; // @synthesize sourceURL=_sourceURL;
@property (copy, nonatomic) NSURL *streamingKeyCertificateURL; // @synthesize streamingKeyCertificateURL=_streamingKeyCertificateURL;
@property (copy, nonatomic) NSURL *streamingKeyServerURL; // @synthesize streamingKeyServerURL=_streamingKeyServerURL;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;

@end

