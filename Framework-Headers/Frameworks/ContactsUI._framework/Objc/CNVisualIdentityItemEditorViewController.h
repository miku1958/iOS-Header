//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ContactsUI/CNPhotoPickerProviderItemDelegate-Protocol.h>
#import <ContactsUI/CNVisualIdentityEditablePrimaryAvatarViewControllerDelegate-Protocol.h>
#import <ContactsUI/UICollectionViewDataSource-Protocol.h>
#import <ContactsUI/UICollectionViewDelegate-Protocol.h>
#import <ContactsUI/UITextFieldDelegate-Protocol.h>

@class CNPhotoPickerProviderItem, CNPhotoPickerVariantsManager, CNVisualIdentityEditablePrimaryAvatarViewController, CNVisualIdentityItemEditorSegmentedControl, NSArray, NSLayoutConstraint, NSString, UICollectionView, UIView;
@protocol CNVisualIdentityItemEditorViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface CNVisualIdentityItemEditorViewController : UIViewController <UITextFieldDelegate, UICollectionViewDelegate, UICollectionViewDataSource, CNPhotoPickerProviderItemDelegate, CNVisualIdentityEditablePrimaryAvatarViewControllerDelegate>
{
    id<CNVisualIdentityItemEditorViewControllerDelegate> _delegate;
    CNVisualIdentityEditablePrimaryAvatarViewController *_editableAvatarViewController;
    CNVisualIdentityItemEditorSegmentedControl *_segmentedControl;
    NSLayoutConstraint *_avatarViewSizeConstraint;
    NSLayoutConstraint *_avatarViewTopConstraint;
    NSLayoutConstraint *_segmentedControlHeightConstraint;
    UICollectionView *_styleCollectionView;
    UIView *_styleDividerView;
    CNPhotoPickerVariantsManager *_variantsManager;
    NSArray *_variantProviderItems;
    CNPhotoPickerProviderItem *_providerItem;
}

@property (strong, nonatomic) NSLayoutConstraint *avatarViewSizeConstraint; // @synthesize avatarViewSizeConstraint=_avatarViewSizeConstraint;
@property (strong, nonatomic) NSLayoutConstraint *avatarViewTopConstraint; // @synthesize avatarViewTopConstraint=_avatarViewTopConstraint;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<CNVisualIdentityItemEditorViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) CNVisualIdentityEditablePrimaryAvatarViewController *editableAvatarViewController; // @synthesize editableAvatarViewController=_editableAvatarViewController;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) CNPhotoPickerProviderItem *providerItem; // @synthesize providerItem=_providerItem;
@property (strong, nonatomic) CNVisualIdentityItemEditorSegmentedControl *segmentedControl; // @synthesize segmentedControl=_segmentedControl;
@property (strong, nonatomic) NSLayoutConstraint *segmentedControlHeightConstraint; // @synthesize segmentedControlHeightConstraint=_segmentedControlHeightConstraint;
@property (strong, nonatomic) UICollectionView *styleCollectionView; // @synthesize styleCollectionView=_styleCollectionView;
@property (strong, nonatomic) UIView *styleDividerView; // @synthesize styleDividerView=_styleDividerView;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSArray *variantProviderItems; // @synthesize variantProviderItems=_variantProviderItems;
@property (strong, nonatomic) CNPhotoPickerVariantsManager *variantsManager; // @synthesize variantsManager=_variantsManager;

- (void).cxx_destruct;
- (void)adjustAvatarViewConstraintsForKeyboardFrame:(struct CGRect)arg1;
- (void)beginEditingAvatar;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (void)collectionView:(id)arg1 didSelectItemAtIndexPath:(id)arg2;
- (struct UIEdgeInsets)collectionView:(id)arg1 layout:(id)arg2 insetForSectionAtIndex:(long long)arg3;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;
- (void)didTapCancel;
- (void)didTapDone;
- (void)didTapEditableAvatar:(id)arg1;
- (void)didTapSegmentedControl:(id)arg1;
- (void)editableAvatarViewController:(id)arg1 didUpdateWithProviderItem:(id)arg2;
- (BOOL)editableAvatarViewControllerShouldBecomeFirstResponder:(id)arg1;
- (double)editableAvatarViewEdgeLength;
- (double)editorViewBottomYForAvatarSize:(double)arg1 withContainerTopMargin:(double)arg2;
- (double)fontSizeForContainerSize:(double)arg1;
- (void)forceEmojiKeyboardIfNeeded;
- (void)generateProviderItems;
- (void)hideStyleCollectionView;
- (id)initWithProviderItem:(id)arg1 variantsManager:(id)arg2;
- (BOOL)isEmojiProviderItemType;
- (void)keyboardWillShow:(id)arg1;
- (long long)numberOfItemsPerRow;
- (long long)numberOfSectionsInCollectionView:(id)arg1;
- (void)providerItemDidUpdate:(id)arg1;
- (double)segmentedControlTopMargin;
- (void)setupBarButtonItems;
- (void)setupEditableAvatarViewController;
- (void)setupSegmentedControl;
- (void)setupStyleCollectionView;
- (void)setupViewWithProviderItem:(id)arg1;
- (BOOL)shouldBeginEditing;
- (BOOL)shouldShowStyleCollectionView;
- (double)styleContainerTopMargin;
- (void)switchEditorToMode:(unsigned long long)arg1;
- (double)textFieldFontSize;
- (void)updateDoneButtonEnabledStateForText:(id)arg1;
- (void)updateFlowLayoutItemSize;
- (id)updatedProviderItem;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;

@end

