//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AVConference/NSObject-Protocol.h>

@class NSDictionary, NSError, NSURL;

@protocol VCMomentsMessengerDelegate <NSObject>
- (void)streamToken:(long long)arg1 didEndProcessingRequest:(NSDictionary *)arg2 stillImageURL:(NSURL *)arg3 movieURL:(NSURL *)arg4 error:(NSError *)arg5;
- (void)streamToken:(long long)arg1 didFinishRequest:(NSDictionary *)arg2 didSucceed:(BOOL)arg3;
- (void)streamToken:(long long)arg1 didStartProcessingRequest:(NSDictionary *)arg2 error:(NSError *)arg3;
- (void)streamTokenDidCleanupAllRequests:(long long)arg1;
@end
