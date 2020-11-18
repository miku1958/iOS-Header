//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/VUILibraryStackViewController.h>

#import <VideosUI/UICollectionViewDataSource-Protocol.h>
#import <VideosUI/UICollectionViewDelegate-Protocol.h>
#import <VideosUI/UICollectionViewDelegateFlowLayout-Protocol.h>

@class NSArray, NSString, VUILibraryMenuItemViewCell;
@protocol VUIHomeShareViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface VUIHomeShareViewController : VUILibraryStackViewController <UICollectionViewDataSource, UICollectionViewDelegateFlowLayout, UICollectionViewDelegate>
{
    id<VUIHomeShareViewControllerDelegate> _delegate;
    NSArray *_homeShares;
    VUILibraryMenuItemViewCell *_menuItemSizingCell;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<VUIHomeShareViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSArray *homeShares; // @synthesize homeShares=_homeShares;
@property (strong, nonatomic) VUILibraryMenuItemViewCell *menuItemSizingCell; // @synthesize menuItemSizingCell=_menuItemSizingCell;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_addMediaLibraryNotificationObservers;
- (void)_addNotificationObserversWithDeviceLibrary:(id)arg1;
- (id)_deviceMediaLibrary;
- (void)_homeShareMediaLibrariesDidChange:(id)arg1;
- (void)_removeMediaLibraryNotificationObservers;
- (void)_removeNotificationObserversWithDeviceLibrary:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)configureWithCollectionView:(id)arg1;
- (void)dealloc;
- (id)initWithMediaLibrary:(id)arg1;
- (void)loadView;
- (void)start;
- (void)viewWillAppear:(BOOL)arg1;

@end
