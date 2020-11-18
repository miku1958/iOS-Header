//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class AVCapturePhotoSettings, AVCaptureResolvedPhotoSettings, AVWeakReferencingDelegateStorage, NSArray;

@interface AVCapturePhotoRequest : NSObject
{
    AVWeakReferencingDelegateStorage *_delegateStorage;
    unsigned int _photoCallbackFlavor;
    AVCapturePhotoSettings *_unresolvedSettings;
    AVCaptureResolvedPhotoSettings *_resolvedSettings;
    NSArray *_expectedPhotoManifest;
    unsigned int _firedCallbackFlags;
    unsigned long long _firedPhotoCallbacksCount;
    void *_previewSurface;
    struct opaqueCMSampleBuffer *_previewSampleBuffer;
}

@property (readonly) AVWeakReferencingDelegateStorage *delegateStorage; // @synthesize delegateStorage=_delegateStorage;
@property (readonly, nonatomic) unsigned long long expectedPhotoCount;
@property (readonly, nonatomic) NSArray *expectedPhotoManifest; // @synthesize expectedPhotoManifest=_expectedPhotoManifest;
@property (nonatomic) unsigned int firedCallbackFlags; // @synthesize firedCallbackFlags=_firedCallbackFlags;
@property (nonatomic) unsigned long long firedPhotoCallbacksCount; // @synthesize firedPhotoCallbacksCount=_firedPhotoCallbacksCount;
@property (readonly) unsigned int photoCallbackFlavor; // @synthesize photoCallbackFlavor=_photoCallbackFlavor;
@property (strong, nonatomic) struct opaqueCMSampleBuffer *previewSampleBuffer; // @synthesize previewSampleBuffer=_previewSampleBuffer;
@property (strong, nonatomic) void *previewSurface; // @synthesize previewSurface=_previewSurface;
@property (strong, nonatomic) AVCaptureResolvedPhotoSettings *resolvedSettings;
@property (readonly) AVCapturePhotoSettings *unresolvedSettings; // @synthesize unresolvedSettings=_unresolvedSettings;

+ (id)requestWithDelegate:(id)arg1 settings:(id)arg2;
- (void)_resolveExpectedPhotoManifest;
- (void)dealloc;
- (id)initWithDelegate:(id)arg1 settings:(id)arg2;

@end
