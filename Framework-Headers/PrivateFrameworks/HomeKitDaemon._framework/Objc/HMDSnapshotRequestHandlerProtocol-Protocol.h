//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HomeKitDaemon/NSObject-Protocol.h>

@class HMDCameraSessionID;

@protocol HMDSnapshotRequestHandlerProtocol <NSObject>
- (void)requestSnapshot:(HMDCameraSessionID *)arg1 completionHandler:(void (^)(HMDSnapshotFile *, NSError *))arg2;
@end
