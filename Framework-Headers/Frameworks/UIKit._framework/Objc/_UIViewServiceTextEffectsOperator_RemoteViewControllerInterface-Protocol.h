//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/_UIViewServiceDeputy_UIViewServiceInterface-Protocol.h>
#import <UIKitCore/_UIViewServiceUIBehaviorInterface-Protocol.h>

@class NSArray;

@protocol _UIViewServiceTextEffectsOperator_RemoteViewControllerInterface <_UIViewServiceDeputy_UIViewServiceInterface, _UIViewServiceUIBehaviorInterface>
- (void)__createHostedTextEffectsWithReplyHandler:(void (^)(_UIHostedWindowHostingHandle *, _UIHostedWindowHostingHandle *, _UIHostedWindowHostingHandle *))arg1;
- (void)__hostDidEnterBackground;
- (void)__hostViewWillAppear:(BOOL)arg1;
- (void)__hostViewWillDisappear:(BOOL)arg1;
- (void)__hostWillEnterForeground;
- (void)__setHostAllowedNotifications:(NSArray *)arg1;
- (void)__setNextAutomaticOrderOutDirection:(int)arg1 duration:(double)arg2;
- (void)__setSafeAreaInsets:(struct UIEdgeInsets)arg1;
- (void)__setSceneSize:(struct CGSize)arg1;
- (void)__setWindowOffset:(struct CGPoint)arg1;
@end
