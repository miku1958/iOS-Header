//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BridgePreferences/NSObject-Protocol.h>

@class UIViewController;
@protocol BPSBuddyControllerDelegate;

@protocol BPSBuddyController <NSObject>
- (id<BPSBuddyControllerDelegate>)delegate;
- (void)setDelegate:(id<BPSBuddyControllerDelegate>)arg1;

@optional
+ (BOOL)controllerNeedsToRun;
- (BOOL)controllerAllowsNavigatingBackFrom;
- (BOOL)controllerAllowsNavigatingBackTo;
- (BOOL)holdBeforeDisplaying;
- (UIViewController *)viewController;
@end

