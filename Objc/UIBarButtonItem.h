//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIBarItem.h>

#import <UIKitCore/NSCoding-Protocol.h>

@class NSArray, NSDictionary, NSSet, NSString, UIAction, UIBarButtonItemGroup, UIColor, UIImage, UILayoutGuide, UIMenu, UINavigationItem, UIToolbarButton, UIView, _UIBarButtonItemAppearanceStorage;
@protocol _UIBarButtonItemViewOwner;

@interface UIBarButtonItem : UIBarItem <NSCoding>
{
    NSString *_title;
    NSSet *_possibleTitles;
    SEL _action;
    id _target;
    UIImage *_image;
    UIImage *_landscapeImagePhone;
    struct UIEdgeInsets _imageInsets;
    struct UIEdgeInsets _landscapeImagePhoneInsets;
    double _width;
    UIView *_view;
    _UIBarButtonItemAppearanceStorage *_appearanceStorage;
    struct {
        unsigned int enabled:1;
        unsigned int style:3;
        unsigned int isSystemItem:1;
        unsigned int systemItem:7;
        unsigned int viewIsCustom:1;
        unsigned int isMinibarView:1;
        unsigned int disableAutosizing:1;
        unsigned int selected:1;
        unsigned int menuIsPrimary:2;
        unsigned int imageHasEffects:1;
        unsigned int actsAsFakeBackButton:1;
        unsigned int springLoaded:1;
        unsigned int showsChevron:1;
        unsigned int wantsThreeUp:1;
    } _barButtonItemFlags;
    NSArray *_gestureRecognizers;
    NSArray *_interactions;
    BOOL _flexible;
    BOOL __viewWantsLetterpressImage;
    BOOL __needsViewUpdateForLetterpressImage;
    BOOL _groupRepresentative;
    BOOL __showsBackButtonIndicator;
    BOOL __hidden;
    double _minimumWidth;
    double _maximumWidth;
    NSSet *_possibleSystemItems;
    NSDictionary *_stylesForSizingTitles;
    CDUnknownBlockType _secondaryActionsProvider;
    UIAction *_primaryAction;
    UIMenu *_menu;
    UIBarButtonItemGroup *_buttonGroup;
    UINavigationItem *__owningNavigationItem;
    UIBarButtonItemGroup *__owningButtonGroup;
    id<_UIBarButtonItemViewOwner> __viewOwner;
    CDUnknownBlockType __autoValidationHandler;
    UILayoutGuide *__popoverLayoutGuide;
    NSArray *__backButtonAlternateTitles;
    double __toolbarCharge;
    UIBarButtonItem *__itemVariation;
    struct UIEdgeInsets _additionalSelectionInsets;
}

