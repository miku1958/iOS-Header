//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol UIStatusBarServerClient;

@interface UIStatusBarServer : NSObject
{
    id<UIStatusBarServerClient> _statusBar;
    struct __CFRunLoopSource *_source;
}

@property (strong, nonatomic) id<UIStatusBarServerClient> statusBar; // @synthesize statusBar=_statusBar;

+ (unsigned int)_publisherPort;
+ (unsigned int)_serverPort;
+ (void)addStatusBarItem:(int)arg1;
+ (void)addStyleOverrides:(int)arg1;
+ (id)getDoubleHeightStatusStringForStyle:(long long)arg1;
+ (double)getGlowAnimationEndTimeForStyle:(long long)arg1;
+ (BOOL)getGlowAnimationStateForStyle:(long long)arg1;
+ (const CDStruct_7953f186 *)getStatusBarData;
+ (CDStruct_603bf4be *)getStatusBarOverrideData;
+ (int)getStyleOverrides;
+ (void)permanentizeStatusBarOverrideData;
+ (void)postDoubleHeightStatusString:(id)arg1 forStyle:(long long)arg2;
+ (void)postGlowAnimationState:(BOOL)arg1 forStyle:(long long)arg2;
+ (void)postStatusBarData:(const CDStruct_7953f186 *)arg1 withActions:(int)arg2;
+ (void)postStatusBarOverrideData:(CDStruct_603bf4be *)arg1;
+ (void)removeStatusBarItem:(int)arg1;
+ (void)removeStyleOverrides:(int)arg1;
+ (void)runServer;
- (void).cxx_destruct;
- (void)_receivedDoubleHeightStatus:(const char *)arg1 forStyle:(long long)arg2;
- (void)_receivedGlowAnimationState:(BOOL)arg1 forStyle:(long long)arg2;
- (void)_receivedStatusBarData:(CDStruct_7953f186 *)arg1 actions:(int)arg2;
- (void)_receivedStyleOverrides:(int)arg1;
- (void)dealloc;
- (id)initWithStatusBar:(id)arg1;

@end
