//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSArray, NSProgressValues, NSSet, NSString, NSURL;
@protocol NSProgressPublisher, NSProgressSubscriber;

@protocol NSProgressRegistrar
- (oneway void)addPublisher:(id<NSProgressPublisher>)arg1 forID:(NSString *)arg2 acknowledgementAppBundleIDs:(NSSet *)arg3 category:(NSString *)arg4 fileURL:(NSURL *)arg5 initialValues:(NSProgressValues *)arg6 completionHandler:(void (^)(NSSet *))arg7;
- (oneway void)addSubscriber:(id<NSProgressSubscriber>)arg1 forID:(NSString *)arg2 appBundleID:(NSString *)arg3 category:(NSString *)arg4 completionHandler:(void (^)(void))arg5;
- (oneway void)addSubscriber:(id<NSProgressSubscriber>)arg1 forID:(NSString *)arg2 appBundleID:(NSString *)arg3 fileURL:(NSURL *)arg4 completionHandler:(void (^)(void))arg5;
- (oneway void)observePublisherForID:(NSString *)arg1 values:(NSArray *)arg2 forKeys:(NSArray *)arg3;
- (oneway void)observePublisherUserInfoForID:(NSString *)arg1 value:(id)arg2 forKey:(NSString *)arg3;
- (oneway void)removePublisherForID:(NSString *)arg1;
- (oneway void)removeSubscriberForID:(NSString *)arg1;
@end
