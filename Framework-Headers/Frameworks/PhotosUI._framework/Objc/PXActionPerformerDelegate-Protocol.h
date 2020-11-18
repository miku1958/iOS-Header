//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUICore/NSObject-Protocol.h>

@class NSObject, PXActionPerformer;
@protocol PXAnonymousViewController;

@protocol PXActionPerformerDelegate <NSObject>

@optional
- (void)actionPerformer:(PXActionPerformer *)arg1 didChangeState:(unsigned long long)arg2;
- (BOOL)actionPerformer:(PXActionPerformer *)arg1 dismissViewController:(NSObject<PXAnonymousViewController> *)arg2 completionHandler:(void (^)(void))arg3;
- (BOOL)actionPerformer:(PXActionPerformer *)arg1 presentViewController:(NSObject<PXAnonymousViewController> *)arg2;
- (BOOL)actionPerformer:(PXActionPerformer *)arg1 transitionToViewController:(NSObject<PXAnonymousViewController> *)arg2 transitionType:(long long)arg3;
- (NSObject<PXAnonymousViewController> *)hostViewControllerForActionPerformer:(PXActionPerformer *)arg1;
@end
