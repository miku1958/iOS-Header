//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <ChatKit/UICollectionViewDelegate-Protocol.h>
#import <ChatKit/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, UICollectionView, UICollectionViewCompositionalLayout, UICollectionViewDiffableDataSource;
@protocol CKMentionSuggestionViewDataSource, CKMentionSuggestionViewDelegate;

@interface CKMentionSuggestionView : UIView <UICollectionViewDelegate, UIGestureRecognizerDelegate>
{
    BOOL _hasCompletedInitialLayoutPass;
    id<CKMentionSuggestionViewDelegate> _delegate;
    id<CKMentionSuggestionViewDataSource> _dataSource;
    UICollectionView *_collectionView;
    UICollectionViewDiffableDataSource *_diffableDataSource;
    UICollectionViewCompositionalLayout *_suggestionViewLayout;
}

@property (strong, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property (weak, nonatomic) id<CKMentionSuggestionViewDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CKMentionSuggestionViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UICollectionViewDiffableDataSource *diffableDataSource; // @synthesize diffableDataSource=_diffableDataSource;
@property (nonatomic) BOOL hasCompletedInitialLayoutPass; // @synthesize hasCompletedInitialLayoutPass=_hasCompletedInitialLayoutPass;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UICollectionViewCompositionalLayout *suggestionViewLayout; // @synthesize suggestionViewLayout=_suggestionViewLayout;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (void)dealloc;
- (id)init;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)reloadData;
- (void)suggestionsDidChange;
- (id)suggestionsLayout;
- (id)suggestionsLayoutSectionForEnvironment:(id)arg1;

@end
