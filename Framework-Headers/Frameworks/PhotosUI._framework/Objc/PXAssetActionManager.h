//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXActionManager.h>

@class PXSelectionSnapshot;

@interface PXAssetActionManager : PXActionManager
{
    PXSelectionSnapshot *_selectionSnapshot;
}

@property (readonly, nonatomic) PXSelectionSnapshot *selectionSnapshot; // @synthesize selectionSnapshot=_selectionSnapshot;

- (void).cxx_destruct;
- (id)actionPerformerForActionType:(id)arg1;
- (BOOL)canPerformAssetVariationActions;
- (id)init;
- (id)initWithSelectionSnapshot:(id)arg1;
- (void)px_registerAdditionalPerformerClasses;

@end

