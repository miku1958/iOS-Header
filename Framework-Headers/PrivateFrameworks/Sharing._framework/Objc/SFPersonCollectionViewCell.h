//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UICollectionViewCell.h>

@class NSArray, NSLayoutConstraint, NSObject, NSProgress, NSString, SFAirDropNode, SFCircleProgressView, SFPersonImageView, UIColor, UIImpactFeedbackGenerator, UILabel, UINotificationFeedbackGenerator, UISelectionFeedbackGenerator;
@protocol SFPersonCollectionViewCellDelegate;

@interface SFPersonCollectionViewCell : UICollectionViewCell
{
    BOOL _darkStyleOnLegacyApp;
    BOOL _stateBeingRestored;
    SFAirDropNode *_person;
    NSProgress *_progress;
    long long _cellState;
    NSString *_sessionID;
    NSObject<SFPersonCollectionViewCellDelegate> *_delegate;
    double _activitySheetWidth;
    SFPersonImageView *_imageView;
    SFCircleProgressView *_circleProgressView;
    id _progressToken;
    NSArray *_progressKeyPaths;
    UILabel *_secondLabel;
    NSArray *_secondLabelVisibleConstraintsArray;
    UIColor *_fadedSecondLabelColor;
    UILabel *_labelForPositioning;
    UINotificationFeedbackGenerator *_notificationHaptic;
    UISelectionFeedbackGenerator *_selectionHaptic;
    UIImpactFeedbackGenerator *_impactHaptic;
    NSLayoutConstraint *_secondLabelFBConstraint;
    NSLayoutConstraint *_cellWidthConstraint;
    NSLayoutConstraint *_chickletToTitleSpacingConstraint;
    NSLayoutConstraint *_nameFirstBaselineConstraint;
    NSLayoutConstraint *_largeTextNameCenterYConstraint;
    NSArray *_regularConstraints;
    NSArray *_largeTextConstraints;
    UILabel *_nameLabel;
}

@property (nonatomic) double activitySheetWidth; // @synthesize activitySheetWidth=_activitySheetWidth;
@property (nonatomic) long long cellState; // @synthesize cellState=_cellState;
@property (strong, nonatomic) NSLayoutConstraint *cellWidthConstraint; // @synthesize cellWidthConstraint=_cellWidthConstraint;
@property (strong, nonatomic) NSLayoutConstraint *chickletToTitleSpacingConstraint; // @synthesize chickletToTitleSpacingConstraint=_chickletToTitleSpacingConstraint;
@property (strong, nonatomic) SFCircleProgressView *circleProgressView; // @synthesize circleProgressView=_circleProgressView;
@property (nonatomic) BOOL darkStyleOnLegacyApp; // @synthesize darkStyleOnLegacyApp=_darkStyleOnLegacyApp;
@property (weak, nonatomic) NSObject<SFPersonCollectionViewCellDelegate> *delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) UIColor *fadedSecondLabelColor; // @synthesize fadedSecondLabelColor=_fadedSecondLabelColor;
@property (strong, nonatomic) SFPersonImageView *imageView; // @synthesize imageView=_imageView;
@property (strong, nonatomic) UIImpactFeedbackGenerator *impactHaptic; // @synthesize impactHaptic=_impactHaptic;
@property (strong, nonatomic) UILabel *labelForPositioning; // @synthesize labelForPositioning=_labelForPositioning;
@property (strong, nonatomic) NSArray *largeTextConstraints; // @synthesize largeTextConstraints=_largeTextConstraints;
@property (strong, nonatomic) NSLayoutConstraint *largeTextNameCenterYConstraint; // @synthesize largeTextNameCenterYConstraint=_largeTextNameCenterYConstraint;
@property (strong, nonatomic) NSLayoutConstraint *nameFirstBaselineConstraint; // @synthesize nameFirstBaselineConstraint=_nameFirstBaselineConstraint;
@property (strong, nonatomic) UILabel *nameLabel; // @synthesize nameLabel=_nameLabel;
@property (strong, nonatomic) UINotificationFeedbackGenerator *notificationHaptic; // @synthesize notificationHaptic=_notificationHaptic;
@property (strong, nonatomic) SFAirDropNode *person; // @synthesize person=_person;
@property (strong, nonatomic) NSProgress *progress; // @synthesize progress=_progress;
@property (strong, nonatomic) NSArray *progressKeyPaths; // @synthesize progressKeyPaths=_progressKeyPaths;
@property (strong, nonatomic) id progressToken; // @synthesize progressToken=_progressToken;
@property (strong, nonatomic) NSArray *regularConstraints; // @synthesize regularConstraints=_regularConstraints;
@property (strong, nonatomic) UILabel *secondLabel; // @synthesize secondLabel=_secondLabel;
@property (strong, nonatomic) NSLayoutConstraint *secondLabelFBConstraint; // @synthesize secondLabelFBConstraint=_secondLabelFBConstraint;
@property (strong, nonatomic) NSArray *secondLabelVisibleConstraintsArray; // @synthesize secondLabelVisibleConstraintsArray=_secondLabelVisibleConstraintsArray;
@property (strong, nonatomic) UISelectionFeedbackGenerator *selectionHaptic; // @synthesize selectionHaptic=_selectionHaptic;
@property (strong, nonatomic) NSString *sessionID; // @synthesize sessionID=_sessionID;
@property (nonatomic) BOOL stateBeingRestored; // @synthesize stateBeingRestored=_stateBeingRestored;

+ (struct CGSize)_cachedPreferredItemSizeForString:(id)arg1 viewWidth:(double)arg2 sizeCategory:(id)arg3;
+ (struct CGSize)_cachedPreferredItemSizeForViewWidth:(double)arg1 sizeCategory:(id)arg2;
- (void).cxx_destruct;
- (void)_updateForCurrentSizeCategory;
- (void)addObserverOfValuesForKeyPaths:(id)arg1 ofObject:(id)arg2;
- (struct CGSize)calculatedContentSizeForSheetWidth:(double)arg1 sizeCategory:(id)arg2;
- (void)deactivateHaptics;
- (void)dealloc;
- (void)fireHapticsForState:(long long)arg1;
- (void)handleKVOUpdateForPerson:(id)arg1 keyPath:(id)arg2;
- (void)handleKVOUpdateForProgress:(id)arg1 keyPath:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)prepareForReuse;
- (void)prepareHaptics;
- (void)prepareHapticsPreWarm:(BOOL)arg1;
- (void)removeObserverOfValuesForKeyPaths:(id)arg1 ofObject:(id)arg2;
- (void)restoreCellStateFromFinalTransferState:(long long)arg1;
- (void)setCellState:(long long)arg1 animated:(BOOL)arg2 silent:(BOOL)arg3;
- (void)setSecondLabelText:(id)arg1 withTextColor:(id)arg2 animated:(BOOL)arg3 completion:(CDUnknownBlockType)arg4;
- (void)setSelected:(BOOL)arg1;
- (void)setupConstraints;
- (void)traitCollectionDidChange:(id)arg1;
- (void)triggerKVOForKeyPaths:(id)arg1 ofObject:(id)arg2;
- (void)updateNameLabel;
- (void)updatePersonIconView;
- (void)userDidCancel;
- (void)userDidSelect;

@end

