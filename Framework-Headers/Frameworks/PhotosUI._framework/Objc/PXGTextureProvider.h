//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXImageDataSpecRegistration-Protocol.h>

@class NSIndexSet, NSMutableIndexSet, NSString, PXGViewEnvironment;
@protocol OS_dispatch_queue, PXGTextureProviderDelegate;

@interface PXGTextureProvider : NSObject <PXImageDataSpecRegistration>
{
    NSMutableIndexSet *_lookupLock_activeRequests;
    struct os_unfair_lock_s _lookupLock;
    CDStruct_1b544862 *_imageDataSpecs;
    long long _imageDataSpecsCount;
    long long _imageDataSpecsCapacity;
    void **_textureAtlasManagers;
    CDStruct_1b544862 _lastImageDataSpec;
    long long _lastImageDataSpecIndex;
    NSMutableIndexSet *_requestIDsPendingCancellation;
    BOOL _lowMemoryMode;
    BOOL _canDeliverThumbnailData;
    PXGViewEnvironment *_viewEnvironment;
    NSIndexSet *_requestIDsInTargetRect;
    id<PXGTextureProviderDelegate> _delegate;
    NSObject<OS_dispatch_queue> *_requestQueue;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSObject<OS_dispatch_queue> *_processingQueue;
    CDStruct_a02a4563 _interactionState;
}

@property (nonatomic) BOOL canDeliverThumbnailData; // @synthesize canDeliverThumbnailData=_canDeliverThumbnailData;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXGTextureProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) CDStruct_a02a4563 interactionState; // @synthesize interactionState=_interactionState;
@property (nonatomic) BOOL lowMemoryMode; // @synthesize lowMemoryMode=_lowMemoryMode;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *processingQueue; // @synthesize processingQueue=_processingQueue;
@property (copy, nonatomic) NSIndexSet *requestIDsInTargetRect; // @synthesize requestIDsInTargetRect=_requestIDsInTargetRect;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *requestQueue; // @synthesize requestQueue=_requestQueue;
@property (readonly) Class superclass;
@property (strong, nonatomic) PXGViewEnvironment *viewEnvironment; // @synthesize viewEnvironment=_viewEnvironment;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;

- (void).cxx_destruct;
- (void)cancelTextureRequestDeferred:(int)arg1;
- (void)cancelTextureRequests:(id)arg1;
- (void)clearTextureAtlasManagerCache;
- (void)dealloc;
- (void)didFinishRequestingTextures;
- (CDStruct_1b544862)imageDataSpecAtIndex:(long long)arg1;
- (id)init;
- (void)interactionStateDidChange:(CDStruct_a02a4563)arg1;
- (BOOL)isRequestActive:(int)arg1;
- (void)lowMemoryModeDidChange;
- (void)performDeferredCancellations;
- (void)prepareImageDataSpecs;
- (void)provideCGImage:(struct CGImage *)arg1 forRequestID:(int)arg2;
- (void)provideCGImage:(struct CGImage *)arg1 orientation:(unsigned int)arg2 forRequestID:(int)arg3;
- (void)provideImageData:(id)arg1 withSpecAtIndex:(long long)arg2 bytesPerRow:(unsigned long long)arg3 contentsRect:(struct CGRect)arg4 forRequestID:(int)arg5;
- (void)provideNothingForRequestID:(int)arg1;
- (void)providePayload:(id)arg1 forRequestID:(int)arg2;
- (void)providePixelBuffer:(struct __CVBuffer *)arg1 orientationTransform:(struct CGAffineTransform)arg2 forRequestID:(int)arg3;
- (long long)registerImageDataSpec:(CDStruct_1b544862)arg1;
- (void)registerImageDataSpecs:(id)arg1;
- (void)releaseCachedResources;
- (long long)requestQueue_indexForImageDataSpec:(CDStruct_1b544862)arg1;
- (struct _NSRange)requestTexturesForSpritesInRange:(struct _PXGSpriteIndexRange)arg1 geometries:(CDStruct_3ab912e1 *)arg2 styles:(CDStruct_506f5052 *)arg3 infos:(CDStruct_9d1ebe49 *)arg4 inLayout:(id)arg5;
- (void)requestUpdatedTexturesForDisplayLink:(id)arg1;
- (void)setNeedsRegisterToDisplayLinkUpdates;
- (void)setNeedsUnregisterFromDisplayLinkUpdates;
- (void)setTextureAtlasManager:(id)arg1 atSpecIndex:(long long)arg2;
- (id)textureAtlasManagerAtSpecIndex:(long long)arg1;
- (void)viewEnvironmentDidChange:(id)arg1;

@end