@property (nonatomic, getter=_actsAsFakeBackButton, setter=_setActsAsFakeBackButton:) BOOL _actsAsFakeBackButton;
@property (nonatomic, setter=_setAdditionalSelectionInsets:) struct UIEdgeInsets _additionalSelectionInsets; // @synthesize _additionalSelectionInsets;
@property (copy, nonatomic, setter=_setAutoValidationHandler:) CDUnknownBlockType _autoValidationHandler; // @synthesize _autoValidationHandler=__autoValidationHandler;
@property (copy, nonatomic, setter=_setBackButtonAlternateTitles:) NSArray *_backButtonAlternateTitles; // @synthesize _backButtonAlternateTitles=__backButtonAlternateTitles;
@property (readonly, nonatomic) UIView *_configuredFloatableView; // @dynamic _configuredFloatableView;
@property (nonatomic, setter=_setFlexible:) BOOL _flexible; // @synthesize _flexible;
@property (readonly, nonatomic, getter=_isFloatable) BOOL _floatable; // @dynamic _floatable;
@property (readonly, nonatomic, getter=_isFloating) BOOL _floating; // @dynamic _floating;
@property (copy, nonatomic, setter=_setGestureRecognizers:) NSArray *_gestureRecognizers; // @synthesize _gestureRecognizers;
@property (nonatomic, setter=_setHidden:) BOOL _hidden; // @synthesize _hidden=__hidden;
@property (nonatomic, setter=_setImageHasEffects:) BOOL _imageHasEffects;
@property (copy, nonatomic, setter=_setInteractions:) NSArray *_interactions; // @synthesize _interactions;
@property (strong, nonatomic, setter=_setItemVariation:) UIBarButtonItem *_itemVariation; // @synthesize _itemVariation=__itemVariation;
@property (copy, nonatomic, setter=_setLargeContentSizeTitle:) NSString *_largeContentSizeTitle;
@property (nonatomic, setter=_setMaximumWidth:) double _maximumWidth; // @synthesize _maximumWidth;
@property (readonly, nonatomic) BOOL _menuIsPrimary;
@property (nonatomic, setter=_setMinimumWidth:) double _minimumWidth; // @synthesize _minimumWidth;
@property (readonly, nonatomic) BOOL _needsViewUpdateForLetterpressImage; // @synthesize _needsViewUpdateForLetterpressImage=__needsViewUpdateForLetterpressImage;
@property (weak, nonatomic, setter=_setOwningButtonGroup:) UIBarButtonItemGroup *_owningButtonGroup; // @synthesize _owningButtonGroup=__owningButtonGroup;
@property (weak, nonatomic, setter=_setOwningNavigationItem:) UINavigationItem *_owningNavigationItem; // @synthesize _owningNavigationItem=__owningNavigationItem;
@property (strong, nonatomic, setter=_setPopoverLayoutGuide:) UILayoutGuide *_popoverLayoutGuide; // @synthesize _popoverLayoutGuide=__popoverLayoutGuide;
@property (copy, nonatomic, setter=_setPossibleItemVariations:) NSSet *_possibleItemVariations;
@property (readonly, nonatomic) struct CGRect _rectForPresenting;
@property (readonly, nonatomic) UIView *_referenceView; // @dynamic _referenceView;
@property (readonly, copy, nonatomic) NSString *_resolvedLargeContentSizeTitle;
@property (copy, nonatomic, setter=_setSecondaryActionsProvider:) CDUnknownBlockType _secondaryActionsProvider; // @synthesize _secondaryActionsProvider;
@property (nonatomic, setter=_setShowsBackButtonIndicator:) BOOL _showsBackButtonIndicator; // @synthesize _showsBackButtonIndicator=__showsBackButtonIndicator;
@property (nonatomic, getter=_showsChevron, setter=_setShowsChevron:) BOOL _showsChevron;
@property (copy, nonatomic, setter=_setStylesForSizingTitles:) NSDictionary *_stylesForSizingTitles; // @synthesize _stylesForSizingTitles;
@property (readonly, nonatomic) UIToolbarButton *_toolbarButton;
@property (nonatomic, setter=_setToolbarCharge:) double _toolbarCharge; // @synthesize _toolbarCharge=__toolbarCharge;
@property (readonly, nonatomic) UIView *_viewForPresenting;
@property (weak, nonatomic, setter=_setViewOwner:) id<_UIBarButtonItemViewOwner> _viewOwner; // @synthesize _viewOwner=__viewOwner;
@property (readonly, nonatomic) BOOL _viewWantsLetterpressImage; // @synthesize _viewWantsLetterpressImage=__viewWantsLetterpressImage;
@property (nonatomic, getter=_wantsThreeUp, setter=_setWantsThreeUp:) BOOL _wantsThreeUp;
@property (nonatomic, getter=_width, setter=_setWidth:) double _width;
@property (nonatomic) SEL action; // @synthesize action=_action;
@property (readonly, weak, nonatomic) UIBarButtonItemGroup *buttonGroup; // @synthesize buttonGroup=_buttonGroup;
@property (strong, nonatomic) UIView *customView;
@property (nonatomic, getter=isEnabled) BOOL enabled;
@property (readonly, nonatomic) BOOL groupRepresentative; // @synthesize groupRepresentative=_groupRepresentative;
@property (readonly, nonatomic) BOOL isCustomViewItem;
@property (nonatomic) BOOL isMinibarView;
@property (readonly, nonatomic) BOOL isSpaceItem;
@property (readonly, nonatomic) BOOL isSystemItem;
@property (copy, nonatomic) UIMenu *menu; // @synthesize menu=_menu;
@property (copy, nonatomic, getter=_possibleSystemItems, setter=_setPossibleSystemItems:) NSSet *possibleSystemItems; // @synthesize possibleSystemItems=_possibleSystemItems;
@property (copy, nonatomic) NSSet *possibleTitles;
@property (copy, nonatomic) UIAction *primaryAction; // @synthesize primaryAction=_primaryAction;
@property (copy, nonatomic) UIMenu *secondaryActions;
@property (nonatomic) BOOL secondaryActionsArePrimary;
@property (nonatomic) BOOL selected;
@property (nonatomic) long long style;
@property (readonly, nonatomic) long long systemItem;
@property (weak, nonatomic) id target; // @synthesize target=_target;
@property (strong, nonatomic) UIColor *tintColor;
@property (strong, nonatomic) UIView *view;
@property (nonatomic) double width;

