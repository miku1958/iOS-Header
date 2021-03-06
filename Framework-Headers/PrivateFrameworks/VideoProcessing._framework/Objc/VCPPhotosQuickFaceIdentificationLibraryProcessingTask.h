//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <VideoProcessing/VCPMADTaskProtocol-Protocol.h>

@class NSArray;

@interface VCPPhotosQuickFaceIdentificationLibraryProcessingTask : NSObject <VCPMADTaskProtocol>
{
    CDUnknownBlockType _completionHandler;
    NSArray *_photoLibraries;
    struct atomic<bool> _started;
    struct atomic<bool> _cancel;
}

+ (BOOL)_concurrentFaceProcessing;
+ (id)taskWithPhotoLibraries:(id)arg1 andCompletionHandler:(CDUnknownBlockType)arg2;
- (void).cxx_destruct;
- (void)_analyzeAsset:(id)arg1 withManager:(id)arg2;
- (void)cancel;
- (void)dealloc;
- (id)init;
- (id)initWithPhotoLibraries:(id)arg1 andCompletionHandler:(CDUnknownBlockType)arg2;
- (float)resourceRequirement;
- (int)run;
- (BOOL)run:(id *)arg1;

@end

