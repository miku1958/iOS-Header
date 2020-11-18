//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ChatKit/CKAvatarPickerLayoutDelegate-Protocol.h>
#import <ChatKit/CNAvatarViewDelegate-Protocol.h>
#import <ChatKit/UICollectionViewDataSource-Protocol.h>
#import <ChatKit/UICollectionViewDelegate-Protocol.h>

@class CKAvatarPickerLayout, CKAvatarTitleCollectionReusableView, CKConversation, CNContactStore, NSMapTable, NSString, UICollectionView;

@interface CKAvatarPickerViewController : UIViewController <UICollectionViewDelegate, UICollectionViewDataSource, CNAvatarViewDelegate, CKAvatarPickerLayoutDelegate>
{
    CKAvatarTitleCollectionReusableView *_titleView;
    long long _indicatorType;
    UICollectionView *_collectionView;
    CKAvatarPickerLayout *_layout;
    CKConversation *_conversation;
    CNContactStore *_suggestionsEnabledContactStore;
    NSMapTable *_visibleTitleViews;
    long long _style;
}

@property (strong, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property (strong, nonatomic) CKConversation *conversation; // @synthesize conversation=_conversation;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long indicatorType; // @synthesize indicatorType=_indicatorType;
@property (strong, nonatomic) CKAvatarPickerLayout *layout; // @synthesize layout=_layout;
@property (nonatomic) long long style; // @synthesize style=_style;
@property (strong, nonatomic) CNContactStore *suggestionsEnabledContactStore; // @synthesize suggestionsEnabledContactStore=_suggestionsEnabledContactStore;
@property (readonly) Class superclass;
@property (strong, nonatomic) CKAvatarTitleCollectionReusableView *titleView; // @synthesize titleView=_titleView;
@property (readonly, nonatomic) struct CGRect titleViewFrame;
@property (strong, nonatomic) NSMapTable *visibleTitleViews; // @synthesize visibleTitleViews=_visibleTitleViews;

- (void).cxx_destruct;
- (void)_animateInTitleView;
- (void)_animateOutTitleView;
- (void)_chatPropertiesChanged:(id)arg1;
- (id)_contactNameSupplementaryViewAtIndexPath:(id)arg1;
- (id)_cutoutSupplementaryViewAtIndexPath:(id)arg1;
- (void)_handleAddressBookChange:(id)arg1;
- (void)_handleConversationIsFilteredChange:(id)arg1;
- (void)_handleConversationRecipientsDidChange:(id)arg1;
- (void)_handleGroupNameChange:(id)arg1;
- (void)_setTitle:(id)arg1 animated:(BOOL)arg2;
- (BOOL)_shouldUseBanner;
- (id)_titleSupplementaryViewAtIndexPath:(id)arg1;
- (id)avatarDisplayName;
- (BOOL)avatarPickerLayoutShouldShowTitle:(id)arg1;
- (id)avatarView:(id)arg1 orderedPropertiesForProperties:(id)arg2 category:(id)arg3;
- (BOOL)chatIsReportedAsSpam;
- (int)chatWasDetectedAsSMSSpam;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (void)dealloc;
- (BOOL)hasTitle;
- (id)initWithConversation:(id)arg1;
- (void)loadView;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (id)presentingViewControllerForAvatarView:(id)arg1;
- (void)setAvatarPickerActive:(BOOL)arg1;
- (void)updateContentsForConversation:(id)arg1;

@end
