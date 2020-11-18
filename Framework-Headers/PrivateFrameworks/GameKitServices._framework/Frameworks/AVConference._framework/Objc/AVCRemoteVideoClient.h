//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVConferenceXPCClient, CALayer, NSDictionary, NSString, VideoAttributes;
@protocol AVCRemoteVideoClientDelegate, OS_dispatch_queue;

@interface AVCRemoteVideoClient : NSObject
{
    id<AVCRemoteVideoClientDelegate> _delegate;
    long long _streamToken;
    CALayer *_primaryCameraLayer;
    CALayer *_secondaryCameraLayer;
    CALayer *_screenLayer;
    CALayer *_primaryCameraSubLayer;
    CALayer *_secondaryCameraSubLayer;
    CALayer *_screenSubLayer;
    AVConferenceXPCClient *_connection;
    int _activeVideoMode;
    BOOL _hasReceivedFirstFrame;
    BOOL _isVideoPaused;
    BOOL _isMediaStalled;
    BOOL _isVideoDegraded;
    BOOL _hasReceivedLastFrame;
    BOOL _shouldDisplayVideoInfoLayer;
    VideoAttributes *_remoteScreenAttributes;
    VideoAttributes *_remoteVideoAttributes;
    NSDictionary *_slotsForModes;
    NSString *_connectionTypeString;
    NSObject<OS_dispatch_queue> *_avcRemoteVideoQueue;
}

@property (copy, nonatomic) NSString *connectionTypeString; // @synthesize connectionTypeString=_connectionTypeString;
@property (readonly, nonatomic) id<AVCRemoteVideoClientDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) BOOL hasReceivedFirstFrame; // @synthesize hasReceivedFirstFrame=_hasReceivedFirstFrame;
@property (nonatomic) BOOL hasReceivedLastFrame; // @synthesize hasReceivedLastFrame=_hasReceivedLastFrame;
@property (nonatomic) BOOL isMediaStalled; // @synthesize isMediaStalled=_isMediaStalled;
@property (nonatomic) BOOL isVideoDegraded; // @synthesize isVideoDegraded=_isVideoDegraded;
@property (nonatomic) BOOL isVideoPaused; // @synthesize isVideoPaused=_isVideoPaused;
@property (strong, nonatomic) VideoAttributes *remoteScreenAttributes; // @synthesize remoteScreenAttributes=_remoteScreenAttributes;
@property (strong, nonatomic) VideoAttributes *remoteVideoAttributes; // @synthesize remoteVideoAttributes=_remoteVideoAttributes;
@property (nonatomic) BOOL shouldDisplayVideoInfoLayer; // @synthesize shouldDisplayVideoInfoLayer=_shouldDisplayVideoInfoLayer;
@property (readonly, nonatomic) long long streamToken; // @synthesize streamToken=_streamToken;

- (void)cleanupSubLayerForMode:(int)arg1;
- (void)dealloc;
- (void)didReceiveFirstRemoteFrameForStreamToken:(long long)arg1;
- (void)drawText:(id)arg1 inSubLayer:(id)arg2;
- (id)initWithStreamToken:(long long)arg1 delegate:(id)arg2;
- (void)insertInfoSubLayerIntoLayer:(id)arg1 videoMode:(int)arg2;
- (void)insertSubLayerInLayer:(id)arg1 videoMode:(int)arg2 videoSlot:(id)arg3;
- (void)releaseQueueForStreamToken:(long long)arg1;
- (void)remoteMediaDidStall:(BOOL)arg1 streamToken:(long long)arg2;
- (void)remoteScreenAttributesDidChange:(id)arg1 streamToken:(long long)arg2;
- (void)remoteVideoAttributesDidChange:(id)arg1 streamToken:(long long)arg2;
- (void)remoteVideoDidDegrade:(BOOL)arg1 streamToken:(long long)arg2;
- (void)remoteVideoDidPause:(BOOL)arg1 streamToken:(long long)arg2;
- (void)remoteVideoServerDidDie;
- (void)setActiveVideoLayerForMode:(int)arg1;
- (void)setVideoLayer:(id)arg1 forMode:(int)arg2;
- (id)slotForMode:(int)arg1;
- (id)subLayerForMode:(int)arg1;
- (id *)subLayerRefForMode:(int)arg1;
- (void)terminateConnection;
- (void)updateConnectionInfoWithLocalInterfaceType:(id)arg1 remoteInterfaceType:(id)arg2;

@end

