//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIControl.h>

#import <UIKit/UIClickInteractionDelegate-Protocol.h>
#import <UIKit/_UIInteractiveHighlighting-Protocol.h>

@class NSArray, NSString, UIClickInteraction, UIColor, UIImage, UIImageView, UIView, UIVisualEffectView;

@interface UICoverSheetButton : UIControl <UIClickInteractionDelegate, _UIInteractiveHighlighting>
{
    UIView *_containerView;
    UIImageView *_contentView;
    UIVisualEffectView *_backgroundEffectView;
    NSArray *_backgroundEffects;
    NSArray *_selectedBackgroundEffects;
    UIView *_backgroundHighlightView;
    UIClickInteraction *_clickInteraction;
    BOOL _interactive;
    double _interactiveHighlightMagnitude;
    BOOL _didActivateDuringInteraction;
    double _maxForceDuringInteraction;
    BOOL _pronounced;
    BOOL _prefersDarkUserInterfaceStyle;
    UIImage *_image;
    UIImage *_selectedImage;
    UIColor *_selectedTintColor;
    NSString *_localizedAccessoryTitle;
    NSString *_statisticsIdentifier;
    struct UIEdgeInsets _edgeInsets;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) struct UIEdgeInsets edgeInsets; // @synthesize edgeInsets=_edgeInsets;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) UIImage *image; // @synthesize image=_image;
@property (nonatomic, getter=isLatching) BOOL latching;
@property (copy, nonatomic) NSString *localizedAccessoryTitle; // @synthesize localizedAccessoryTitle=_localizedAccessoryTitle;
@property (nonatomic) BOOL prefersDarkUserInterfaceStyle; // @synthesize prefersDarkUserInterfaceStyle=_prefersDarkUserInterfaceStyle;
@property (nonatomic, getter=isPronounced) BOOL pronounced; // @synthesize pronounced=_pronounced;
@property (strong, nonatomic) UIImage *selectedImage; // @synthesize selectedImage=_selectedImage;
@property (strong, nonatomic) UIColor *selectedTintColor; // @synthesize selectedTintColor=_selectedTintColor;
@property (copy, nonatomic) NSString *statisticsIdentifier; // @synthesize statisticsIdentifier=_statisticsIdentifier;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_backgroundEffectsWithBrightness:(double)arg1;
- (id)_firstActivationDurationStat;
- (void)_highlightForInteraction:(id)arg1 fractionComplete:(double)arg2 ended:(BOOL)arg3;
- (id)_interactionCountStatWithActivation:(BOOL)arg1;
- (id)_interactionDurationStat;
- (id)_maxForceStatWithActivation:(BOOL)arg1;
- (void)clickInteraction:(id)arg1 didObserveForce:(double)arg2;
- (void)clickInteractionDidBegin:(id)arg1;
- (void)clickInteractionDidEnd:(id)arg1;
- (BOOL)clickInteractionShouldInvokeAction:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutIfNeededAnimated;
- (void)layoutSubviews;
- (void)setSelected:(BOOL)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;

@end

