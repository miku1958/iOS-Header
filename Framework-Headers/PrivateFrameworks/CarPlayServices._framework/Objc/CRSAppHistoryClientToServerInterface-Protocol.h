//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CarPlayServices/NSObject-Protocol.h>

@class NSArray;

@protocol CRSAppHistoryClientToServerInterface <NSObject>
- (void)fetchSessionEchoContextStatesWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)fetchSessionFeatureKeysWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)fetchSessionUIContextStatesWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)fetchUIContextStatesWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)setSessionFeatureKeys:(NSArray *)arg1 completion:(void (^)(NSNumber *, NSError *))arg2;
@end

