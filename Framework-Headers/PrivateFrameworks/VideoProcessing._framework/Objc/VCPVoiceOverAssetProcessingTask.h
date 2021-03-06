//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideoProcessing/VCPMADTaskProtocol-Protocol.h>

@class NSDictionary;

@interface VCPVoiceOverAssetProcessingTask : NSObject <VCPMADTaskProtocol>
{
    BOOL _processingTypeScene;
    BOOL _processingTypeFace;
    unsigned long long _analysisFlags;
    NSDictionary *_options;
    struct CF<__CVBuffer *> _inputBuffer;
    struct atomic<bool> _started;
    struct atomic<bool> _cancel;
    CDUnknownBlockType _completionHandler;
}

+ (id)taskWithProcessingTypes:(id)arg1 forPixelBuffer:(struct __CVBuffer *)arg2 withOptions:(id)arg3 andCompletionHandler:(CDUnknownBlockType)arg4;
- (id).cxx_construct;
- (void).cxx_destruct;
- (int)_analyzeFace:(id *)arg1 error:(id *)arg2;
- (int)_analyzeScene:(id *)arg1 error:(id *)arg2;
- (void)cancel;
- (void)dealloc;
- (id)initWithProcessingTypes:(id)arg1 forPixelBuffer:(struct __CVBuffer *)arg2 withOptions:(id)arg3 andCompletionHandler:(CDUnknownBlockType)arg4;
- (float)resourceRequirement;
- (int)run;

@end

