//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIViewElement.h>

@class IKDOMElement, IKViewElementStyle, NSString, SKUIBuyButtonDescriptor, SKUIImageViewElement, SKUIStoreIdentifier, SKUIViewElementText;

@interface SKUIButtonViewElement : SKUIViewElement
{
    NSString *_badgeResourceName;
    BOOL _bigHitButton;
    double _bigHitSize;
    SKUIViewElementText *_buttonText;
    long long _buttonViewType;
    NSString *_bundleIdentifier;
    SKUIBuyButtonDescriptor *_buyButtonDescriptor;
    NSString *_confirmationText;
    long long _dataPlaybackId;
    BOOL _disabledButSelectable;
    BOOL _enabled;
    long long _itemIdentifier;
    NSString *_nonToggledText;
    BOOL _selected;
    BOOL _showOnDemand;
    SKUIStoreIdentifier *_storeIdentifier;
    BOOL _toggled;
    NSString *_toggledText;
    NSString *_toggleItemIdentfier;
    NSString *_variantIdentifier;
    IKDOMElement *_xml;
    BOOL _autoIncrementCount;
    BOOL _suppressCloudRestore;
    long long _buttonViewSubType;
    NSString *_playItemIdentifier;
    NSString *_sizeVariant;
    NSString *_toggleItemIdentifier;
}

@property (readonly, nonatomic) SKUIImageViewElement *additionalButtonImage;
@property (readonly, nonatomic) BOOL autoIncrementCount; // @synthesize autoIncrementCount=_autoIncrementCount;
@property (readonly, nonatomic) NSString *badgeResourceName; // @synthesize badgeResourceName=_badgeResourceName;
@property (readonly, nonatomic, getter=isBigHitButton) BOOL bigHitButton; // @synthesize bigHitButton=_bigHitButton;
@property (readonly, nonatomic) double bigHitSize; // @synthesize bigHitSize=_bigHitSize;
@property (readonly, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (readonly, nonatomic) SKUIImageViewElement *buttonImage;
@property (readonly, nonatomic) SKUIViewElementText *buttonText;
@property (readonly, nonatomic) IKViewElementStyle *buttonTitleStyle;
@property (readonly, nonatomic) long long buttonViewSubType; // @synthesize buttonViewSubType=_buttonViewSubType;
@property (readonly, nonatomic) long long buttonViewType; // @synthesize buttonViewType=_buttonViewType;
@property (strong, nonatomic) SKUIBuyButtonDescriptor *buyButtonDescriptor; // @synthesize buyButtonDescriptor=_buyButtonDescriptor;
@property (readonly, nonatomic) NSString *confirmationText; // @synthesize confirmationText=_confirmationText;
@property (readonly, nonatomic) long long dataPlaybackId; // @synthesize dataPlaybackId=_dataPlaybackId;
@property (readonly, nonatomic, getter=isDisabledButSelectable) BOOL disabledButSelectable; // @synthesize disabledButSelectable=_disabledButSelectable;
@property (readonly, nonatomic) long long itemIdentifier; // @synthesize itemIdentifier=_itemIdentifier;
@property (readonly, nonatomic) NSString *nonToggledText; // @synthesize nonToggledText=_nonToggledText;
@property (readonly, nonatomic) NSString *playItemIdentifier; // @synthesize playItemIdentifier=_playItemIdentifier;
@property (readonly, nonatomic, getter=isSelected) BOOL selected; // @synthesize selected=_selected;
@property (readonly, nonatomic) BOOL showOnDemand; // @synthesize showOnDemand=_showOnDemand;
@property (readonly, nonatomic) NSString *sizeVariant; // @synthesize sizeVariant=_sizeVariant;
@property (readonly, nonatomic) SKUIStoreIdentifier *storeIdentifier; // @synthesize storeIdentifier=_storeIdentifier;
@property (readonly, nonatomic) BOOL suppressCloudRestore; // @synthesize suppressCloudRestore=_suppressCloudRestore;
@property (readonly, nonatomic) NSString *toggleItemIdentifier; // @synthesize toggleItemIdentifier=_toggleItemIdentifier;
@property (nonatomic, getter=isToggled) BOOL toggled; // @synthesize toggled=_toggled;
@property (readonly, nonatomic) NSString *toggledText; // @synthesize toggledText=_toggledText;
@property (readonly, nonatomic) NSString *variantIdentifier; // @synthesize variantIdentifier=_variantIdentifier;

- (void).cxx_destruct;
- (id)_parseButtonText;
- (id)applyUpdatesWithElement:(id)arg1;
- (void)dealloc;
- (id)description;
- (unsigned long long)elementType;
- (id)initWithDOMElement:(id)arg1 parent:(id)arg2 elementFactory:(id)arg3;
- (BOOL)isEnabled;
- (long long)pageComponentType;
- (id)personalizationLibraryItems;

@end

