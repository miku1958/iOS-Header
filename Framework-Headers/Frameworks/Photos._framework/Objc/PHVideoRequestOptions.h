//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PHVideoRequestOptions : NSObject
{
    BOOL _networkAccessAllowed;
    BOOL _streamingAllowed;
    BOOL _videoComplementAllowed;
    BOOL _allowMediumHighQuality;
    BOOL _restrictToPlayableOnCurrentDevice;
    long long _version;
    long long _deliveryMode;
    CDUnknownBlockType _progressHandler;
    long long _contentMode;
    struct CGSize _targetSize;
}

@property (nonatomic, getter=isMediumHighQualityAllowed) BOOL allowMediumHighQuality; // @synthesize allowMediumHighQuality=_allowMediumHighQuality;
@property (nonatomic) long long contentMode; // @synthesize contentMode=_contentMode;
@property (nonatomic) long long deliveryMode; // @synthesize deliveryMode=_deliveryMode;
@property (nonatomic, getter=isNetworkAccessAllowed) BOOL networkAccessAllowed; // @synthesize networkAccessAllowed=_networkAccessAllowed;
@property (copy, nonatomic) CDUnknownBlockType progressHandler; // @synthesize progressHandler=_progressHandler;
@property (nonatomic) BOOL restrictToPlayableOnCurrentDevice; // @synthesize restrictToPlayableOnCurrentDevice=_restrictToPlayableOnCurrentDevice;
@property (nonatomic, getter=isStreamingAllowed) BOOL streamingAllowed; // @synthesize streamingAllowed=_streamingAllowed;
@property (nonatomic) struct CGSize targetSize; // @synthesize targetSize=_targetSize;
@property (nonatomic) long long version; // @synthesize version=_version;
@property (nonatomic, getter=isVideoComplementAllowed) BOOL videoComplementAllowed; // @synthesize videoComplementAllowed=_videoComplementAllowed;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)init;

@end
