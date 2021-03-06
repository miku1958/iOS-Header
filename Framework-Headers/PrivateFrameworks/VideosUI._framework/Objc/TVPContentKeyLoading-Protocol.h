//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <VideosUI/NSObject-Protocol.h>

@class NSArray, NSData, NSURL;

@protocol TVPContentKeyLoading <NSObject>
- (void)loadFairPlayStreamingKeyRequests:(NSArray *)arg1;

@optional
- (void)loadFairPlayStreamingKeyRequests:(NSArray *)arg1 completion:(void (^)(void))arg2;
- (void)updateOfflineKeyWithIdentifier:(NSURL *)arg1 updatedOfflineKeyData:(NSData *)arg2;
@end

