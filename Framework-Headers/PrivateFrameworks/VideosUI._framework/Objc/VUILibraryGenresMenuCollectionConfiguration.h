//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VUICollectionConfiguration.h>

@class VUILibraryMenuItemViewCell;

__attribute__((visibility("hidden")))
@interface VUILibraryGenresMenuCollectionConfiguration : VUICollectionConfiguration
{
    VUILibraryMenuItemViewCell *_menuItemSizingCell;
}

@property (strong, nonatomic) VUILibraryMenuItemViewCell *menuItemSizingCell; // @synthesize menuItemSizingCell=_menuItemSizingCell;

- (void).cxx_destruct;
- (Class)classForCollectionViewCell;
- (id)configureCollectionViewCellForCollectionView:(id)arg1 ForItem:(id)arg2 AtIndexPath:(id)arg3;
- (id)configureSizingCellForItem:(id)arg1 AtIndexPath:(id)arg2;
- (id)generateCollectionView;
- (double)minimumLineSpacing;

@end
