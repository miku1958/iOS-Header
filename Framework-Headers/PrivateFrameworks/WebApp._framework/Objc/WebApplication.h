//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIApplication.h>

#import <WebApp/UIApplicationDelegate-Protocol.h>

@class NSString, UIWindow, WebAppController;

@interface WebApplication : UIApplication <UIApplicationDelegate>
{
    WebAppController *_webApp;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (strong, nonatomic) UIWindow *window;

- (void).cxx_destruct;
- (void)_showWebApplicationAtURL:(id)arg1;
- (BOOL)application:(id)arg1 didFinishLaunchingWithOptions:(id)arg2;
- (void)applicationDidBecomeActive:(id)arg1;
- (BOOL)applicationSuspendWithSettings:(id)arg1;
- (id)nameOfDefaultImageToUpdateAtSuspension;
- (id)nameOfDefaultImageToUpdateAtSuspension:(long long)arg1;

@end

