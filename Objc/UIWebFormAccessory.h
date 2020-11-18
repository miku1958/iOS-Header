//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIInputView.h>

@class UIBarButtonItem, UIBarButtonItemGroup, UISegmentedControl, UIToolbar;
@protocol UIWebFormAccessoryDelegate;

@interface UIWebFormAccessory : UIInputView
{
    UIToolbar *_leftToolbar;
    UIToolbar *_rightToolbar;
    UIBarButtonItem *_doneButton;
    UIBarButtonItem *_flexibleSpaceItem;
    UIBarButtonItem *_previousItem;
    UIBarButtonItem *_nextItem;
    UIBarButtonItem *_spacer;
    UIBarButtonItemGroup *_buttonGroupAutoFill;
    UIBarButtonItemGroup *_buttonGroupNavigation;
    BOOL _usesUCB;
    UISegmentedControl *_tab;
    UIBarButtonItem *_autofill;
    UIBarButtonItem *_clearButton;
    id<UIWebFormAccessoryDelegate> delegate;
}

@property (strong, nonatomic) UIBarButtonItem *_autofill; // @synthesize _autofill;
@property (strong, nonatomic) UIBarButtonItem *_clearButton; // @synthesize _clearButton;
@property (strong, nonatomic) UISegmentedControl *_tab; // @synthesize _tab;
@property (nonatomic) id<UIWebFormAccessoryDelegate> delegate; // @synthesize delegate;
@property (nonatomic, getter=isNextEnabled) BOOL nextEnabled;
@property (nonatomic, getter=isPreviousEnabled) BOOL previousEnabled;

+ (id)toolbarWithItems:(id)arg1;
- (void)_applyTreatmentToAutoFillLabel;
- (id)_autoFillButton;
- (void)_nextTapped:(id)arg1;
- (void)_orientationDidChange:(id)arg1;
- (void)_previousTapped:(id)arg1;
- (void)_refreshAutofillPresentation;
- (void)_setRenderConfig:(id)arg1;
- (void)_tabSegmentedControlDidChange:(id)arg1;
- (void)_updateFrame;
- (void)autoFill:(id)arg1;
- (void)clear:(id)arg1;
- (void)dealloc;
- (void)done:(id)arg1;
- (void)hideAutoFillButton;
- (void)initForUCB:(id)arg1;
- (id)initWithInputAssistantItem:(id)arg1;
- (void)layoutSubviews;
- (void)setClearVisible:(BOOL)arg1;
- (void)showAutoFillButton;
- (void)showAutoFillButtonWithTitle:(id)arg1;

@end

