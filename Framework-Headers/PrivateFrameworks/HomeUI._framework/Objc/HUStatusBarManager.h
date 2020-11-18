//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSHashTable;
@protocol HUStatusBarVisibilityHandling;

@interface HUStatusBarManager : NSObject
{
    BOOL _wasStatusBarVisible;
    id<HUStatusBarVisibilityHandling> _visibilityHandler;
    NSHashTable *_statusBarHidingRequesters;
    NSHashTable *_networkActivityIndicatorRequesters;
}

@property (strong, nonatomic) NSHashTable *networkActivityIndicatorRequesters; // @synthesize networkActivityIndicatorRequesters=_networkActivityIndicatorRequesters;
@property (readonly, nonatomic, getter=isStatusBarHidden) BOOL statusBarHidden;
@property (strong, nonatomic) NSHashTable *statusBarHidingRequesters; // @synthesize statusBarHidingRequesters=_statusBarHidingRequesters;
@property (strong, nonatomic) id<HUStatusBarVisibilityHandling> visibilityHandler; // @synthesize visibilityHandler=_visibilityHandler;
@property (nonatomic) BOOL wasStatusBarVisible; // @synthesize wasStatusBarVisible=_wasStatusBarVisible;

+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)init;
- (BOOL)isNetworkActivityIndicatorVisible;
- (void)setNetworkActivityIndicatorVisible:(BOOL)arg1 forRequester:(id)arg2;
- (void)setStatusBarHidden:(BOOL)arg1 forRequester:(id)arg2;
- (void)setStatusBarHidden:(BOOL)arg1 forRequester:(id)arg2 withAnimationSettings:(id)arg3;

@end

