//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSURL, PHAAssetResourceDataLoader, PHAJobCoordinator, PHALibraryChangeListener, PHAMonitoring, PHPhotoLibrary;
@protocol OS_dispatch_queue, PHAManagerDelegate;

@interface PHAManager : NSObject
{
    PHAMonitoring *_monitoring;
    id<PHAManagerDelegate> _delegate;
    PHAAssetResourceDataLoader *_dataLoader;
    NSURL *_libraryURL;
    PHPhotoLibrary *_photoLibrary;
    NSObject<OS_dispatch_queue> *_executiveStateQueue;
    PHAJobCoordinator *_jobCoordinator;
    PHALibraryChangeListener *_changeListener;
    NSDictionary *_photoAnalysisWorkersByType;
}

@property (strong) PHALibraryChangeListener *changeListener; // @synthesize changeListener=_changeListener;
@property (strong) NSObject<OS_dispatch_queue> *executiveStateQueue; // @synthesize executiveStateQueue=_executiveStateQueue;
@property (readonly) PHAJobCoordinator *jobCoordinator; // @synthesize jobCoordinator=_jobCoordinator;
@property (strong) NSURL *libraryURL; // @synthesize libraryURL=_libraryURL;
@property (strong) NSDictionary *photoAnalysisWorkersByType; // @synthesize photoAnalysisWorkersByType=_photoAnalysisWorkersByType;
@property (strong) PHPhotoLibrary *photoLibrary; // @synthesize photoLibrary=_photoLibrary;
@property (readonly, getter=isQuiescent) BOOL quiescent;
@property (readonly, getter=isTurboMode) BOOL turboMode;

+ (id)allWorkerClasses;
+ (void)enumerateWorkerClassesUsingBlock:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
- (id)autoloopServiceWorker;
- (void)backgroundActivityDidBegin;
- (void)checkForQuiescence;
- (id)description;
- (void)dumpAnalysisStatusWithContext:(id)arg1 reply:(CDUnknownBlockType)arg2;
- (void)enumerateWorkersUsingBlock:(CDUnknownBlockType)arg1;
- (id)faceProcessingServiceWorker;
- (id)graphServiceWorker;
- (id)init;
- (id)initWithPhotoLibraryURL:(id)arg1 executiveStateQueue:(id)arg2 delegate:(id)arg3;
- (id)monitoring;
- (id)sceneClassificationServiceWorker;
- (void)shutdown;
- (id)statusAsDictionary;
- (void)stopBackgroundActivity;
- (id)taxonomyServiceWorker;
- (void)triggerBackgroundActivity;

@end

