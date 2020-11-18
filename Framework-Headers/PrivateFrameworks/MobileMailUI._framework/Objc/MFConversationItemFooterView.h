//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

#import <MobileMailUI/_UICursorInteractionDelegate-Protocol.h>

@class EMCachingContactStore, MFMessageDisplayMetrics, NSString, UIButton, UIVisualEffectView;
@protocol MFMessageFooterViewDelegate;

@interface MFConversationItemFooterView : UIView <_UICursorInteractionDelegate>
{
    BOOL _allowsCursorSnapping;
    UIVisualEffectView *_backgroundView;
    UIButton *_revealActionsButton;
    id<MFMessageFooterViewDelegate> _delegate;
    MFMessageDisplayMetrics *_displayMetrics;
    NSString *_senderName;
    double _defaultRevealActionButtonOriginY;
    double _defaultSeeMoreButtonOriginY;
    EMCachingContactStore *_contactStore;
    double _currentYOffset;
    UIButton *_seeMoreButton;
}

@property (nonatomic) BOOL allowsCursorSnapping; // @synthesize allowsCursorSnapping=_allowsCursorSnapping;
@property (strong, nonatomic) UIVisualEffectView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property (strong, nonatomic) EMCachingContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property (nonatomic) double currentYOffset; // @synthesize currentYOffset=_currentYOffset;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) double defaultRevealActionButtonOriginY; // @synthesize defaultRevealActionButtonOriginY=_defaultRevealActionButtonOriginY;
@property (nonatomic) double defaultSeeMoreButtonOriginY; // @synthesize defaultSeeMoreButtonOriginY=_defaultSeeMoreButtonOriginY;
@property (weak, nonatomic) id<MFMessageFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) MFMessageDisplayMetrics *displayMetrics; // @synthesize displayMetrics=_displayMetrics;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIButton *revealActionsButton; // @synthesize revealActionsButton=_revealActionsButton;
@property (strong, nonatomic) UIButton *seeMoreButton; // @synthesize seeMoreButton=_seeMoreButton;
@property (nonatomic) double seeMoreButtonAlpha;
@property (readonly, nonatomic) double seeMoreButtonHeight;
@property (nonatomic, getter=isSeeMoreButtonHidden) BOOL seeMoreButtonHidden;
@property (copy, nonatomic) NSString *senderName; // @synthesize senderName=_senderName;
@property (readonly, nonatomic) BOOL shouldHideStickyFooterView;
@property (readonly) Class superclass;

+ (id)nameFont;
+ (id)prefixFont;
- (void).cxx_destruct;
- (void)_fontMetricCacheDidInvalidate:(id)arg1;
- (void)_updateBackgroundView;
- (void)_updateButtons;
- (void)_updateSeeMoreButton;
- (void)addTarget:(id)arg1 action:(SEL)arg2 toButton:(long long)arg3;
- (id)cursorInteraction:(id)arg1 regionForLocation:(struct CGPoint)arg2 defaultRegion:(id)arg3;
- (id)cursorInteraction:(id)arg1 styleForRegion:(id)arg2 modifiers:(long long)arg3;
- (void)hideAttribution;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutActionButtonWithBounds:(struct CGRect)arg1;
- (void)layoutMarginsDidChange;
- (void)layoutSeeMoreButton;
- (void)layoutSubviews;
- (void)moveOriginYByOffset:(double)arg1;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setBounds:(struct CGRect)arg1;
- (void)setLayoutMargins:(struct UIEdgeInsets)arg1;
- (void)showAttributionWithSenderName:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
