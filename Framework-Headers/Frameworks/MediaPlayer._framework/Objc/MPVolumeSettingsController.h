//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString, UIAlertController, UIWindow;

@interface MPVolumeSettingsController : UIViewController
{
    NSString *_audioCategory;
    UIAlertController *_alertController;
    UIWindow *_hostingWindow;
    UIWindow *_previousWindow;
}

@property (weak, nonatomic) UIWindow *hostingWindow; // @synthesize hostingWindow=_hostingWindow;
@property (weak, nonatomic) UIWindow *previousWindow; // @synthesize previousWindow=_previousWindow;

- (void).cxx_destruct;
- (void)_flip;
- (void)_keyWindowDidChange:(id)arg1;
- (void)dealloc;
- (void)dismissAlertController;
- (id)initWithAudioCategory:(id)arg1;
- (void)presentAlertControllerInWindow:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;

@end

