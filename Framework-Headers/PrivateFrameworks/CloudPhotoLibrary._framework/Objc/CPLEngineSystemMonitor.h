//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CloudPhotoLibrary/CPLEngineComponent-Protocol.h>
#import <CloudPhotoLibrary/CPLNetworkWatcherDelegate-Protocol.h>

@class CPLEngineLibrary, CPLNetworkWatcher, NSString, NSURL;
@protocol OS_dispatch_queue;

@interface CPLEngineSystemMonitor : NSObject <CPLNetworkWatcherDelegate, CPLEngineComponent>
{
    NSURL *_volumeURL;
    NSObject<OS_dispatch_queue> *_queue;
    CPLNetworkWatcher *_watcher;
    CPLEngineLibrary *_engineLibrary;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, weak, nonatomic) CPLEngineLibrary *engineLibrary; // @synthesize engineLibrary=_engineLibrary;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)closeAndDeactivate:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)componentName;
- (unsigned long long)diskPressureState;
- (unsigned long long)freeDiskSpaceSize;
- (void)getStatusWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)initWithEngineLibrary:(id)arg1;
- (BOOL)isNetworkConnected;
- (void)networkStateDidChangeForNetworkWatched:(id)arg1;
- (void)openWithCompletionHandler:(CDUnknownBlockType)arg1;

@end

