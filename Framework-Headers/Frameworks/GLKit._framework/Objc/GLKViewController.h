//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

#import <GLKit/GLKViewDelegate-Protocol.h>
#import <GLKit/NSCoding-Protocol.h>

@class CADisplayLink, GLKDisplayLinkMessenger, NSString, UIScreen;
@protocol GLKViewControllerDelegate;

@interface GLKViewController : UIViewController <NSCoding, GLKViewDelegate>
{
    BOOL _displayLinkPaused;
    BOOL _viewIsVisible;
    BOOL _firstResumeOccurred;
    BOOL _lastResumeOccurred;
    BOOL _lastUpdateOccurred;
    BOOL _lastDrawOccurred;
    BOOL _pauseOnWillResignActive;
    BOOL _resumeOnDidBecomeActive;
    UIScreen *_screen;
    CADisplayLink *_displayLink;
    GLKDisplayLinkMessenger *_displayLinkMessenger;
    double _timeSinceFirstResumeStartTime;
    double _timeSinceLastResumeStartTime;
    double _timeSinceLastUpdatePreviousTime;
    double _timeSinceLastDrawPreviousTime;
    CDUnknownFunctionPointerType _updateIMP;
    id<GLKViewControllerDelegate> _delegate;
    long long _screenFramesPerSecond;
    long long _preferredFramesPerSecond;
    long long _framesPerSecond;
    long long _framesDisplayed;
    double _timeSinceFirstResume;
    double _timeSinceLastResume;
    double _timeSinceLastUpdate;
    double _timeSinceLastDraw;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) id<GLKViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) CADisplayLink *displayLink; // @synthesize displayLink=_displayLink;
@property (strong, nonatomic) GLKDisplayLinkMessenger *displayLinkMessenger; // @synthesize displayLinkMessenger=_displayLinkMessenger;
@property (nonatomic) BOOL displayLinkPaused; // @synthesize displayLinkPaused=_displayLinkPaused;
@property (nonatomic) BOOL firstResumeOccurred; // @synthesize firstResumeOccurred=_firstResumeOccurred;
@property (readonly, nonatomic) long long framesDisplayed; // @synthesize framesDisplayed=_framesDisplayed;
@property (readonly, nonatomic) long long framesPerSecond; // @synthesize framesPerSecond=_framesPerSecond;
@property (readonly) unsigned long long hash;
@property (nonatomic) BOOL lastDrawOccurred; // @synthesize lastDrawOccurred=_lastDrawOccurred;
@property (nonatomic) BOOL lastResumeOccurred; // @synthesize lastResumeOccurred=_lastResumeOccurred;
@property (nonatomic) BOOL lastUpdateOccurred; // @synthesize lastUpdateOccurred=_lastUpdateOccurred;
@property (nonatomic) BOOL pauseOnWillResignActive; // @synthesize pauseOnWillResignActive=_pauseOnWillResignActive;
@property (nonatomic, getter=isPaused) BOOL paused;
@property (nonatomic) long long preferredFramesPerSecond; // @synthesize preferredFramesPerSecond=_preferredFramesPerSecond;
@property (nonatomic) BOOL resumeOnDidBecomeActive; // @synthesize resumeOnDidBecomeActive=_resumeOnDidBecomeActive;
@property (strong, nonatomic) UIScreen *screen; // @synthesize screen=_screen;
@property (nonatomic) long long screenFramesPerSecond; // @synthesize screenFramesPerSecond=_screenFramesPerSecond;
@property (readonly) Class superclass;
@property (readonly, nonatomic) double timeSinceFirstResume; // @synthesize timeSinceFirstResume=_timeSinceFirstResume;
@property (nonatomic) double timeSinceFirstResumeStartTime; // @synthesize timeSinceFirstResumeStartTime=_timeSinceFirstResumeStartTime;
@property (readonly, nonatomic) double timeSinceLastDraw; // @synthesize timeSinceLastDraw=_timeSinceLastDraw;
@property (nonatomic) double timeSinceLastDrawPreviousTime; // @synthesize timeSinceLastDrawPreviousTime=_timeSinceLastDrawPreviousTime;
@property (readonly, nonatomic) double timeSinceLastResume; // @synthesize timeSinceLastResume=_timeSinceLastResume;
@property (nonatomic) double timeSinceLastResumeStartTime; // @synthesize timeSinceLastResumeStartTime=_timeSinceLastResumeStartTime;
@property (readonly, nonatomic) double timeSinceLastUpdate; // @synthesize timeSinceLastUpdate=_timeSinceLastUpdate;
@property (nonatomic) double timeSinceLastUpdatePreviousTime; // @synthesize timeSinceLastUpdatePreviousTime=_timeSinceLastUpdatePreviousTime;
@property (nonatomic) CDUnknownFunctionPointerType updateIMP; // @synthesize updateIMP=_updateIMP;
@property (nonatomic) BOOL viewIsVisible; // @synthesize viewIsVisible=_viewIsVisible;

- (long long)_calculateScreenFramesPerSecond:(id)arg1;
- (void)_configureNotifications;
- (void)_createDisplayLinkForScreen:(id)arg1;
- (void)_initCommon;
- (void)_pauseByNotification;
- (void)_resumeByNotification;
- (void)_updateAndDraw;
- (void)_updateScreenIfChanged;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)glkView:(id)arg1 drawInRect:(struct CGRect)arg2;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)loadView;
- (void)setView:(id)arg1;
- (void)viewDidLoad;
- (void)viewDidMoveToWindow:(id)arg1 shouldAppearOrDisappear:(BOOL)arg2;
- (void)viewDidUnload;
- (void)viewWillAppear:(BOOL)arg1;
- (void)viewWillDisappear:(BOOL)arg1;

@end

