//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <LinkPresentation/AVAssetResourceLoaderDelegate-Protocol.h>
#import <LinkPresentation/NSSecureCoding-Protocol.h>

@class AVAsset, AVURLAsset, LPVideoProperties, NSData, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface LPVideo : NSObject <AVAssetResourceLoaderDelegate, NSSecureCoding>
{
    NSData *_data;
    NSObject<OS_dispatch_queue> *_mediaLoadingQueue;
    struct CGSize _intrinsicSize;
    AVURLAsset *_asset;
    id _mediaServicesResetNotificationHandler;
    LPVideoProperties *_properties;
    NSURL *_streamingURL;
    NSURL *_youTubeURL;
    NSString *_MIMEType;
    NSURL *_fileURL;
}

@property (readonly, copy, nonatomic) NSString *MIMEType; // @synthesize MIMEType=_MIMEType;
@property (readonly, nonatomic) AVAsset *_asset;
@property (readonly, nonatomic) unsigned long long _encodedSize;
@property (readonly, nonatomic) struct CGSize _intrinsicSize;
@property (readonly, copy, nonatomic) NSData *data;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSURL *fileURL; // @synthesize fileURL=_fileURL;
@property (readonly, nonatomic) BOOL hasAudio;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) LPVideoProperties *properties;
@property (readonly, strong, nonatomic) NSURL *streamingURL; // @synthesize streamingURL=_streamingURL;
@property (readonly) Class superclass;
@property (readonly, strong, nonatomic) NSURL *youTubeURL; // @synthesize youTubeURL=_youTubeURL;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_initWithVideo:(id)arg1;
- (void)_installMediaServicesResetNotificationHandler;
- (void)_mapDataFromFileURL;
- (BOOL)_shouldEncodeData;
- (void)_uninstallMediaServicesResetNotificationHandler;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initByReferencingFileURL:(id)arg1 MIMEType:(id)arg2 hasAudio:(BOOL)arg3;
- (id)initByReferencingFileURL:(id)arg1 MIMEType:(id)arg2 properties:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithData:(id)arg1 MIMEType:(id)arg2 hasAudio:(BOOL)arg3;
- (id)initWithData:(id)arg1 MIMEType:(id)arg2 properties:(id)arg3;
- (id)initWithStreamingURL:(id)arg1 hasAudio:(BOOL)arg2;
- (id)initWithStreamingURL:(id)arg1 properties:(id)arg2;
- (id)initWithYouTubeURL:(id)arg1;
- (id)initWithYouTubeURL:(id)arg1 properties:(id)arg2;
- (BOOL)resourceLoader:(id)arg1 shouldWaitForLoadingOfRequestedResource:(id)arg2;

@end

