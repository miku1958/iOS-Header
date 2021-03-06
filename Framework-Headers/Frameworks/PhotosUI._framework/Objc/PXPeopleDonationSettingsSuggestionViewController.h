//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PhotosUICore/UICollectionViewDataSource-Protocol.h>
#import <PhotosUICore/UICollectionViewDelegate-Protocol.h>
#import <PhotosUICore/UICollectionViewDelegateFlowLayout-Protocol.h>

@class NSString, PHFetchResult, PHPerson, UICollectionView, UIImage;

@interface PXPeopleDonationSettingsSuggestionViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, UICollectionViewDelegateFlowLayout>
{
    PHPerson *_person;
    UICollectionView *_collectionView;
    UIImage *_image;
    PHFetchResult *_faceCrops;
}

@property (strong, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) PHFetchResult *faceCrops; // @synthesize faceCrops=_faceCrops;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIImage *image; // @synthesize image=_image;
@property (readonly, nonatomic) PHPerson *person; // @synthesize person=_person;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 referenceSizeForHeaderInSection:(long long)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)initWithPerson:(id)arg1;
- (void)loadDataSource;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)viewDidLoad;

@end

