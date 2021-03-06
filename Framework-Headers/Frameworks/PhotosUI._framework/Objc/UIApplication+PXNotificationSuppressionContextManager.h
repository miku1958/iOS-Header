//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKit/UIApplication.h>

#import <PhotosUICore/PXPPTDelegate-Protocol.h>

@class UIWindow;
@protocol PXNotificationSuppressionContextManager;

@interface UIApplication (PXNotificationSuppressionContextManager) <PXPPTDelegate>

@property (readonly, nonatomic) id<PXNotificationSuppressionContextManager> notificationSuppressionContextManager;
@property (readonly, nonatomic) UIWindow *px_firstKeyWindow;

- (void)_px_navigateToURL:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)failedTest:(id)arg1 withFailureFormat:(id)arg2;
- (void)px_navigateToMomentsViewRevealingAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)px_navigateToMomentsViewRevealingAssetWithUUID:(id)arg1 openOneUp:(BOOL)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)px_navigateToOneUpShowingAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)px_navigateToRevealDroppedAsset:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)px_navigateToWelcomeCloudViewWithCompletionHandler:(CDUnknownBlockType)arg1;
@end

