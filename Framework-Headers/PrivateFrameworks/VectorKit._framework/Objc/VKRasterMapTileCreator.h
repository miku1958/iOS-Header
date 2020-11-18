//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <VectorKit/VKImageCanvasDelegate-Protocol.h>

@class VKMapImageCanvas, VKMapModel, VKRasterMapTileRequest;
@protocol OS_dispatch_queue;

@interface VKRasterMapTileCreator : NSObject <VKImageCanvasDelegate>
{
    VKMapImageCanvas *_canvas;
    VKMapModel *_mapModel;
    struct VKTileKey _superTileKey;
    double _startTimestamp;
    BOOL _loaderOpen;
    CDUnknownBlockType _completion;
    VKRasterMapTileRequest *_request;
    NSObject<OS_dispatch_queue> *_homeQueue;
    struct GLRenderer *_gglRenderer;
}

+ (shared_ptr_77723e34)device;
- (void)_lookAtKey:(const struct VKTileKey *)arg1;
- (void)dealloc;
- (id)detailedDescription;
- (void)imageCanvasDidBecomeFullyDrawn:(id)arg1 hasFailedTiles:(BOOL)arg2;
- (void)imageCanvasWillBecomeFullyDrawn:(id)arg1;
- (id)initWithHomeQueue:(id)arg1;
- (void)renderRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

