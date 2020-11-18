//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/PXObservable.h>

#import <PhotosUICore/PXMutableGadgetSectionHeader-Protocol.h>

@class NSString, PXGadgetSpec, UIFont, UIImage;

@interface PXGadgetSectionHeader : PXObservable <PXMutableGadgetSectionHeader>
{
    BOOL _isFirstSection;
    BOOL _shouldShowDividerOnFirstSection;
    unsigned long long _headerStyle;
    NSString *_headerTitle;
    NSString *_customButtonTitle;
    unsigned long long _buttonType;
    PXGadgetSpec *_gadgetSpec;
    CDUnknownBlockType _accessoryButtonPressed;
    struct UIEdgeInsets _edgeInsets;
}

@property (copy, nonatomic) CDUnknownBlockType accessoryButtonPressed; // @synthesize accessoryButtonPressed=_accessoryButtonPressed;
@property (readonly, nonatomic) UIFont *buttonFont;
@property (readonly, nonatomic) UIImage *buttonImage;
@property (readonly, nonatomic) NSString *buttonTitle;
@property (nonatomic) unsigned long long buttonType; // @synthesize buttonType=_buttonType;
@property (copy, nonatomic) NSString *customButtonTitle; // @synthesize customButtonTitle=_customButtonTitle;
@property (readonly, nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property (strong, nonatomic) PXGadgetSpec *gadgetSpec; // @synthesize gadgetSpec=_gadgetSpec;
@property (readonly, nonatomic) UIFont *headerFont;
@property (readonly, nonatomic) double headerHeight;
@property (nonatomic) unsigned long long headerStyle; // @synthesize headerStyle=_headerStyle;
@property (readonly, nonatomic) NSString *headerTitle; // @synthesize headerTitle=_headerTitle;
@property (nonatomic) BOOL isFirstSection; // @synthesize isFirstSection=_isFirstSection;
@property (readonly, nonatomic) BOOL shouldShowAccessoryButton;
@property (readonly, nonatomic) BOOL shouldShowDivider;
@property (nonatomic) BOOL shouldShowDividerOnFirstSection; // @synthesize shouldShowDividerOnFirstSection=_shouldShowDividerOnFirstSection;
@property (readonly, nonatomic) double titleBottomSpacing;
@property (readonly, nonatomic) double titleHeight;
@property (readonly, nonatomic) double titleTopSpacing;

+ (id)_buttonImageNameForButtonType:(unsigned long long)arg1;
+ (id)buttonFontForButtonType:(unsigned long long)arg1;
+ (id)buttonImageForButtonType:(unsigned long long)arg1;
+ (id)titleFontForHeaderStyle:(unsigned long long)arg1;
- (void).cxx_destruct;
- (void)_configureWithGadget:(id)arg1;
- (id)initWithConfigurationBlock:(CDUnknownBlockType)arg1;
- (id)initWithGadget:(id)arg1;
- (void)performChanges:(CDUnknownBlockType)arg1;
- (void)performChangesWithGadget:(id)arg1 additionalChanges:(CDUnknownBlockType)arg2;
- (void)setHeaderTitle:(id)arg1;

@end
