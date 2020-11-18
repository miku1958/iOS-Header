//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class CKConversationListAccessoryView, CKPinnedConversationView, NSObject;
@protocol CKPinnedConversationCollectionViewCellDelegate;

@interface CKPinnedConversationCollectionViewCell : UICollectionViewCell
{
    BOOL _showsBackgroundViewWhenSelected;
    BOOL _isShowingUnpinAccessory;
    BOOL _isShowingCheckboxAccessory;
    BOOL _isPreparingForReuse;
    NSObject<CKPinnedConversationCollectionViewCellDelegate> *_delegate;
    CKPinnedConversationView *_pinnedConversationView;
    CKConversationListAccessoryView *_unpinAccessoryView;
    unsigned long long _editingMode;
    CKConversationListAccessoryView *_checkboxAccessoryView;
    unsigned long long _currentState;
}

@property (strong, nonatomic) CKConversationListAccessoryView *checkboxAccessoryView; // @synthesize checkboxAccessoryView=_checkboxAccessoryView;
@property (nonatomic) unsigned long long currentState; // @synthesize currentState=_currentState;
@property (weak, nonatomic) NSObject<CKPinnedConversationCollectionViewCellDelegate> *delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) unsigned long long editingMode; // @synthesize editingMode=_editingMode;
@property (nonatomic, setter=setJittering:) BOOL isJittering;
@property (nonatomic) BOOL isPreparingForReuse; // @synthesize isPreparingForReuse=_isPreparingForReuse;
@property (nonatomic, setter=setShowingCheckboxAccessory:) BOOL isShowingCheckboxAccessory; // @synthesize isShowingCheckboxAccessory=_isShowingCheckboxAccessory;
@property (nonatomic, setter=setShowingUnpinAccessory:) BOOL isShowingUnpinAccessory; // @synthesize isShowingUnpinAccessory=_isShowingUnpinAccessory;
@property (strong, nonatomic) CKPinnedConversationView *pinnedConversationView; // @synthesize pinnedConversationView=_pinnedConversationView;
@property (nonatomic) BOOL showsBackgroundViewWhenSelected; // @synthesize showsBackgroundViewWhenSelected=_showsBackgroundViewWhenSelected;
@property (strong, nonatomic) CKConversationListAccessoryView *unpinAccessoryView; // @synthesize unpinAccessoryView=_unpinAccessoryView;

+ (id)_jitterRotationAnimation;
+ (id)_jitterXTranslationAnimation;
+ (id)_jitterYTranslationAnimation;
+ (id)checkmarkAccessoryView;
+ (id)reuseIdentifier;
+ (id)unpinAccessoryView;
- (void).cxx_destruct;
- (void)_createCheckboxAccessoryIfNecessary;
- (void)_createUnpinAccessoryIfNecessary;
- (void)_updateActivitySupressionForState:(unsigned long long)arg1;
- (void)_updateGhostedAppearance;
- (void)_updateViewConfigurationsWithState:(unsigned long long)arg1;
- (void)_updateZPositionForState:(unsigned long long)arg1;
- (unsigned long long)_viewConfigurationState;
- (double)accessorySizeForLayoutStyle:(long long)arg1;
- (struct CGRect)checkboxFrame;
- (id)configurationState;
- (void)didMoveToSuperview;
- (void)dragStateDidChange:(long long)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)prepareForReuse;
- (void)setEditingMode:(unsigned long long)arg1 animated:(BOOL)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGRect)unpinAccessoryViewFrame;
- (void)unpinButtonTapped:(id)arg1;
- (void)updateCheckboxAccessoryImageForCurrentLayoutStyle;
- (void)updateUnpinAccessoryImageForCurrentLayoutStyle;

@end
