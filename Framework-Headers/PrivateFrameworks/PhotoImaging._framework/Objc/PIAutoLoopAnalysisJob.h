//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NURenderJob.h>

@class AVAsset, NSDictionary;

@interface PIAutoLoopAnalysisJob : NURenderJob
{
    AVAsset *_videoSource;
    NSDictionary *_recipe;
}

@property (strong, nonatomic) NSDictionary *recipe; // @synthesize recipe=_recipe;
@property (strong, nonatomic) AVAsset *videoSource; // @synthesize videoSource=_videoSource;

- (void).cxx_destruct;
- (id)analysisRequest;
- (id)cacheKey;
- (BOOL)prepare:(out id *)arg1;
- (BOOL)render:(out id *)arg1;
- (id)result;
- (id)scalePolicy;
- (BOOL)wantsCompleteStage;
- (BOOL)wantsOutputGeometry;
- (BOOL)wantsOutputVideo;

@end

