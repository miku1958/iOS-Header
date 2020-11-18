//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUExportJob.h>

@interface NUVideoExportJob : NUExportJob
{
    CDStruct_1b6d18a9 _livePhotoKeyFrameTime;
}

- (CDStruct_912cb5d2)_evenPixelSizeFromPixelSize:(CDStruct_912cb5d2)arg1;
- (void)_setCleanApertureInSettings:(id)arg1 withSize:(CDStruct_912cb5d2)arg2 horizontalOffset:(long long)arg3 verticalOffset:(long long)arg4;
- (id)generateVideoComposition:(out id *)arg1;
- (id)initWithExportRequest:(id)arg1;
- (id)initWithVideoExportRequest:(id)arg1;
- (BOOL)prepare:(out id *)arg1;
- (BOOL)render:(out id *)arg1;
- (BOOL)renderVideoFrames:(id)arg1 intoPixelBuffer:(struct __CVBuffer *)arg2 time:(CDStruct_1b6d18a9)arg3 colorSpace:(id)arg4 error:(out id *)arg5;
- (BOOL)requiresVideoComposition;
- (id)scalePolicy;
- (id)videoExportRequest;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputVideo;
- (BOOL)writeVideoFrom:(id)arg1 toWriter:(id)arg2 stillImageTime:(CDStruct_1b6d18a9)arg3 error:(out id *)arg4;

@end

