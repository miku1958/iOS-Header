//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/_NURenderResult.h>

#import <NeutrinoCore/NULivePhotoRenderResult-Protocol.h>

@class AVAsset, AVVideoComposition, NSString, NUImageGeometry;
@protocol NURenderStatistics;

@interface _NULivePhotoRenderResult : _NURenderResult <NULivePhotoRenderResult>
{
    AVAsset *_video;
    AVVideoComposition *_videoComposition;
    struct CGImage *_photo;
    NUImageGeometry *_videoGeometry;
    CDStruct_1b6d18a9 _photoTime;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong) struct CGImage *photo; // @synthesize photo=_photo;
@property CDStruct_1b6d18a9 photoTime; // @synthesize photoTime=_photoTime;
@property (readonly) id<NURenderStatistics> statistics;
@property (readonly) Class superclass;
@property (strong) AVAsset *video; // @synthesize video=_video;
@property (strong) AVVideoComposition *videoComposition; // @synthesize videoComposition=_videoComposition;
@property (strong) NUImageGeometry *videoGeometry; // @synthesize videoGeometry=_videoGeometry;

- (void).cxx_destruct;
- (void)dealloc;

@end

