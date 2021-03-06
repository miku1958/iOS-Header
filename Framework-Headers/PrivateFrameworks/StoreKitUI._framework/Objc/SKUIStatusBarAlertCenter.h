//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/_SKUIStatusBarAlertViewControllerDelegate-Protocol.h>

@class NSString, _SKUIClickThroughWindow, _SKUIStatusBarAlertViewController;

__attribute__((visibility("hidden")))
@interface SKUIStatusBarAlertCenter : NSObject <_SKUIStatusBarAlertViewControllerDelegate>
{
    double _duration;
    CDUnknownBlockType _actionBlock;
    _SKUIClickThroughWindow *_window;
    _SKUIStatusBarAlertViewController *_rootViewController;
}

@property (copy, nonatomic) CDUnknownBlockType actionBlock; // @synthesize actionBlock=_actionBlock;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) double duration; // @synthesize duration=_duration;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *message;
@property (readonly, nonatomic) _SKUIStatusBarAlertViewController *rootViewController; // @synthesize rootViewController=_rootViewController;
@property (readonly) Class superclass;
@property (nonatomic, getter=isVisible) BOOL visible;
@property (readonly, nonatomic) _SKUIClickThroughWindow *window; // @synthesize window=_window;

+ (id)sharedCenter;
- (void).cxx_destruct;
- (void)dismiss;
- (id)init;
- (void)scheduleDismiss;
- (void)showMessage:(id)arg1 withStyle:(long long)arg2 forDuration:(double)arg3 actionBlock:(CDUnknownBlockType)arg4;
- (void)statusBarAlertViewControllerWasTapped:(id)arg1;
- (void)unscheduleDismiss;

@end

