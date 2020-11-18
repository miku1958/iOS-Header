//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <Widgets/UITextViewDelegate-Protocol.h>

@class NSMutableDictionary, NSString, UIFont, WGNewWidgetsButton, WGShortLookStyleButton, _UILegibilitySettings;
@protocol WGWidgetListFooterViewDelegate;

@interface WGWidgetListFooterView : UIView <UITextViewDelegate>
{
    WGShortLookStyleButton *_editButton;
    WGNewWidgetsButton *_newWidgetsButton;
    NSMutableDictionary *_widgetIDsToAttributionViews;
    UIFont *_referenceFont;
    long long _layoutMode;
    _UILegibilitySettings *_legibilitySettings;
    id<WGWidgetListFooterViewDelegate> _delegate;
}

@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<WGWidgetListFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSString *groupName; // @dynamic groupName;
@property (readonly) unsigned long long hash;
@property (nonatomic) long long layoutMode; // @synthesize layoutMode=_layoutMode;
@property (strong, nonatomic) _UILegibilitySettings *legibilitySettings; // @synthesize legibilitySettings=_legibilitySettings;
@property (nonatomic) BOOL shouldBlurContent; // @dynamic shouldBlurContent;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (void)_availableWidgetsUpdated:(id)arg1;
- (id)_referenceFont;
- (void)_updateForContentCategorySizeDidChange;
- (void)addTarget:(id)arg1 action:(SEL)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)invalidateSubviewGeometery;
- (void)layoutSubviews;
- (void)setVisibleWidgetsIDs:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (BOOL)textView:(id)arg1 shouldInteractWithTextAttachment:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (BOOL)textView:(id)arg1 shouldInteractWithURL:(id)arg2 inRange:(struct _NSRange)arg3 interaction:(long long)arg4;
- (void)traitCollectionDidChange:(id)arg1;

@end
