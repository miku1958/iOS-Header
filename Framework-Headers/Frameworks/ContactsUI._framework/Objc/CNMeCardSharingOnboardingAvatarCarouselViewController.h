//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ContactsUI/UICollectionViewDataSource-Protocol.h>
#import <ContactsUI/UICollectionViewDelegate-Protocol.h>

@class CNContact, CNMeCardSharingOnboardingAvatarCarouselItem, CNMeCardSharingOnboardingAvatarCarouselLayout, CNSharingProfileLogger, NSArray, NSString, PRMonogramColor, UICollectionView;
@protocol AVTAvatarRecord, CNMeCardSharingOnboardingAvatarCarouselViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNMeCardSharingOnboardingAvatarCarouselViewController : UIViewController <UICollectionViewDataSource, UICollectionViewDelegate>
{
    id<CNMeCardSharingOnboardingAvatarCarouselViewControllerDelegate> _delegate;
    PRMonogramColor *_monogramColor;
    NSArray *_items;
    UICollectionView *_collectionView;
    CNMeCardSharingOnboardingAvatarCarouselLayout *_layout;
    id<AVTAvatarRecord> _avatarRecord;
    CNContact *_contact;
    CNMeCardSharingOnboardingAvatarCarouselItem *_photoPickerItem;
    CNMeCardSharingOnboardingAvatarCarouselItem *_animojiItem;
    CNMeCardSharingOnboardingAvatarCarouselItem *_photoItem;
    CNMeCardSharingOnboardingAvatarCarouselItem *_monogramItem;
    CNSharingProfileLogger *_logger;
}

@property (strong, nonatomic) CNMeCardSharingOnboardingAvatarCarouselItem *animojiItem; // @synthesize animojiItem=_animojiItem;
@property (strong, nonatomic) id<AVTAvatarRecord> avatarRecord; // @synthesize avatarRecord=_avatarRecord;
@property (strong, nonatomic) UICollectionView *collectionView; // @synthesize collectionView=_collectionView;
@property (strong, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CNMeCardSharingOnboardingAvatarCarouselViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSArray *items; // @synthesize items=_items;
@property (strong, nonatomic) CNMeCardSharingOnboardingAvatarCarouselLayout *layout; // @synthesize layout=_layout;
@property (readonly, nonatomic) CNSharingProfileLogger *logger; // @synthesize logger=_logger;
@property (strong, nonatomic) PRMonogramColor *monogramColor; // @synthesize monogramColor=_monogramColor;
@property (strong, nonatomic) CNMeCardSharingOnboardingAvatarCarouselItem *monogramItem; // @synthesize monogramItem=_monogramItem;
@property (strong, nonatomic) CNMeCardSharingOnboardingAvatarCarouselItem *photoItem; // @synthesize photoItem=_photoItem;
@property (strong, nonatomic) CNMeCardSharingOnboardingAvatarCarouselItem *photoPickerItem; // @synthesize photoPickerItem=_photoPickerItem;
@property (readonly, nonatomic) CNMeCardSharingOnboardingAvatarCarouselItem *selectedItem;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)buildItems;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (id)contactImageItemWithContact:(id)arg1;
- (id)initWithContact:(id)arg1 avatarRecord:(id)arg2 logger:(id)arg3;
- (id)itemsForNoAnimojiAndNoPhoto;
- (id)monogramImageItemWithContact:(id)arg1;
- (void)notifyDelegateOfUpdateToCenterMostItem;
- (void)reloadForUpdatedContactPhoto;
- (void)reloadForUpdatedMonogram;
- (void)scrollToItemAtIndex:(unsigned long long)arg1 animated:(BOOL)arg2;
- (void)scrollViewDidScroll:(id)arg1;
- (id)standardItems;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillLayoutSubviews;

@end

