//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, UIViewController;
@protocol PUAssetActionPerformerDelegate;

@interface PUAssetActionPerformer : NSObject
{
    CDUnknownBlockType _completionHandler;
    unsigned long long _actionType;
    unsigned long long _state;
    id<PUAssetActionPerformerDelegate> _delegate;
    UIViewController *_presentedViewController;
    NSArray *_assets;
    NSDictionary *_assetsByAssetCollection;
}

@property (readonly, nonatomic) unsigned long long actionType; // @synthesize actionType=_actionType;
@property (readonly, copy, nonatomic) NSArray *assets; // @synthesize assets=_assets;
@property (readonly, copy, nonatomic) NSDictionary *assetsByAssetCollection; // @synthesize assetsByAssetCollection=_assetsByAssetCollection;
@property (weak, nonatomic) id<PUAssetActionPerformerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) UIViewController *presentedViewController; // @synthesize presentedViewController=_presentedViewController;
@property (readonly, nonatomic) unsigned long long state; // @synthesize state=_state;

- (void).cxx_destruct;
- (void)_completeStateWithSuccess:(BOOL)arg1 error:(id)arg2;
- (void)_completeUnlockTaskWithSuccess:(BOOL)arg1 error:(id)arg2;
- (void)_handleStepFinished:(unsigned long long)arg1 withSuccess:(BOOL)arg2 error:(id)arg3;
- (void)_performUnlockIfNeeded;
- (BOOL)_requiresUnlockedDevice;
- (void)_transitionToState:(unsigned long long)arg1 withSuccess:(BOOL)arg2 error:(id)arg3;
- (void)completeBackgroundTaskWithSuccess:(BOOL)arg1 error:(id)arg2;
- (void)completeUserInteractionTaskWithSuccess:(BOOL)arg1 error:(id)arg2;
- (BOOL)dismissViewController:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)init;
- (id)initWithActionType:(unsigned long long)arg1 assets:(id)arg2 orAssetsByAssetCollection:(id)arg3;
- (void)performBackgroundTask;
- (void)performUserInteractionTask;
- (void)performWithCompletionHandler:(CDUnknownBlockType)arg1;
- (BOOL)presentViewController:(id)arg1;

@end
