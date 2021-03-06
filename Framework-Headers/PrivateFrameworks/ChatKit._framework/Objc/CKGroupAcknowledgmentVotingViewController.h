//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ChatKit/CKAcknowledgmentVotingViewAnimatorDelegate-Protocol.h>
#import <ChatKit/UICollectionViewDataSource-Protocol.h>
#import <ChatKit/UICollectionViewDelegate-Protocol.h>

@class CKAcknowledgmentVotingViewAnimator, CKAggregateAcknowledgmentChatItem, CKGroupAcknowledgmentVotingLayout, NSArray, NSString, UIButton, UICollectionView, UITapGestureRecognizer, _CKAcknowledgmentVoteCountView;

@interface CKGroupAcknowledgmentVotingViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, CKAcknowledgmentVotingViewAnimatorDelegate>
{
    NSArray *_tallies;
    CKAggregateAcknowledgmentChatItem *_chatItem;
    UICollectionView *_collectionView;
    CKGroupAcknowledgmentVotingLayout *_layout;
    CKAcknowledgmentVotingViewAnimator *_animator;
    UITapGestureRecognizer *_tapGestureRecognizer;
    UIButton *_collapseButton;
    _CKAcknowledgmentVoteCountView *_currentlyExpandedVoteCountView;
    NSArray *_sortedAnimatorModelItems;
}

@property (strong, nonatomic) CKAcknowledgmentVotingViewAnimator *animator; // @synthesize animator=_animator;
@property (strong, nonatomic) CKAggregateAcknowledgmentChatItem *chatItem; // @synthesize chatItem=_chatItem;
@property (strong, nonatomic) UIButton *collapseButton; // @synthesize collapseButton=_collapseButton;
@property (strong, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property (strong, nonatomic) _CKAcknowledgmentVoteCountView *currentlyExpandedVoteCountView; // @synthesize currentlyExpandedVoteCountView=_currentlyExpandedVoteCountView;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) CKGroupAcknowledgmentVotingLayout *layout; // @synthesize layout=_layout;
@property (copy, nonatomic) NSArray *sortedAnimatorModelItems; // @synthesize sortedAnimatorModelItems=_sortedAnimatorModelItems;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSArray *tallies; // @synthesize tallies=_tallies;
@property (strong, nonatomic) UITapGestureRecognizer *tapGestureRecognizer; // @synthesize tapGestureRecognizer=_tapGestureRecognizer;

- (void).cxx_destruct;
- (id)_ackIconSupplementaryViewAtIndexPath:(id)arg1;
- (void)_animateToLayout:(unsigned long long)arg1 aroundSection:(long long)arg2;
- (void)_collapseCollectionView;
- (id)_contactNameSupplementaryViewAtIndexPath:(id)arg1;
- (void)_expandCollectionViewExpandedViewAroundSection:(long long)arg1;
- (void)_handleCollapseButton:(id)arg1;
- (void)_layoutCollapseButton;
- (void)_layoutCurrentlyExpandedVoteCountView;
- (void)_setupTallies;
- (id)_voteCountSupplementaryViewAtIndexPath:(id)arg1;
- (void)acknowledgmentVotingViewAnimatorDidFinishAnimation:(id)arg1;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)dealloc;
- (id)hitTest:(struct CGPoint)arg1 withGestureRecognizer:(id)arg2;
- (id)initWithMessagePartChatItem:(id)arg1;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)tapGestureRecognized:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;

@end

