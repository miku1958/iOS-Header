//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthKit/NSObject-Protocol.h>

@class NSDictionary;

@protocol HKSeriesBuilderServerInterface <NSObject>
- (void)remote_addMetadata:(NSDictionary *)arg1 completion:(void (^)(BOOL, NSError *))arg2;
- (void)remote_discardWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)remote_freezeWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)remote_recoverWithCompletion:(void (^)(BOOL, NSError *))arg1;
@end

