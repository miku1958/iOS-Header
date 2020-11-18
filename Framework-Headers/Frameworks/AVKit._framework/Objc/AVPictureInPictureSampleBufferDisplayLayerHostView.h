//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class AVPictureInPictureCALayerHostView;

__attribute__((visibility("hidden")))
@interface AVPictureInPictureSampleBufferDisplayLayerHostView : UIView
{
    BOOL _needsGeometryUpdate;
    BOOL _deferringGeometryUpdates;
    AVPictureInPictureCALayerHostView *_hostView;
    struct CGSize _imageQueueSize;
    struct CGSize _contentDimensions;
    struct CGRect _lastKnownFrame;
    struct CGRect _lastKnownBounds;
}

@property (nonatomic) struct CGSize contentDimensions; // @synthesize contentDimensions=_contentDimensions;
@property (nonatomic) unsigned int contextId;
@property (nonatomic, getter=isDeferringGeometryUpdates) BOOL deferringGeometryUpdates; // @synthesize deferringGeometryUpdates=_deferringGeometryUpdates;
@property (readonly, nonatomic) AVPictureInPictureCALayerHostView *hostView; // @synthesize hostView=_hostView;
@property (nonatomic) struct CGSize imageQueueSize; // @synthesize imageQueueSize=_imageQueueSize;
@property (nonatomic) struct CGRect lastKnownBounds; // @synthesize lastKnownBounds=_lastKnownBounds;
@property (nonatomic) struct CGRect lastKnownFrame; // @synthesize lastKnownFrame=_lastKnownFrame;
@property (nonatomic) BOOL needsGeometryUpdate; // @synthesize needsGeometryUpdate=_needsGeometryUpdate;

+ (Class)layerClass;
- (void).cxx_destruct;
- (void)_updateGeometryIfNeeded;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setFrame:(struct CGRect)arg1 contentDimensions:(struct CGSize)arg2 imageQueueSize:(struct CGSize)arg3;

@end
