//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PHVideoRequestBehaviorSpec : NSObject
{
    BOOL _networkAccessAllowed;
    BOOL _streamingAllowed;
    BOOL _videoComplementAllowed;
    BOOL _mediumHighQualityAllowed;
    BOOL _restrictToPlayableOnCurrentDevice;
    long long _deliveryMode;
    long long _version;
}

@property (nonatomic) long long deliveryMode; // @synthesize deliveryMode=_deliveryMode;
@property (nonatomic, getter=isMediumHighQualityAllowed) BOOL mediumHighQualityAllowed; // @synthesize mediumHighQualityAllowed=_mediumHighQualityAllowed;
@property (nonatomic, getter=isNetworkAccessAllowed) BOOL networkAccessAllowed; // @synthesize networkAccessAllowed=_networkAccessAllowed;
@property (nonatomic) BOOL restrictToPlayableOnCurrentDevice; // @synthesize restrictToPlayableOnCurrentDevice=_restrictToPlayableOnCurrentDevice;
@property (nonatomic, getter=isStreamingAllowed) BOOL streamingAllowed; // @synthesize streamingAllowed=_streamingAllowed;
@property (nonatomic) long long version; // @synthesize version=_version;
@property (nonatomic, getter=isVideoComplementAllowed) BOOL videoComplementAllowed; // @synthesize videoComplementAllowed=_videoComplementAllowed;

- (id)initWithPlistDictionary:(id)arg1;
- (id)plistDictionary;
- (id)shortDescription;

@end

