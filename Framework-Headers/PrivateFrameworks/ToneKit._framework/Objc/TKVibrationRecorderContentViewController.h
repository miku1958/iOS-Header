//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <ToneKit/TKVibrationRecorderViewDelegate-Protocol.h>
#import <ToneKit/UITextFieldDelegate-Protocol.h>

@class NSDictionary, NSString, TKVibrationRecorderView, TKVibrationRecorderViewController, TKVibratorController, TLVibrationPattern, UIAlertAction, UIAlertController, UIBarButtonItem, UITextField;
@protocol TKVibrationRecorderViewControllerDelegate;

@interface TKVibrationRecorderContentViewController : UIViewController <TKVibrationRecorderViewDelegate, UITextFieldDelegate>
{
    BOOL _waitingForEndOfCurrentVibrationComponent;
    int _mode;
    id<TKVibrationRecorderViewControllerDelegate> _delegate;
    TKVibrationRecorderViewController *_parentVibrationRecorderViewController;
    UIBarButtonItem *_cancelButton;
    UIBarButtonItem *_saveButton;
    UIAlertController *_vibrationNameAlertController;
    UIAlertAction *_vibrationNameAlertSaveAction;
    UITextField *_vibrationNameAlertTextField;
    TKVibratorController *_vibratorController;
    NSDictionary *_indefiniteVibrationPattern;
    TKVibrationRecorderView *_vibrationRecorderView;
    TLVibrationPattern *_recordedVibrationPattern;
    double _currentVibrationComponentDidStartTimeStamp;
    double _currentVibrationProgressDidStartTimestamp;
}

@property (strong, nonatomic, setter=_setCancelButton:) UIBarButtonItem *_cancelButton; // @synthesize _cancelButton;
@property (nonatomic, setter=_setCurrentVibrationComponentDidStartTimeStamp:) double _currentVibrationComponentDidStartTimeStamp; // @synthesize _currentVibrationComponentDidStartTimeStamp;
@property (nonatomic, setter=_setCurrentVibrationProgressDidStartTimestamp:) double _currentVibrationProgressDidStartTimestamp; // @synthesize _currentVibrationProgressDidStartTimestamp;
@property (strong, nonatomic, setter=_setIndefiniteVibrationPattern:) NSDictionary *_indefiniteVibrationPattern; // @synthesize _indefiniteVibrationPattern;
@property (nonatomic, setter=_setMode:) int _mode; // @synthesize _mode;
@property (strong, nonatomic, setter=_setRecordedVibrationPattern:) TLVibrationPattern *_recordedVibrationPattern; // @synthesize _recordedVibrationPattern;
@property (strong, nonatomic, setter=_setSaveButton:) UIBarButtonItem *_saveButton; // @synthesize _saveButton;
@property (strong, nonatomic, setter=_setVibrationNameAlertController:) UIAlertController *_vibrationNameAlertController; // @synthesize _vibrationNameAlertController;
@property (strong, nonatomic, setter=_setVibrationNameAlertSaveAction:) UIAlertAction *_vibrationNameAlertSaveAction; // @synthesize _vibrationNameAlertSaveAction;
@property (strong, nonatomic, setter=_setVibrationNameAlertTextField:) UITextField *_vibrationNameAlertTextField; // @synthesize _vibrationNameAlertTextField;
@property (strong, nonatomic, setter=_setVibrationRecorderView:) TKVibrationRecorderView *_vibrationRecorderView; // @synthesize _vibrationRecorderView;
@property (strong, nonatomic, setter=_setVibratorController:) TKVibratorController *_vibratorController; // @synthesize _vibratorController;
@property (nonatomic, getter=_isWaitingForEndOfCurrentVibrationComponent, setter=_setWaitingForEndOfCurrentVibrationComponent:) BOOL _waitingForEndOfCurrentVibrationComponent; // @synthesize _waitingForEndOfCurrentVibrationComponent;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<TKVibrationRecorderViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) TKVibrationRecorderViewController *parentVibrationRecorderViewController; // @synthesize parentVibrationRecorderViewController=_parentVibrationRecorderViewController;
@property (readonly) Class superclass;

- (void)_accessibilityDidEnterRecordingMode;
- (void)_accessibilityDidEnterReplayMode;
- (void)_accessibilityDidExitRecordingMode;
- (void)_accessibilityDidExitReplayMode;
- (void)_accessibilityMakeAnnouncementWithStringForLocalizationIdentifier:(id)arg1;
- (void)_cancelButtonInAlertTapped:(id)arg1;
- (void)_cancelButtonTapped:(id)arg1;
- (void)_cleanUpVibrationNameAlertController;
- (void)_eraseCurrentVibrationComponentDidStartTimeStamp;
- (void)_finishedWithRecorder;
- (void)_saveButtonInAlertTapped:(id)arg1;
- (void)_saveButtonTapped:(id)arg1;
- (void)_startVibratingWithVibrationPattern:(id)arg1;
- (void)_stopVibrating;
- (void)_storeVibrationComponentOfTypePause:(BOOL)arg1;
- (void)_updateStateSaveButtonInAlert;
- (void)_vibrationNameTextFieldContentsDidChange:(id)arg1;
- (void)applicationWillSuspend;
- (void)dealloc;
- (id)initWithVibratorController:(id)arg1;
- (void)loadView;
- (unsigned long long)supportedInterfaceOrientations;
- (BOOL)textField:(id)arg1 shouldChangeCharactersInRange:(struct _NSRange)arg2 replacementString:(id)arg3;
- (BOOL)textFieldShouldReturn:(id)arg1;
- (void)vibrationComponentDidEndForVibrationRecorderView:(id)arg1;
- (void)vibrationComponentDidStartForVibrationRecorderView:(id)arg1;
- (void)vibrationRecorderView:(id)arg1 buttonTappedWithIdentifier:(int)arg2;
- (void)vibrationRecorderView:(id)arg1 didExitRecordingModeWithContextObject:(id)arg2;
- (BOOL)vibrationRecorderViewDidEnterRecordingMode:(id)arg1;
- (void)vibrationRecorderViewDidFinishReplayingVibration:(id)arg1;
- (void)vibrationRecorderViewDidReachVibrationRecordingMaximumDuration:(id)arg1;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end
