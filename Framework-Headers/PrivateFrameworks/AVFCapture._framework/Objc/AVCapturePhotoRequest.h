//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AVCapturePhotoSettings, AVCaptureResolvedPhotoSettings, AVWeakReferencingDelegateStorage, NSArray;

__attribute__((visibility("hidden")))
@interface AVCapturePhotoRequest : NSObject
{
    AVWeakReferencingDelegateStorage *_delegateStorage;
    unsigned int _photoCallbackFlavor;
    AVCapturePhotoSettings *_unresolvedSettings;
    AVCaptureResolvedPhotoSettings *_resolvedSettings;
    NSArray *_expectedPhotoManifest;
    unsigned int _firedCallbackFlags;
    unsigned long long _firedPhotoCallbacksCount;
    struct __IOSurface *_previewSurface;
    struct opaqueCMSampleBuffer *_previewSampleBuffer;
    struct __IOSurface *_thumbnailSurface;
    BOOL _delegateSupportsDebugMetadataSidecarFile;
    BOOL _lensStabilizationSupported;
}

@property (readonly) AVWeakReferencingDelegateStorage *delegateStorage; // @synthesize delegateStorage=_delegateStorage;
@property (readonly) BOOL delegateSupportsDebugMetadataSidecarFile; // @synthesize delegateSupportsDebugMetadataSidecarFile=_delegateSupportsDebugMetadataSidecarFile;
@property (readonly, nonatomic) unsigned long long expectedPhotoCount;
@property (readonly, nonatomic) NSArray *expectedPhotoManifest; // @synthesize expectedPhotoManifest=_expectedPhotoManifest;
@property (nonatomic) unsigned int firedCallbackFlags; // @synthesize firedCallbackFlags=_firedCallbackFlags;
@property (nonatomic) unsigned long long firedPhotoCallbacksCount; // @synthesize firedPhotoCallbacksCount=_firedPhotoCallbacksCount;
@property (readonly) BOOL lensStabilizationSupported; // @synthesize lensStabilizationSupported=_lensStabilizationSupported;
@property (readonly) unsigned int photoCallbackFlavor; // @synthesize photoCallbackFlavor=_photoCallbackFlavor;
@property (strong, nonatomic) struct opaqueCMSampleBuffer *previewSampleBuffer; // @synthesize previewSampleBuffer=_previewSampleBuffer;
@property (strong, nonatomic) struct __IOSurface *previewSurface; // @synthesize previewSurface=_previewSurface;
@property (strong, nonatomic) AVCaptureResolvedPhotoSettings *resolvedSettings;
@property (strong, nonatomic) struct __IOSurface *thumbnailSurface; // @synthesize thumbnailSurface=_thumbnailSurface;
@property (readonly) AVCapturePhotoSettings *unresolvedSettings; // @synthesize unresolvedSettings=_unresolvedSettings;

+ (void)initialize;
+ (id)requestWithDelegate:(id)arg1 settings:(id)arg2 lensStabilizationSupported:(BOOL)arg3;
- (void)_resolveExpectedPhotoManifest;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 settings:(id)arg2 lensStabilizationSupported:(BOOL)arg3;

@end

