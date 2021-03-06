//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSProgress, NSString, NSTimer, UIAlertController, UIWindow, UIWindowScene, _UIProgressView;

__attribute__((visibility("hidden")))
@interface _UIApplicationModalProgressController : NSObject
{
    BOOL _disableButtonAction;
    _UIProgressView *_progressView;
    UIWindowScene *_weakScene;
    double _displayDelaySeconds;
    UIWindow *_window;
    UIAlertController *_alertController;
    CDUnknownBlockType _dismissalHandler;
    CDUnknownBlockType _preDisplayTestBlock;
    NSProgress *_progress;
    NSTimer *_showTimer;
    NSTimer *_hideTimer;
    double _displayStartTime;
    NSProgress *_urlProgress;
}

@property (strong, nonatomic, getter=_alertController, setter=_setAlertController:) UIAlertController *alertController; // @synthesize alertController=_alertController;
@property (copy, nonatomic, getter=_dismissalHandler, setter=_setDismissalHandler:) CDUnknownBlockType dismissalHandler; // @synthesize dismissalHandler=_dismissalHandler;
@property (nonatomic) double displayDelaySeconds; // @synthesize displayDelaySeconds=_displayDelaySeconds;
@property (nonatomic, getter=_displayStartTime, setter=_setDisplayStartTime:) double displayStartTime; // @synthesize displayStartTime=_displayStartTime;
@property (strong, nonatomic, getter=_hideTimer, setter=_setHideTimer:) NSTimer *hideTimer; // @synthesize hideTimer=_hideTimer;
@property (copy, nonatomic) NSString *message;
@property (copy, nonatomic, getter=_preDisplaySetBlock, setter=_setPreDisplayTestBlock:) CDUnknownBlockType preDisplayTestBlock; // @synthesize preDisplayTestBlock=_preDisplayTestBlock;
@property (strong, nonatomic, getter=_progress, setter=_setProgress:) NSProgress *progress; // @synthesize progress=_progress;
@property (strong, nonatomic, getter=_showTimer, setter=_setShowTimer:) NSTimer *showTimer; // @synthesize showTimer=_showTimer;
@property (copy, nonatomic) NSString *title;
@property (strong, nonatomic) NSProgress *urlProgress; // @synthesize urlProgress=_urlProgress;
@property (strong, nonatomic, getter=_window, setter=_setWindow:) UIWindow *window; // @synthesize window=_window;

+ (id)instanceForScene:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_callAndClearDismissalHandlerWasDismissedByUser:(BOOL)arg1;
- (void)_dismissButtonAction:(id)arg1;
- (void)_hideImmediatelyWasDismissedByUser:(BOOL)arg1;
- (void)_hideTimerAction:(id)arg1;
- (void)_reset;
- (void)_showTimerAction:(id)arg1;
- (void)displayForCopyingFileAtURL:(id)arg1 toURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)displayForDownloadingURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)displayForDownloadingURL:(id)arg1 copyToURL:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)displayWithTitle:(id)arg1 message:(id)arg2 progress:(id)arg3 buttonTitle:(id)arg4 preDisplayTestBlock:(CDUnknownBlockType)arg5 dismissalHandler:(CDUnknownBlockType)arg6;
- (void)hideAfterDelay:(double)arg1 forceCompletion:(BOOL)arg2 afterMinimumUptimeDismissalHandler:(CDUnknownBlockType)arg3;
- (void)hideAfterMinimumUptimeWithDismissalHandler:(CDUnknownBlockType)arg1;
- (id)init;
- (void)reconfigureWithTitle:(id)arg1 message:(id)arg2 progress:(id)arg3 buttonTitle:(id)arg4 dismissalHandler:(CDUnknownBlockType)arg5;

@end

