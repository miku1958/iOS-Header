//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIViewController.h>

@class NSString, NSURL, STWebRemoteViewController;
@protocol STWebService;

@interface STWebpageController : UIViewController
{
    long long _currentUsageState;
    BOOL _suppressUsageRecording;
    BOOL _URLIsPlayingVideo;
    BOOL _URLIsPictureInPicture;
    BOOL _URLIsBlocked;
    BOOL _URLIsVisibleInForeground;
    NSURL *_URL;
    STWebRemoteViewController *_remoteViewController;
    NSString *_bundleIdentifier;
}

@property (copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property BOOL URLIsBlocked; // @synthesize URLIsBlocked=_URLIsBlocked;
@property (nonatomic) BOOL URLIsPictureInPicture; // @synthesize URLIsPictureInPicture=_URLIsPictureInPicture;
@property (nonatomic) BOOL URLIsPlayingVideo; // @synthesize URLIsPlayingVideo=_URLIsPlayingVideo;
@property (readonly) BOOL URLIsPlayingVideoPictureInPicture;
@property BOOL URLIsVisibleInForeground; // @synthesize URLIsVisibleInForeground=_URLIsVisibleInForeground;
@property (copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (nonatomic) long long currentUsageState;
@property (readonly) long long defaultUsageState;
@property (strong) STWebRemoteViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property (readonly) id<STWebService> serviceProxy;
@property (nonatomic) BOOL suppressUsageRecording; // @synthesize suppressUsageRecording=_suppressUsageRecording;

- (void).cxx_destruct;
- (void)_URLIsBlockedDidChangeFrom:(id)arg1 to:(id)arg2;
- (void)_applicationDidBecomeActive:(id)arg1;
- (void)_applicationDidEnterBackground:(id)arg1;
- (void)_changeUsageState:(long long)arg1 errorHandler:(CDUnknownBlockType)arg2;
- (void)_delayedSetURLIsBlocked:(id)arg1;
- (void)_didChangePlaybackState:(id)arg1;
- (void)_didStopPictureInPicture:(id)arg1;
- (void)_setURL:(id)arg1 bundleIdentifier:(id)arg2 usageState:(long long)arg3 errorHandler:(CDUnknownBlockType)arg4;
- (void)_startReportingWebUsage;
- (void)_willStartPictureInPicture:(id)arg1;
- (void)dealloc;
- (id)init;
- (void)invalidate;
- (void)loadView;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (BOOL)setBundleIdentifier:(id)arg1 error:(id *)arg2;
- (void)viewDidAppear:(BOOL)arg1;
- (void)viewDidDisappear:(BOOL)arg1;
- (void)viewDidLoad;

@end
