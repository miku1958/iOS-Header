//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <IntentsUI/INUIVoiceShortcutRemoteViewControllerDelegate-Protocol.h>
#import <IntentsUI/_UIRemoteViewControllerContaining-Protocol.h>

@class INShortcut, INUIVoiceShortcutHostViewController, NSString, _UIRemoteViewController;
@protocol INUIAddVoiceShortcutViewControllerDelegate;

@interface INUIAddVoiceShortcutViewController : UIViewController <INUIVoiceShortcutRemoteViewControllerDelegate, _UIRemoteViewControllerContaining>
{
    INShortcut *_shortcut;
    id<INUIAddVoiceShortcutViewControllerDelegate> _delegate;
    INUIVoiceShortcutHostViewController *_remoteHostViewController;
    UIViewController *_currentChildViewController;
}

@property (readonly, nonatomic) _UIRemoteViewController *_containedRemoteViewController;
@property (strong, nonatomic) INShortcut *_shortcut; // @synthesize _shortcut;
@property (strong, nonatomic) UIViewController *currentChildViewController; // @synthesize currentChildViewController=_currentChildViewController;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<INUIAddVoiceShortcutViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic, getter=_remoteHostViewController, setter=_setRemoteHostViewController:) INUIVoiceShortcutHostViewController *remoteHostViewController; // @synthesize remoteHostViewController=_remoteHostViewController;
@property (readonly) Class superclass;

+ (void)initialize;
- (void).cxx_destruct;
- (id)initWithShortcut:(id)arg1;
- (void)loadView;
- (void)remoteViewControllerDidCancel;
- (void)remoteViewControllerDidCreateVoiceShortcut:(id)arg1 error:(id)arg2;
- (void)setChildViewController:(id)arg1;

@end

