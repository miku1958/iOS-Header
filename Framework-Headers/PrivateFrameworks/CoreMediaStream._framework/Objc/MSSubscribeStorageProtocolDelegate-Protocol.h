//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreMediaStream/NSObject-Protocol.h>

@class MSAsset, NSError;
@protocol MSSubscribeStorageProtocol;

@protocol MSSubscribeStorageProtocolDelegate <NSObject>
- (void)subscribeStorageProtocol:(id<MSSubscribeStorageProtocol>)arg1 didFinishRetrievingAsset:(MSAsset *)arg2 error:(NSError *)arg3;
- (void)subscribeStorageProtocolDidFinishRetrievingAllAssets:(id<MSSubscribeStorageProtocol>)arg1;
@end

