//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebApp/WAWebViewControllerDelegate-Protocol.h>

@class NSString, NSTimer, UIImageView, UIWebClip, UIWindow, WAWebViewController;

@interface WAWebApplication : NSObject <WAWebViewControllerDelegate>
{
    UIWindow *_window;
    WAWebViewController *_webAppViewController;
    UIImageView *_snapshotView;
    NSTimer *_snapshotHideTimer;
    UIWebClip *_webClip;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) UIWebClip *webClip; // @synthesize webClip=_webClip;

- (void).cxx_destruct;
- (id)_genericMessageForError:(id)arg1;
- (void)_hideLaunchImage;
- (void)_showLaunchImage;
- (id)_specializedMessageForError:(id)arg1;
- (id)_titleForError:(id)arg1;
- (void)_updateStatusBar;
- (void)_updateWebClip;
- (id)initForWebClipURL:(id)arg1;
- (void)resume;
- (void)webApplicationContentDidBeginLoading:(id)arg1;
- (void)webApplicationContentDidFinishLoading:(id)arg1;
- (void)webApplicationContentFailedToLoad:(id)arg1 withError:(id)arg2;
- (void)webApplicationPaintedSignificantContent:(id)arg1;

@end