+ (id)_appearanceBlindViewClasses;
+ (void)_getSystemItemStyle:(long long *)arg1 title:(id *)arg2 image:(id *)arg3 selectedImage:(id *)arg4 action:(SEL *)arg5 forBarStyle:(long long)arg6 landscape:(BOOL)arg7 alwaysBordered:(BOOL)arg8 usingSystemItem:(long long)arg9 usingItemStyle:(long long)arg10;
+ (Class)classForNavigationButton;
+ (Class)classForToolbarButton;
+ (id)fixedSpaceItemOfWidth:(double)arg1;
+ (id)flexibleSpaceItem;
- (void).cxx_destruct;
- (id)_appearanceStorage;
- (void)_applyPositionAdjustmentToSegmentedControl:(id)arg1;
- (id)_backgroundImageForState:(unsigned long long)arg1 compact:(BOOL)arg2 type:(long long)arg3;
- (void)_connectInterfaceBuilderEventConnection:(id)arg1;
- (void)_executeValidationHandler;
- (id)_foregroundColorForLetterpressWithView:(id)arg1;
- (void)_getNavBarEdgeSizeAdjust:(struct CGSize *)arg1 imageInsets:(struct UIEdgeInsets *)arg2 landscape:(BOOL)arg3;
- (void)_getSystemItemStyle:(long long *)arg1 title:(id *)arg2 image:(id *)arg3 selectedImage:(id *)arg4 action:(SEL *)arg5 forBarStyle:(long long)arg6 landscape:(BOOL)arg7 alwaysBordered:(BOOL)arg8;
- (void)_getToolbarSystemItemEdgeInsetsWithImageInsets:(struct UIEdgeInsets *)arg1 forBarStyle:(long long)arg2 landscape:(BOOL)arg3 alwaysBordered:(BOOL)arg4;
- (id)_imageForState:(unsigned long long)arg1 compact:(BOOL)arg2 type:(long long)arg3;
- (BOOL)_isImageBarButtonItem;
- (id)_itemForPresenting;
- (double)_leftImagePaddingForEdgeMarginInNavBar;
- (id)_miniImage;
- (struct UIEdgeInsets)_miniImageInsets;
- (BOOL)_resizesBackgroundImage;
- (double)_rightImagePaddingForEdgeMarginInNavBar;
- (void)_sendAction:(id)arg1 withEvent:(id)arg2;
- (void)_setButtonGroup:(id)arg1 isRepresentative:(BOOL)arg2;
- (void)_setEnclosingBar:(id)arg1 onItem:(id)arg2;
- (void)_setMiniImage:(id)arg1;
- (void)_setMiniImageInsets:(struct UIEdgeInsets)arg1;
- (void)_setSystemItem:(long long)arg1;
- (void)_setToolbarChange:(double)arg1;
- (void)_triggerActionForEvent:(id)arg1;
- (void)_updateView;
- (id)backButtonBackgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2;
- (double)backButtonBackgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1;
- (struct UIOffset)backButtonTitlePositionAdjustmentForBarMetrics:(long long)arg1;
- (id)backgroundImageForState:(unsigned long long)arg1 barMetrics:(long long)arg2;
- (id)backgroundImageForState:(unsigned long long)arg1 style:(long long)arg2 barMetrics:(long long)arg3;
- (double)backgroundVerticalPositionAdjustmentForBarMetrics:(long long)arg1;
- (id)createViewForNavigationItem:(id)arg1;
- (id)createViewForToolbar:(id)arg1;
- (void)dealloc;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (BOOL)hasImage;
- (BOOL)hasTitle;
- (unsigned long long)hash;
- (id)image;
- (struct UIEdgeInsets)imageInsets;
- (id)init;
- (id)initWithBarButtonSystemItem:(long long)arg1 menu:(id)arg2;
- (id)initWithBarButtonSystemItem:(long long)arg1 primaryAction:(id)arg2;
- (id)initWithBarButtonSystemItem:(long long)arg1 target:(id)arg2 action:(SEL)arg3;
- (id)initWithCoder:(id)arg1;
- (id)initWithCustomView:(id)arg1;
- (id)initWithImage:(id)arg1 landscapeImagePhone:(id)arg2 style:(long long)arg3 target:(id)arg4 action:(SEL)arg5;
- (id)initWithImage:(id)arg1 menu:(id)arg2;
- (id)initWithImage:(id)arg1 style:(long long)arg2 target:(id)arg3 action:(SEL)arg4;
- (id)initWithPrimaryAction:(id)arg1;
- (id)initWithTitle:(id)arg1 menu:(id)arg2;
- (id)initWithTitle:(id)arg1 style:(long long)arg2 target:(id)arg3 action:(SEL)arg4;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isSpringLoaded;
- (id)itemVariation;
- (id)landscapeImagePhone;
- (struct UIEdgeInsets)landscapeImagePhoneInsets;
- (id)largeContentSizeImage;
- (struct UIEdgeInsets)largeContentSizeImageInsets;
- (id)nextResponder;
- (id)resolvedTitle;
- (void)setBackButtonBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)setBackButtonBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)setBackButtonTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 barMetrics:(long long)arg3;
- (void)setBackgroundImage:(id)arg1 forState:(unsigned long long)arg2 style:(long long)arg3 barMetrics:(long long)arg4;
- (void)setBackgroundVerticalPositionAdjustment:(double)arg1 forBarMetrics:(long long)arg2;
- (void)setImage:(id)arg1;
- (void)setImageInsets:(struct UIEdgeInsets)arg1;
- (void)setLandscapeImagePhone:(id)arg1;
- (void)setLandscapeImagePhoneInsets:(struct UIEdgeInsets)arg1;
- (void)setLargeContentSizeImage:(id)arg1;
- (void)setLargeContentSizeImageInsets:(struct UIEdgeInsets)arg1;
- (void)setSpringLoaded:(BOOL)arg1;
- (void)setTitle:(id)arg1;
- (void)setTitlePositionAdjustment:(struct UIOffset)arg1 forBarMetrics:(long long)arg2;
- (void)setTitleTextAttributes:(id)arg1 forState:(unsigned long long)arg2;
- (id)title;
- (struct UIOffset)titlePositionAdjustmentForBarMetrics:(long long)arg1;
- (id)titleTextAttributesForState:(unsigned long long)arg1;
- (id)window;

@end

