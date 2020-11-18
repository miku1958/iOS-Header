//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIView.h>

@class EMCachingContactStore, MFMessageDisplayMetrics, NSString, UIButton, UIVisualEffectView;
@protocol MFMessageFooterViewDelegate;

@interface MFConversationItemFooterView : UIView
{
    BOOL _shouldArchiveByDefault;
    UIVisualEffectView *_backgroundView;
    UIButton *_seeMoreButton;
    UIButton *_revealActionsButton;
    id<MFMessageFooterViewDelegate> _delegate;
    MFMessageDisplayMetrics *_displayMetrics;
    NSString *_senderName;
    double _defaultRevealActionButtonOriginY;
    double _defaultTrashButtonOriginY;
    double _defaultSeeMoreButtonOriginY;
    UIButton *_trashButton;
    EMCachingContactStore *_contactStore;
}

@property (strong, nonatomic) UIVisualEffectView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property (strong, nonatomic) EMCachingContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property (nonatomic) double defaultRevealActionButtonOriginY; // @synthesize defaultRevealActionButtonOriginY=_defaultRevealActionButtonOriginY;
@property (nonatomic) double defaultSeeMoreButtonOriginY; // @synthesize defaultSeeMoreButtonOriginY=_defaultSeeMoreButtonOriginY;
@property (nonatomic) double defaultTrashButtonOriginY; // @synthesize defaultTrashButtonOriginY=_defaultTrashButtonOriginY;
@property (weak, nonatomic) id<MFMessageFooterViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) MFMessageDisplayMetrics *displayMetrics; // @synthesize displayMetrics=_displayMetrics;
@property (strong, nonatomic) UIButton *revealActionsButton; // @synthesize revealActionsButton=_revealActionsButton;
@property (strong, nonatomic) UIButton *seeMoreButton; // @synthesize seeMoreButton=_seeMoreButton;
@property (copy, nonatomic) NSString *senderName; // @synthesize senderName=_senderName;
@property (nonatomic) BOOL shouldArchiveByDefault; // @synthesize shouldArchiveByDefault=_shouldArchiveByDefault;
@property (strong, nonatomic) UIButton *trashButton; // @synthesize trashButton=_trashButton;

+ (id)nameFont;
+ (id)prefixFont;
- (void).cxx_destruct;
- (void)_fontMetricCacheDidInvalidate:(id)arg1;
- (void)_updateButtonsForTraitCollection:(id)arg1;
- (void)addTarget:(id)arg1 action:(SEL)arg2 toButton:(long long)arg3;
- (void)hideAttribution;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutActionButtonWithBounds:(struct CGRect)arg1;
- (void)layoutSeeMoreButton;
- (void)layoutSubviews;
- (void)layoutTrashButtonWithBounds:(struct CGRect)arg1;
- (void)moveOriginYByOffset:(double)arg1;
- (BOOL)pointInside:(struct CGPoint)arg1 withEvent:(id)arg2;
- (void)setBounds:(struct CGRect)arg1;
- (void)setLayoutMargins:(struct UIEdgeInsets)arg1;
- (void)showAttributionWithSenderName:(id)arg1;
- (void)traitCollectionDidChange:(id)arg1;

@end
