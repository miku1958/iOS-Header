//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UITableViewCell.h>

#import <NanoTimeKitCompanion/UICollectionViewDataSource-Protocol.h>
#import <NanoTimeKitCompanion/UICollectionViewDelegateFlowLayout-Protocol.h>

@class NSArray, NSLayoutConstraint, NSString, NTKCGalleryCollection, UICollectionView, UICollectionViewFlowLayout, UILabel, UIStackView, _NTKCAddNewFace;
@protocol NTKCGalleryCellDelegate;

@interface NTKCGalleryCell : UITableViewCell <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>
{
    BOOL _hasCalloutName;
    BOOL _hasCalloutImage;
    BOOL _allSnapshotsLoaded;
    NTKCGalleryCollection *_collection;
    id<NTKCGalleryCellDelegate> _delegate;
    long long _selectedIndex;
    UILabel *_title;
    UICollectionView *_collectionView;
    UICollectionViewFlowLayout *_layout;
    NSLayoutConstraint *_titleBaselineConstraint;
    NSLayoutConstraint *_faceContainerTopConstraint;
    NSLayoutConstraint *_leadingInsetConstraint;
    NSLayoutConstraint *_cvHeightConstraint;
    UIStackView *_titleStack;
    UIStackView *_collectionViewFooterStack;
    UILabel *_footer;
    NSArray *_snapshotRequests;
    _NTKCAddNewFace *_addNewFace;
    struct CGSize _itemSize;
}

@property (strong, nonatomic) _NTKCAddNewFace *addNewFace; // @synthesize addNewFace=_addNewFace;
@property (nonatomic) BOOL allSnapshotsLoaded; // @synthesize allSnapshotsLoaded=_allSnapshotsLoaded;
@property (strong, nonatomic) NTKCGalleryCollection *collection; // @synthesize collection=_collection;
@property (strong, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property (strong, nonatomic) UIStackView *collectionViewFooterStack; // @synthesize collectionViewFooterStack=_collectionViewFooterStack;
@property (nonatomic) struct CGPoint contentOffset;
@property (strong, nonatomic) NSLayoutConstraint *cvHeightConstraint; // @synthesize cvHeightConstraint=_cvHeightConstraint;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<NTKCGalleryCellDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSLayoutConstraint *faceContainerTopConstraint; // @synthesize faceContainerTopConstraint=_faceContainerTopConstraint;
@property (strong, nonatomic) UILabel *footer; // @synthesize footer=_footer;
@property (nonatomic) BOOL hasCalloutImage; // @synthesize hasCalloutImage=_hasCalloutImage;
@property (nonatomic) BOOL hasCalloutName; // @synthesize hasCalloutName=_hasCalloutName;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGSize itemSize; // @synthesize itemSize=_itemSize;
@property (strong, nonatomic) UICollectionViewFlowLayout *layout; // @synthesize layout=_layout;
@property (strong, nonatomic) NSLayoutConstraint *leadingInsetConstraint; // @synthesize leadingInsetConstraint=_leadingInsetConstraint;
@property (nonatomic) long long selectedIndex; // @synthesize selectedIndex=_selectedIndex;
@property (copy, nonatomic) NSArray *snapshotRequests; // @synthesize snapshotRequests=_snapshotRequests;
@property (readonly) Class superclass;
@property (strong, nonatomic) UILabel *title; // @synthesize title=_title;
@property (strong, nonatomic) NSLayoutConstraint *titleBaselineConstraint; // @synthesize titleBaselineConstraint=_titleBaselineConstraint;
@property (strong, nonatomic) UIStackView *titleStack; // @synthesize titleStack=_titleStack;

+ (id)reuseIdentifier;
+ (double)rowHeightForCollection:(id)arg1;
- (void).cxx_destruct;
- (struct CGPoint)_contentInsetPoint;
- (void)_fontSizeDidChange;
- (void)_resetSnapshotRequests;
- (BOOL)_shouldShowAddNewFace;
- (void)calculateHeightForCollection;
- (void)clearSelectedFaces;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForFooterInSection:(long long)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)containerViewForFace:(id)arg1;
- (void)dealloc;
- (void)didMoveToSuperview;
- (void)ensureCorrectTitleViewOrientation;
- (id)faceForLocation:(struct CGPoint)arg1;
- (BOOL)hasFooterText;
- (id)init;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)selectFace:(id)arg1;
- (BOOL)shouldShowFooterTextInCollectionView;
- (void)showFooterTextIfNeeded;
- (void)updateFaceAtIndex:(unsigned long long)arg1;

@end

