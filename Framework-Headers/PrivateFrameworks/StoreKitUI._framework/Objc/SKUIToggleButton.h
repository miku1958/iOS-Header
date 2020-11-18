//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/SKUIStyledButton.h>

#import <StoreKitUI/SKUIToggleItemStateCenterObserver-Protocol.h>

@class NSString, SKUIAttributedStringLayout, SKUIButtonViewElement, UIImage;
@protocol SKUIToggleButtonDelegate;

@interface SKUIToggleButton : SKUIStyledButton <SKUIToggleItemStateCenterObserver>
{
    BOOL _autoIncrement;
    long long _autoIncrementCount;
    long long _count;
    SKUIButtonViewElement *_element;
    id<SKUIToggleButtonDelegate> _delegate;
    NSString *_itemIdentifier;
    SKUIAttributedStringLayout *_nonToggledLayout;
    NSString *_titleToggleString;
    SKUIAttributedStringLayout *_toggledLayout;
    BOOL _toggled;
    NSString *_toggleItemIdentifier;
    NSString *_nonToggledTitle;
    NSString *_toggledTitle;
    UIImage *_nonToggledImage;
    UIImage *_toggledImage;
    long long _toggleButtonType;
}

@property (nonatomic) BOOL autoIncrement; // @synthesize autoIncrement=_autoIncrement;
@property (nonatomic) long long autoIncrementCount; // @synthesize autoIncrementCount=_autoIncrementCount;
@property (nonatomic) long long count; // @synthesize count=_count;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<SKUIToggleButtonDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (weak, nonatomic) SKUIButtonViewElement *element; // @synthesize element=_element;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIImage *nonToggledImage; // @synthesize nonToggledImage=_nonToggledImage;
@property (strong, nonatomic) NSString *nonToggledTitle; // @synthesize nonToggledTitle=_nonToggledTitle;
@property (readonly) Class superclass;
@property (nonatomic) long long toggleButtonType; // @synthesize toggleButtonType=_toggleButtonType;
@property (strong, nonatomic) NSString *toggleItemIdentifier; // @synthesize toggleItemIdentifier=_toggleItemIdentifier;
@property (nonatomic, getter=isToggled) BOOL toggled; // @synthesize toggled=_toggled;
@property (strong, nonatomic) UIImage *toggledImage; // @synthesize toggledImage=_toggledImage;
@property (strong, nonatomic) NSString *toggledTitle; // @synthesize toggledTitle=_toggledTitle;

- (void).cxx_destruct;
- (id)_layoutForString:(id)arg1;
- (id)_nonToggledLayout;
- (void)_sendDidAnimate;
- (void)_sendWillAnimate;
- (void)_showToggleState:(BOOL)arg1;
- (id)_titleAttributes;
- (id)_toggledLayout;
- (void)dealloc;
- (id)init;
- (void)itemStateCenter:(id)arg1 itemStateChanged:(id)arg2;
- (void)setButtonTitleText:(id)arg1;
- (void)setToggled:(BOOL)arg1 animated:(BOOL)arg2;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)touchesEnded:(id)arg1 withEvent:(id)arg2;

@end

