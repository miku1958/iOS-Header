//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NTKFaceCollectionObserver-Protocol.h>
#import <NanoTimeKitCompanion/NTKFaceObserver-Protocol.h>

@class NSString, NTKFace, NTKFaceCollection;
@protocol NTKLibrarySelectedFaceSnapshotProviderDelegate, OS_dispatch_queue;

@interface NTKLibrarySelectedFaceSnapshotProvider : NSObject <NTKFaceCollectionObserver, NTKFaceObserver>
{
    NTKFaceCollection *_libraryCollection;
    NTKFace *_selectedFace;
    NSString *_snapshotKey;
    NSObject<OS_dispatch_queue> *_snapshotRequestsQueue;
    BOOL _resumedQueue;
    id<NTKLibrarySelectedFaceSnapshotProviderDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<NTKLibrarySelectedFaceSnapshotProviderDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_handleFaceChange:(id)arg1;
- (void)_handleSnapshotChangedNotification:(id)arg1;
- (void)_notifyIfSnapshotAvailable;
- (void)_updateSelectedFaceAndSnapshotKey;
- (void)dealloc;
- (void)faceCollection:(id)arg1 didSelectFace:(id)arg2 atIndex:(unsigned long long)arg3;
- (void)faceCollectionDidLoad:(id)arg1;
- (void)faceConfigurationDidChange:(id)arg1;
- (void)faceResourceDirectoryDidChange:(id)arg1;
- (id)initWithDeviceUUID:(id)arg1;
- (id)snapshotImage;
- (void)snapshotSelectedFaceWithOptions:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

