//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class IMCloudKitSyncProgress, UIButton, UIColor, UILabel, UIProgressView, UIToolbar;
@protocol CKCloudKitSyncProgressViewControllerDelegate;

@interface CKCloudKitSyncProgressViewController : UIViewController
{
    BOOL _hidden;
    BOOL _progressLabelIsWrapping;
    id<CKCloudKitSyncProgressViewControllerDelegate> _delegate;
    IMCloudKitSyncProgress *_lastProgress;
    UIToolbar *_toolbar;
    UIColor *_originalProgressTintColor;
    UILabel *_progressLabel;
    UILabel *_userMessageLabel;
    UIButton *_actionButton;
    UIProgressView *_progressBar;
}

@property (readonly, nonatomic) UIButton *actionButton; // @synthesize actionButton=_actionButton;
@property (nonatomic) BOOL actionButtonEnabled; // @dynamic actionButtonEnabled;
@property (weak, nonatomic) id<CKCloudKitSyncProgressViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic, getter=isHidden) BOOL hidden; // @synthesize hidden=_hidden;
@property (strong, nonatomic) IMCloudKitSyncProgress *lastProgress; // @synthesize lastProgress=_lastProgress;
@property (copy, nonatomic) UIColor *originalProgressTintColor; // @synthesize originalProgressTintColor=_originalProgressTintColor;
@property (readonly, nonatomic) UIProgressView *progressBar; // @synthesize progressBar=_progressBar;
@property (readonly, nonatomic) UILabel *progressLabel; // @synthesize progressLabel=_progressLabel;
@property (nonatomic) BOOL progressLabelIsWrapping; // @synthesize progressLabelIsWrapping=_progressLabelIsWrapping;
@property (weak, nonatomic) UIToolbar *toolbar; // @synthesize toolbar=_toolbar;
@property (readonly, nonatomic) UILabel *userMessageLabel; // @synthesize userMessageLabel=_userMessageLabel;

- (void).cxx_destruct;
- (void)_actionButtonWasPressed:(id)arg1;
- (void)_addActionButton;
- (void)_addProgressLabel;
- (void)_addProgressView;
- (void)_addUserMessageLabel;
- (id)_createLabel;
- (BOOL)_isProgressLabelWrapping;
- (void)addToToolbar:(id)arg1;
- (id)init;
- (void)loadView;
- (void)showProgressBarWithIndeterminateProgress:(BOOL)arg1 percentComplete:(double)arg2;
- (void)showUserMessageWithString:(id)arg1 showActionButton:(BOOL)arg2 withActionButtonLabel:(id)arg3;
- (void)updateWithCloudKitProgress:(id)arg1;
- (void)updateWithCloudKitProgress:(id)arg1 forceShow:(BOOL)arg2;
- (void)viewDidLayoutSubviews;

@end

