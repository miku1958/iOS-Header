//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameCenterFoundation/NSObject-Protocol.h>

@class CKShareMetadata, NSURL;

@protocol CKXPCShareDaemon <NSObject>
- (void)handleCloudKitShareMetadata:(CKShareMetadata *)arg1 completionHandler:(void (^)(NSError *))arg2;

@optional
- (oneway void)willAcceptShareAtURL:(NSURL *)arg1;
@end

