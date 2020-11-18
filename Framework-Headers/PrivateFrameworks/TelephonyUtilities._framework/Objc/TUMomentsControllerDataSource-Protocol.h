//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyUtilities/NSObject-Protocol.h>

@class NSString;
@protocol TUMomentsControllerDataSourceDelegate;

@protocol TUMomentsControllerDataSource <NSObject>

@property (weak, nonatomic) id<TUMomentsControllerDataSourceDelegate> delegate;

- (void)endRequestWithTransactionID:(NSString *)arg1 completion:(void (^)(NSError *))arg2;
- (void)invalidate;
- (void)registerStreamToken:(long long)arg1 remoteIDSDestination:(NSString *)arg2 remoteMomentsAvailable:(BOOL)arg3 completion:(void (^)(TUMomentsCapabilities *, NSError *))arg4;
- (void)startRequestWithMediaType:(int)arg1 forStreamToken:(long long)arg2 completion:(void (^)(NSString *, NSError *))arg3;
- (void)unregisterStreamToken:(long long)arg1 completion:(void (^)(NSError *))arg2;
@end
