//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVKit/AVPictureInPicturePlayerLayerView.h>

@class AVObservationController, AVPictureInPictureIndicatorLayer, AVPictureInPictureSampleBufferDisplayLayerHostView, AVSampleBufferDisplayLayer, AVSampleBufferDisplayLayerPlayerController, CALayerHost;

__attribute__((visibility("hidden")))
@interface AVPictureInPictureSampleBufferDisplayLayerView : AVPictureInPicturePlayerLayerView
{
    BOOL _PIPModeEnabled;
    unsigned int _sourceContextId;
    AVSampleBufferDisplayLayer *_sourceLayer;
    AVObservationController *_observationController;
    AVSampleBufferDisplayLayerPlayerController *_playerController;
    AVPictureInPictureIndicatorLayer *_placeholderLayer;
    AVPictureInPictureSampleBufferDisplayLayerHostView *_sbdlHostView;
    CALayerHost *_sourceLayerHost;
    struct CGSize _lastKnownRenderSize;
    struct CGSize _imageQueueSize;
}

@property (nonatomic, getter=isPIPModeEnabled) BOOL PIPModeEnabled; // @synthesize PIPModeEnabled=_PIPModeEnabled;
@property (nonatomic) struct CGSize imageQueueSize; // @synthesize imageQueueSize=_imageQueueSize;
@property (nonatomic) struct CGSize lastKnownRenderSize; // @synthesize lastKnownRenderSize=_lastKnownRenderSize;
@property (strong, nonatomic) AVObservationController *observationController; // @synthesize observationController=_observationController;
@property (strong, nonatomic) AVPictureInPictureIndicatorLayer *placeholderLayer; // @synthesize placeholderLayer=_placeholderLayer;
@property (strong, nonatomic) AVSampleBufferDisplayLayerPlayerController *playerController; // @synthesize playerController=_playerController;
@property (strong, nonatomic) AVPictureInPictureSampleBufferDisplayLayerHostView *sbdlHostView; // @synthesize sbdlHostView=_sbdlHostView;
@property (nonatomic) unsigned int sourceContextId; // @synthesize sourceContextId=_sourceContextId;
@property (readonly, nonatomic) AVSampleBufferDisplayLayer *sourceLayer; // @synthesize sourceLayer=_sourceLayer;
@property (weak, nonatomic) CALayerHost *sourceLayerHost; // @synthesize sourceLayerHost=_sourceLayerHost;

- (void).cxx_destruct;
- (id)_makePictureInPicturePlatformAdapterContentPlaceholderLayer;
- (void)_updateGeometry;
- (void)dealloc;
- (id)initWithSourceLayer:(id)arg1 playerController:(id)arg2;
- (void)layoutSubviews;

@end
