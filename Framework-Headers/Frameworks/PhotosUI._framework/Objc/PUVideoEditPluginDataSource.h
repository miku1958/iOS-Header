//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/PUVideoEditPluginSessionDataSource-Protocol.h>

@class NSString, PHAsset;

__attribute__((visibility("hidden")))
@interface PUVideoEditPluginDataSource : NSObject <PUVideoEditPluginSessionDataSource>
{
    BOOL _allowsRevertInSession;
    PHAsset *_videoAsset;
}

@property (nonatomic) BOOL allowsRevertInSession; // @synthesize allowsRevertInSession=_allowsRevertInSession;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (strong, nonatomic) PHAsset *videoAsset; // @synthesize videoAsset=_videoAsset;

- (void).cxx_destruct;
- (void)_fetchCanRevertAsset:(id)arg1 asynchronously:(BOOL)arg2 handler:(CDUnknownBlockType)arg3;
- (void)_renderTemporaryVideoForObjectBuilder:(id)arg1 resultHandler:(CDUnknownBlockType)arg2;
- (void)_requestRenderedVideoForVideoURL:(id)arg1 adjustmentData:(id)arg2 canHandleAdjustmentData:(BOOL)arg3 resultHandler:(CDUnknownBlockType)arg4;
- (void)editPluginSession:(id)arg1 commitContentEditingOutput:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)editPluginSession:(id)arg1 loadAdjustmentDataWithHandler:(CDUnknownBlockType)arg2;
- (void)editPluginSession:(id)arg1 loadPlaceholderImageWithHandler:(CDUnknownBlockType)arg2;
- (void)editPluginSession:(id)arg1 loadVideoURLWithHandler:(CDUnknownBlockType)arg2;
- (void)editPluginSession:(id)arg1 revertToOriginalWithCompletionHandler:(CDUnknownBlockType)arg2;
- (BOOL)editPluginSessionCanRevertToOriginal:(id)arg1;
- (id)init;
- (id)initWithVideoAsset:(id)arg1;

@end

