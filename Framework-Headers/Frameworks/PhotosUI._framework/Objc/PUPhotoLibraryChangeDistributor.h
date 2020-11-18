//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUI/PHPhotoLibraryChangeObserver-Protocol.h>

@class NSHashTable, NSMutableSet, NSString, PHPhotoLibrary;
@protocol OS_dispatch_group, OS_dispatch_queue, OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface PUPhotoLibraryChangeDistributor : NSObject <PHPhotoLibraryChangeObserver>
{
    PHPhotoLibrary *_photoLibrary;
    NSHashTable *_observers;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_semaphore> *_changeDeliverySemaphore;
    NSObject<OS_dispatch_group> *_changePausingGroup;
    NSMutableSet *_changePausingTokens;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)beginPausingChangesWithTimeout:(double)arg1;
- (void)dealloc;
- (void)distributeChangeOnMainQueue:(id)arg1;
- (void)endPausingChanges:(id)arg1;
- (id)initWithPhotoLibrary:(id)arg1;
- (void)photoLibraryDidChange:(id)arg1;
- (void)registerChangeObserver:(id)arg1;
- (void)unregisterChangeObserver:(id)arg1;

@end

