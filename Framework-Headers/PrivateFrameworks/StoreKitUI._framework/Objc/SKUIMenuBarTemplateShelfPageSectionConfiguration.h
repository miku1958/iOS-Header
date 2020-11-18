//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIShelfPageSectionConfiguration.h>

@interface SKUIMenuBarTemplateShelfPageSectionConfiguration : SKUIShelfPageSectionConfiguration
{
    id _fixedElementsCollectionViewCell;
    unsigned long long _numberOfIterations;
    long long _focusedIndex;
}

- (void).cxx_destruct;
- (id)_focusedViewElement;
- (id)cellForShelfViewElement:(id)arg1 indexPath:(id)arg2;
- (struct CGSize)cellSizeForShelfViewElement:(id)arg1 indexPath:(id)arg2 numberOfShelfItems:(long long)arg3;
- (void)collectionViewWillApplyLayoutAttributes:(id)arg1;
- (id)effectiveViewElementForShelfItemViewElement:(id)arg1;
- (id)init;
- (id)initWithNumberOfIterations:(unsigned long long)arg1;
- (unsigned long long)numberOfIterations;
- (long long)numberOfSectionCells;
- (void)registerReusableClassesForCollectionView:(id)arg1;
- (void)reloadShelfLayoutDataForShelfViewElement:(id)arg1 withShelfItemViewElements:(id)arg2 requestCellLayouts:(BOOL)arg3 numberOfShelfItems:(long long)arg4;
- (void)scrollViewDidScroll:(id)arg1;

@end

