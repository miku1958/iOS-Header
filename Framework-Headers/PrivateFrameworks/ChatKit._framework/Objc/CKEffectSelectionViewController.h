//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ChatKit/UICollectionViewDelegate-Protocol.h>

@class CKFullScreenEffectManager, NSArray, NSString, UICollectionView, UICollectionViewDiffableDataSource, UIColor;
@protocol CKEffectSelectionViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CKEffectSelectionViewController : UIViewController <UICollectionViewDelegate>
{
    BOOL _labelUsesDarkVibrancy;
    id<CKEffectSelectionViewControllerDelegate> _delegate;
    UICollectionView *_collectionView;
    UICollectionViewDiffableDataSource *_dataSource;
    CKFullScreenEffectManager *_fsem;
    NSArray *_sendEffects;
    UIColor *_labelColor;
}

@property (strong, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property (strong, nonatomic) UICollectionViewDiffableDataSource *dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CKEffectSelectionViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) CKFullScreenEffectManager *fsem; // @synthesize fsem=_fsem;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIColor *labelColor; // @synthesize labelColor=_labelColor;
@property (nonatomic) BOOL labelUsesDarkVibrancy; // @synthesize labelUsesDarkVibrancy=_labelUsesDarkVibrancy;
@property (strong, nonatomic) NSString *selectedEffectIdentifier;
@property (strong, nonatomic) NSArray *sendEffects; // @synthesize sendEffects=_sendEffects;
@property (readonly) Class superclass;

+ (id)orderedEffectIdentifiers;
- (void).cxx_destruct;
- (BOOL)becomeFirstResponder;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 sizeForItemAtIndexPath:(id)arg3;
- (id)effectImageForIndexPath:(id)arg1;
- (id)effectTitleForIndexPath:(id)arg1;
- (double)maxCellHeight;
- (void)viewDidLoad;

@end

