//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosUI/NSObject-Protocol.h>

@class PUAssetActionPerformer, UIViewController;

@protocol PUAssetActionPerformerDelegate <NSObject>

@optional
- (void)assetActionPerformer:(PUAssetActionPerformer *)arg1 didChangeState:(unsigned long long)arg2;
- (BOOL)assetActionPerformer:(PUAssetActionPerformer *)arg1 dismissViewController:(UIViewController *)arg2 completionHandler:(void (^)(void))arg3;
- (BOOL)assetActionPerformer:(PUAssetActionPerformer *)arg1 presentViewController:(UIViewController *)arg2;
@end

