//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSURL, NSUUID;

@protocol _NCWidgetViewController_Host_IPC
- (void)__closeTransactionForAppearanceCallWithState:(int)arg1 withIdentifier:(NSUUID *)arg2;
- (void)__requestLaunchOfURL:(NSURL *)arg1;
- (void)__requestPreferredViewHeight:(double)arg1 usingAutolayout:(BOOL)arg2 requestIdentifier:(NSUUID *)arg3;
@end
