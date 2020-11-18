//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewController.h>

#import <UIKit/UIGestureRecognizerDelegate-Protocol.h>
#import <UIKit/_UIActivityGroupViewDelegateFlowLayout-Protocol.h>

@class NSArray, NSDictionary, NSIndexPath, NSString, UILongPressGestureRecognizer, _UIActivityUserDefaults, _UIUserDefaultsActivity;
@protocol UIActivityGroupViewControllerDataSource, UIActivityGroupViewControllerDelegate;

@interface UIActivityGroupViewController : UICollectionViewController <_UIActivityGroupViewDelegateFlowLayout, UIGestureRecognizerDelegate>
{
    BOOL _hasActivities;
    BOOL _activityIndexDidChangeWhileDragging;
    BOOL _allowsUserCustomization;
    BOOL _darkStyleOnLegacyApp;
    BOOL _embedded;
    BOOL _picker;
    id<UIActivityGroupViewControllerDelegate> _delegate;
    long long _activityCategory;
    NSDictionary *_customActivityTitles;
    NSArray *_activities;
    NSArray *_visibleActivities;
    _UIActivityUserDefaults *_userDefaults;
    _UIUserDefaultsActivity *_userDefaultsActivity;
    UILongPressGestureRecognizer *_editingGestureRecognizer;
    NSIndexPath *_indexPathForMenuActivity;
    id<UIActivityGroupViewControllerDataSource> _dataSource;
    struct CGPoint _initialDraggingLocation;
}

@property (copy, nonatomic) NSArray *activities; // @synthesize activities=_activities;
@property (nonatomic) long long activityCategory; // @synthesize activityCategory=_activityCategory;
@property (nonatomic) BOOL activityIndexDidChangeWhileDragging; // @synthesize activityIndexDidChangeWhileDragging=_activityIndexDidChangeWhileDragging;
@property (nonatomic) BOOL allowsUserCustomization; // @synthesize allowsUserCustomization=_allowsUserCustomization;
@property (copy, nonatomic) NSDictionary *customActivityTitles; // @synthesize customActivityTitles=_customActivityTitles;
@property (nonatomic) BOOL darkStyleOnLegacyApp; // @synthesize darkStyleOnLegacyApp=_darkStyleOnLegacyApp;
@property (weak, nonatomic) id<UIActivityGroupViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<UIActivityGroupViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) UILongPressGestureRecognizer *editingGestureRecognizer; // @synthesize editingGestureRecognizer=_editingGestureRecognizer;
@property (nonatomic, getter=isEmbedded) BOOL embedded; // @synthesize embedded=_embedded;
@property (nonatomic) BOOL hasActivities; // @synthesize hasActivities=_hasActivities;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSIndexPath *indexPathForMenuActivity; // @synthesize indexPathForMenuActivity=_indexPathForMenuActivity;
@property (nonatomic) struct CGPoint initialDraggingLocation; // @synthesize initialDraggingLocation=_initialDraggingLocation;
@property (nonatomic, getter=isPicker) BOOL picker; // @synthesize picker=_picker;
@property (readonly) Class superclass;
@property (strong, nonatomic) _UIActivityUserDefaults *userDefaults; // @synthesize userDefaults=_userDefaults;
@property (strong, nonatomic) _UIUserDefaultsActivity *userDefaultsActivity; // @synthesize userDefaultsActivity=_userDefaultsActivity;
@property (copy, nonatomic) NSArray *visibleActivities; // @synthesize visibleActivities=_visibleActivities;

- (void).cxx_destruct;
- (struct CGSize)_cachedPreferredItemSizeForString:(id)arg1;
- (void)_setActivities:(id)arg1 animated:(BOOL)arg2;
- (void)_setVisibleActivities:(id)arg1 animated:(BOOL)arg2;
- (id)_titleTextForActivity:(id)arg1;
- (void)_updateItemSizeIfNeeded;
- (void)_updateVisibleActivitiesAnimated:(BOOL)arg1;
- (id)activityForItemAtIndexPath:(id)arg1;
- (id)activityGroupViewLayout;
- (void)activityUserDefaultsDidChange:(id)arg1;
- (BOOL)canBecomeFirstResponder;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (id)collectionView:(id)arg1 layout:(id)arg2 moveItemAtIndexPath:(id)arg3 toIndexPath:(id)arg4;
- (id)collectionView:(id)arg1 layout:(id)arg2 needsContainerViewForDraggingItemAtIndexPath:(id)arg3;
- (struct CGSize)collectionView:(id)arg1 layout:(id)arg2 preferredSizeForItemAtIndexPath:(id)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (BOOL)collectionView:(id)arg1 shouldHighlightItemAtIndexPath:(id)arg2;
- (BOOL)collectionView:(id)arg1 shouldSelectItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 willDisplayCell:(id)arg2 forItemAtIndexPath:(id)arg3;
- (void)dealloc;
- (BOOL)gestureRecognizerShouldBegin:(id)arg1;
- (void)handleEditingGesture:(id)arg1;
- (void)hideActivity:(id)arg1;
- (void)hideItemAtIndexPath:(id)arg1;
- (void)ignoreUserDefaultsChangesWhileUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithActivityCategory:(long long)arg1 userDefaults:(id)arg2;
- (id)initWithActivityCategory:(long long)arg1 userDefaults:(id)arg2 userDefaultsIdentifier:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithCollectionViewLayout:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)registerForActivityUserDefaultsChanges;
- (void)reloadItemForActivityOfTypeIfNeeded:(id)arg1;
- (void)setActivities:(id)arg1 animated:(BOOL)arg2;
- (void)setEditing:(BOOL)arg1 animated:(BOOL)arg2;
- (id)targetIndexPathForMoveFromRowAtIndexPath:(id)arg1 toProposedIndexPath:(id)arg2;
- (void)traitCollectionDidChange:(id)arg1;
- (void)unregisterForActivityUserDefaultsChanges;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;

@end

