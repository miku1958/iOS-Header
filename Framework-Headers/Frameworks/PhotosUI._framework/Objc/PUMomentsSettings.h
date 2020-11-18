//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXSettings.h>

__attribute__((visibility("hidden")))
@interface PUMomentsSettings : PXSettings
{
    BOOL _allowCollectionInfluence;
    unsigned long long _order;
}

@property (nonatomic) BOOL allowCollectionInfluence; // @synthesize allowCollectionInfluence=_allowCollectionInfluence;
@property (nonatomic) unsigned long long order; // @synthesize order=_order;

+ (void)_clearSelection;
+ (id)_currentlySelectedAssets;
+ (void)_mergeMoments;
+ (void)_rebuildMoments;
+ (void)_renameCollection;
+ (void)_renameMoment;
+ (void)_splitMomentsWithBoth:(BOOL)arg1;
+ (void)_tagSelectionForCollections;
+ (id)settingsControllerModule;
+ (id)sharedInstance;
- (id)parentSettings;
- (void)performPostSaveActions;
- (void)setDefaultValues;

@end
