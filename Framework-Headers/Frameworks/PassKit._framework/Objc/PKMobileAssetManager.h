//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@protocol OS_dispatch_queue;

@interface PKMobileAssetManager : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)_downloadAsset:(id)arg1 userInitiated:(BOOL)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_downloadOptionsWithUserInitiation:(BOOL)arg1;
- (void)_queryAssetsWithAssetType:(id)arg1 predicate:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_retrieveAssetWithAssetType:(id)arg1 userInitiated:(BOOL)arg2 predicate:(id)arg3 sortDescriptors:(id)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)fetchEducationVideoWithPeerPaymentCard:(BOOL)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)fetchNeededAssetsForThisDeviceWithPeerPaymentCard:(BOOL)arg1;
- (id)init;
- (id)predicateForEducationVideo;
- (id)sortDescriptorsForEducationVideoWithPeerPaymentCard:(BOOL)arg1;

@end

