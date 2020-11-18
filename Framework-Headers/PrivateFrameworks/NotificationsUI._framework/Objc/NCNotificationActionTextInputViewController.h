//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <NotificationsUI/NCInteractiveNotificationHost-Protocol.h>
#import <NotificationsUI/UITextViewDelegate-Protocol.h>

@class NCViewServiceDescriptor, NSString, UIButton, UITextView, _UITextFieldRoundedRectBackgroundViewNeue;
@protocol NCInteractiveNotificationHostDelegate, NCNotificationActionTextInputDelegate;

@interface NCNotificationActionTextInputViewController : UIViewController <UITextViewDelegate, NCInteractiveNotificationHost>
{
    BOOL _modal;
    double _maximumHeight;
    id<NCInteractiveNotificationHostDelegate> _delegate;
    NSString *_buttonTitle;
    NSString *_actionIdentifier;
    id<NCNotificationActionTextInputDelegate> _textInputDelegate;
    _UITextFieldRoundedRectBackgroundViewNeue *_coverView;
    UITextView *_textEntryView;
    UIButton *_sendButton;
}

@property (readonly, strong, nonatomic) NCViewServiceDescriptor *accessoryViewService;
@property (strong, nonatomic) NSString *actionIdentifier; // @synthesize actionIdentifier=_actionIdentifier;
@property (readonly, nonatomic) double bottomOverhangHeight;
@property (strong, nonatomic) NSString *buttonTitle; // @synthesize buttonTitle=_buttonTitle;
@property (strong, nonatomic) _UITextFieldRoundedRectBackgroundViewNeue *coverView; // @synthesize coverView=_coverView;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<NCInteractiveNotificationHostDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, strong, nonatomic) NCViewServiceDescriptor *inlayViewService;
@property (nonatomic) double maximumHeight; // @synthesize maximumHeight=_maximumHeight;
@property (nonatomic, getter=isModal) BOOL modal; // @synthesize modal=_modal;
@property (strong, nonatomic) UIButton *sendButton; // @synthesize sendButton=_sendButton;
@property (readonly, nonatomic) BOOL showsKeyboard;
@property (readonly) Class superclass;
@property (strong, nonatomic) UITextView *textEntryView; // @synthesize textEntryView=_textEntryView;
@property (nonatomic) id<NCNotificationActionTextInputDelegate> textInputDelegate; // @synthesize textInputDelegate=_textInputDelegate;

- (void)_sendButtonTouchUpInside:(id)arg1;
- (void)_updateForTextChanged;
- (void)dealloc;
- (void)didChangeRevealPercent:(double)arg1;
- (void)getActionContextWithCompletion:(CDUnknownBlockType)arg1;
- (void)handleActionAtIndex:(long long)arg1;
- (void)handleActionIdentifier:(id)arg1;
- (void)interactiveNotificationDidAppear;
- (double)preferredContentHeight;
- (struct CGSize)preferredContentSize;
- (void)textViewDidChange:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (void)willPresentFromActionIdentifier:(id)arg1;

@end
