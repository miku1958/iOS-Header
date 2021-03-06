//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIView.h>

#import <TextInputUI/TUIAssistantButtonBarViewDelegate-Protocol.h>
#import <TextInputUI/TUISystemInputAssistantPageViewDelegate-Protocol.h>

@class NSString, TUIAssistantButtonBarView, TUICandidateView, TUIPredictionView, TUISystemInputAssistantLayout, TUISystemInputAssistantLayoutStandard, TUISystemInputAssistantPageView, UIKBRenderConfig, UIKBVisualEffectView, UITextInputAssistantItem;
@protocol TUISystemInputAssistantViewDelegate;

@interface TUISystemInputAssistantView : UIView <TUIAssistantButtonBarViewDelegate, TUISystemInputAssistantPageViewDelegate>
{
    BOOL _buttonBarItemsExpanded;
    BOOL _needsValidation;
    int _needsValidationGuard;
    BOOL _backgroundVisible;
    BOOL _centerViewHidden;
    BOOL _showsExpandableButtonBarItems;
    BOOL _hidesExpandableButton;
    BOOL _showsButtonBarItemsInline;
    UIKBRenderConfig *_renderConfig;
    UIKBVisualEffectView *_backdropView;
    id<TUISystemInputAssistantViewDelegate> _delegate;
    TUISystemInputAssistantLayout *_layout;
    UIView *_centerView;
    double _centerViewWidth;
    UITextInputAssistantItem *_inputAssistantItem;
    UITextInputAssistantItem *_systemInputAssistantItem;
    TUIAssistantButtonBarView *_leftButtonBar;
    TUIAssistantButtonBarView *_rightButtonBar;
    TUIAssistantButtonBarView *_unifiedButtonBar;
    TUISystemInputAssistantPageView *_centerPageView;
    TUISystemInputAssistantLayoutStandard *_defaultLayout;
}

@property (strong, nonatomic) UIKBVisualEffectView *backdropView; // @synthesize backdropView=_backdropView;
@property (nonatomic) BOOL backgroundVisible; // @synthesize backgroundVisible=_backgroundVisible;
@property (readonly, nonatomic) TUICandidateView *candidateView;
@property (strong, nonatomic) TUISystemInputAssistantPageView *centerPageView; // @synthesize centerPageView=_centerPageView;
@property (strong, nonatomic) UIView *centerView; // @synthesize centerView=_centerView;
@property (nonatomic) BOOL centerViewHidden; // @synthesize centerViewHidden=_centerViewHidden;
@property (nonatomic) double centerViewWidth; // @synthesize centerViewWidth=_centerViewWidth;
@property (readonly, copy) NSString *debugDescription;
@property (strong, nonatomic) TUISystemInputAssistantLayoutStandard *defaultLayout; // @synthesize defaultLayout=_defaultLayout;
@property (weak, nonatomic) id<TUISystemInputAssistantViewDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL hidesExpandableButton; // @synthesize hidesExpandableButton=_hidesExpandableButton;
@property (strong, nonatomic) UITextInputAssistantItem *inputAssistantItem; // @synthesize inputAssistantItem=_inputAssistantItem;
@property (strong, nonatomic) TUISystemInputAssistantLayout *layout; // @synthesize layout=_layout;
@property (strong, nonatomic) TUIAssistantButtonBarView *leftButtonBar; // @synthesize leftButtonBar=_leftButtonBar;
@property (readonly, nonatomic) TUIPredictionView *predictionView;
@property (strong, nonatomic) UIKBRenderConfig *renderConfig; // @synthesize renderConfig=_renderConfig;
@property (strong, nonatomic) TUIAssistantButtonBarView *rightButtonBar; // @synthesize rightButtonBar=_rightButtonBar;
@property (nonatomic) BOOL showsButtonBarItemsInline; // @synthesize showsButtonBarItemsInline=_showsButtonBarItemsInline;
@property (nonatomic) BOOL showsExpandableButtonBarItems; // @synthesize showsExpandableButtonBarItems=_showsExpandableButtonBarItems;
@property (readonly) Class superclass;
@property (strong, nonatomic) UITextInputAssistantItem *systemInputAssistantItem; // @synthesize systemInputAssistantItem=_systemInputAssistantItem;
@property (strong, nonatomic) TUIAssistantButtonBarView *unifiedButtonBar; // @synthesize unifiedButtonBar=_unifiedButtonBar;

- (void).cxx_destruct;
- (BOOL)_areButtonBarItemsVisible;
- (id)_createUnifiedButtonBarIfNecessary;
- (id)_currentLayoutViewSet;
- (void)_didTapExpandButton:(id)arg1;
- (void)_exchangeCenterViewIfNecessaryForCompatibility;
- (id)_hostedCenterView;
- (void)_setButtonBarItemsExpanded:(BOOL)arg1 animationType:(unsigned long long)arg2;
- (void)_setRenderConfig:(id)arg1;
- (BOOL)_shouldHostCenterViewOutsidePageView;
- (BOOL)_swiftPlaygroundsWorkaroundEnabled;
- (void)_updateBarButtonGroups;
- (void)_updateExpandableButtonBarItems;
- (void)_updateVisualProvider;
- (void)assistantButtonBarView:(id)arg1 wantsToShowCollapsedItemGroup:(id)arg2 fromButton:(id)arg3;
- (void)assistantPageView:(id)arg1 didSwitchToSecondaryViewVisible:(BOOL)arg2;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)layoutSubviews;
- (void)setButtonBarItemsExpanded:(BOOL)arg1 animated:(BOOL)arg2;
- (void)setNeedsValidation;
- (BOOL)shouldSkipValidation;
- (void)validateIfNeeded;

@end

