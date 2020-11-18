//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideoProcessing/VCPMABaseTask.h>

#import <VideoProcessing/VCPMAImageProcessingTaskProtocol-Protocol.h>

@class NSURL;

@interface VCPShareSheetAssetProcessingTask : VCPMABaseTask <VCPMAImageProcessingTaskProtocol>
{
    struct CF<__CVBuffer *> _pixelBuffer;
    NSURL *_assetURL;
}

+ (id)taskWithAssetURL:(id)arg1 options:(id)arg2 andCompletionHandler:(CDUnknownBlockType)arg3;
+ (id)taskWithPixelBuffer:(struct __CVBuffer *)arg1 options:(id)arg2 andCompletionHandler:(CDUnknownBlockType)arg3;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)processObservations:(id)arg1;
- (BOOL)run:(id *)arg1;

@end
