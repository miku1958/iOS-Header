//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PLInvitationRecordsObserver-Protocol.h>
#import <PhotosUICore/PXPhotosGridOptionsController-Protocol.h>

@class NSString, PHAssetCollection;
@protocol OS_dispatch_queue, PXPhotosGridOptionsControllerDelegate;

@interface PXPhotosGridSharedAlbumOptionsController : NSObject <PLInvitationRecordsObserver, PXPhotosGridOptionsController>
{
    NSObject<OS_dispatch_queue> *_workQueue;
    BOOL _hasRegistered;
    id<PXPhotosGridOptionsControllerDelegate> _optionsDelegate;
    PHAssetCollection *_assetCollection;
    NSString *_actionPerformerType;
    NSString *_systemIconImageName;
}

@property (copy, nonatomic) NSString *actionPerformerType; // @synthesize actionPerformerType=_actionPerformerType;
@property (readonly, nonatomic) PHAssetCollection *assetCollection; // @synthesize assetCollection=_assetCollection;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (weak, nonatomic) id<PXPhotosGridOptionsControllerDelegate> optionsDelegate; // @synthesize optionsDelegate=_optionsDelegate;
@property (readonly) Class superclass;
@property (copy, nonatomic) NSString *systemIconImageName; // @synthesize systemIconImageName=_systemIconImageName;

- (void).cxx_destruct;
- (void)_updateOptions;
- (void)_workQueue_updateOptions;
- (void)dealloc;
- (id)init;
- (id)initWithAssetCollection:(id)arg1;
- (void)invitationRecordsDidChange:(id)arg1;
- (void)preloadOptions;

@end

