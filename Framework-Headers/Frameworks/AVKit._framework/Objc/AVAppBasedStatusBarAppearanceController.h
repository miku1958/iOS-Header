//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AVAppBasedStatusBarAppearanceController : NSObject
{
    BOOL _clientPrefersStatusBarHidden;
    id _statusBarHiddenObserver;
}

@property (nonatomic) BOOL clientPrefersStatusBarHidden; // @synthesize clientPrefersStatusBarHidden=_clientPrefersStatusBarHidden;
@property (strong, nonatomic) id statusBarHiddenObserver; // @synthesize statusBarHiddenObserver=_statusBarHiddenObserver;

- (void).cxx_destruct;
- (void)_startObservingStatusBarHiddenIfNeeded;
- (void)_stopObservingStatusBarHiddenIfNeeded;
- (id)init;
- (void)restoreClientPreference;
- (void)setStatusBarHidden:(BOOL)arg1;
- (void)start;

@end
