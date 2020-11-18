//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXActionPerformerDelegate-Protocol.h>
#import <PhotosUICore/PXChangeObserver-Protocol.h>

@class NSArray, NSSet, NSString, PHFetchResult, PXCMMSendBackSuggestionSource, PXPhotoKitAssetActionManager, PXPhotoKitAssetCollectionActionManager;
@protocol PXActionMenuDelegate;

@interface PXActionMenuController : NSObject <PXActionPerformerDelegate, PXChangeObserver>
{
    struct {
        BOOL action;
    } _needsUpdateFlags;
    NSSet *_disabledActionTypes;
    NSSet *_excludedActionTypes;
    PXCMMSendBackSuggestionSource *_sendBackSuggestionSource;
    PHFetchResult *_people;
    id<PXActionMenuDelegate> _delegate;
    PXPhotoKitAssetCollectionActionManager *_assetCollectionActionManager;
    PXPhotoKitAssetActionManager *_assetActionManager;
    NSArray *_actions;
    NSArray *_actionTypes;
}

@property (strong, nonatomic) NSArray *actionTypes; // @synthesize actionTypes=_actionTypes;
@property (strong, nonatomic) NSArray *actions; // @synthesize actions=_actions;
@property (readonly, nonatomic) PXPhotoKitAssetActionManager *assetActionManager; // @synthesize assetActionManager=_assetActionManager;
@property (readonly, nonatomic) PXPhotoKitAssetCollectionActionManager *assetCollectionActionManager; // @synthesize assetCollectionActionManager=_assetCollectionActionManager;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<PXActionMenuDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSSet *disabledActionTypes; // @synthesize disabledActionTypes=_disabledActionTypes;
@property (copy, nonatomic) NSSet *excludedActionTypes; // @synthesize excludedActionTypes=_excludedActionTypes;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) PHFetchResult *people; // @synthesize people=_people;
@property (strong, nonatomic) PXCMMSendBackSuggestionSource *sendBackSuggestionSource; // @synthesize sendBackSuggestionSource=_sendBackSuggestionSource;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_availableActionTypes;
- (void)_invalidateActions;
- (void)_updateActionsIfNeeded;
- (void)actionPerformer:(id)arg1 didChangeState:(unsigned long long)arg2;
- (BOOL)actionPerformer:(id)arg1 dismissViewController:(struct NSObject *)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)actionPerformer:(id)arg1 presentViewController:(struct NSObject *)arg2;
- (id)init;
- (id)initWithSelectionManager:(id)arg1 displayTitleInfo:(id)arg2;
- (void)observable:(id)arg1 didChange:(unsigned long long)arg2 context:(void *)arg3;

@end

