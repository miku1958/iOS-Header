//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray;
@protocol FCBundleChannelProviderDelegate;

@protocol FCBundleChannelProviderType

@property (readonly, nonatomic) NSArray *bundleChannelIDs;
@property (weak, nonatomic) id<FCBundleChannelProviderDelegate> delegate;

- (void)loadInitialBundleChannelIDsWithCompletion:(void (^)(void))arg1;
@end
