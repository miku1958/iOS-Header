//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <PencilKit/UICollectionViewDataSource-Protocol.h>
#import <PencilKit/UICollectionViewDelegateFlowLayout-Protocol.h>

@class NSArray, NSDictionary, NSLayoutConstraint, NSString, UICollectionView, UILabel, UIScrollView;

@interface PKRecognitionDataCollectionViewController : UIViewController <UICollectionViewDelegateFlowLayout, UICollectionViewDataSource>
{
    NSArray *_drawings;
    NSArray *_drawingImages;
    NSDictionary *_metadata;
    UIScrollView *_scrollView;
    UILabel *_descriptionLabel;
    UICollectionView *_collectionView;
    NSLayoutConstraint *_collectionViewHeightConstraint;
}

@property (strong, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property (strong, nonatomic) NSLayoutConstraint *collectionViewHeightConstraint; // @synthesize collectionViewHeightConstraint=_collectionViewHeightConstraint;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UILabel *descriptionLabel; // @synthesize descriptionLabel=_descriptionLabel;
@property (strong, nonatomic) NSArray *drawingImages; // @synthesize drawingImages=_drawingImages;
@property (strong, nonatomic) NSArray *drawings; // @synthesize drawings=_drawings;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSDictionary *metadata; // @synthesize metadata=_metadata;
@property (strong, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)adjustCollectionViewHeight;
- (void)cancelButtonTapped:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)initWithDrawings:(id)arg1 metadata:(id)arg2;
- (void)openAppleFeedbackAssistantWithTempDirectoryURL:(id)arg1;
- (void)openTapToRadarWithTempDirectoryURL:(id)arg1;
- (void)openURL:(id)arg1;
- (id)saveDataForDrawings:(id)arg1 baseURL:(id)arg2 shouldSaveRecognitionData:(BOOL)arg3;
- (void)sendRadarButtonTapped:(id)arg1;
- (id)synchronousImageForDrawing:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end

