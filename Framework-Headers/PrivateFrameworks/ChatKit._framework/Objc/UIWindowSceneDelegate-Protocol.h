//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ChatKit/UISceneDelegate-Protocol.h>

@class CKShareMetadata, UIApplicationShortcutItem, UITraitCollection, UIWindow, UIWindowScene;
@protocol UICoordinateSpace;

@protocol UIWindowSceneDelegate <UISceneDelegate>

@property (strong, nonatomic) UIWindow *window;


@optional
- (void)windowScene:(UIWindowScene *)arg1 didUpdateCoordinateSpace:(id<UICoordinateSpace>)arg2 interfaceOrientation:(long long)arg3 traitCollection:(UITraitCollection *)arg4;
- (void)windowScene:(UIWindowScene *)arg1 performActionForShortcutItem:(UIApplicationShortcutItem *)arg2 completionHandler:(void (^)(BOOL))arg3;
- (void)windowScene:(UIWindowScene *)arg1 userDidAcceptCloudKitShareWithMetadata:(CKShareMetadata *)arg2;
@end

