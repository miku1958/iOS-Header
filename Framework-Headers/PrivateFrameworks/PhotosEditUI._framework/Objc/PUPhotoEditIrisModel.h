//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/PUViewModel.h>

#import <PhotosEditUI/NSCopying-Protocol.h>

@class PLPhotoEditModel, PUPhotoEditIrisModelChange;
@protocol PUEditableAsset;

__attribute__((visibility("hidden")))
@interface PUPhotoEditIrisModel : PUViewModel <NSCopying>
{
    BOOL _videoEnabled;
    BOOL _ignoresUpdates;
    BOOL __assetHasAdjustments;
    unsigned short __editingVisibility;
    unsigned short __assetVisibility;
    id<PUEditableAsset> _asset;
    PLPhotoEditModel *_photoEditModel;
}

@property (readonly, nonatomic) BOOL _assetHasAdjustments; // @synthesize _assetHasAdjustments=__assetHasAdjustments;
@property (readonly, nonatomic) unsigned short _assetVisibility; // @synthesize _assetVisibility=__assetVisibility;
@property (nonatomic, setter=_setEditingVisibility:) unsigned short _editingVisibility; // @synthesize _editingVisibility=__editingVisibility;
@property (readonly, nonatomic) id<PUEditableAsset> asset; // @synthesize asset=_asset;
@property (readonly, nonatomic) PUPhotoEditIrisModelChange *currentChange;
@property (readonly, nonatomic) BOOL hasUnsavedChanges;
@property (nonatomic) BOOL ignoresUpdates; // @synthesize ignoresUpdates=_ignoresUpdates;
@property (strong, nonatomic, setter=_setPhotoEditModel:) PLPhotoEditModel *photoEditModel; // @synthesize photoEditModel=_photoEditModel;
@property (nonatomic, getter=isVideoEnabled) BOOL videoEnabled; // @synthesize videoEnabled=_videoEnabled;

+ (void)updateChangeRequestForRevert:(id)arg1;
- (void).cxx_destruct;
- (void)_photoEditModelDidChange:(id)arg1;
- (void)_setHidden:(BOOL)arg1 explicit:(BOOL)arg2 supportable:(BOOL)arg3;
- (void)_updateAutoDisableStateIfNeeded;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)init;
- (id)initWithAsset:(id)arg1 editModel:(id)arg2;
- (id)initWithIrisVisibilityState:(unsigned short)arg1 hasAdjustments:(BOOL)arg2 editModel:(id)arg3;
- (id)newViewModelChange;
- (void)notifyCannotSupportVideoEdits;
- (BOOL)reenablingLivePhotoShouldRemoveEdits;
- (void)updateChangeRequestForSave:(id)arg1;

@end

