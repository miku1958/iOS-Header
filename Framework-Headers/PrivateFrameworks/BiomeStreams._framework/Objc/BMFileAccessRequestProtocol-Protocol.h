//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <BiomeStreams/NSObject-Protocol.h>

@protocol BMFileAccessRequestProtocol <NSObject>
- (void)requestReadAccessTokenWithStream:(long long)arg1 reply:(void (^)(NSData *, NSError *))arg2;
- (void)requestWriteAccessTokenWithStream:(long long)arg1 reply:(void (^)(NSData *, NSError *))arg2;
@end

