//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RelevanceEngine/NSObject-Protocol.h>

@class NSString;

@protocol REPredictionServer <NSObject>
- (void)fetchFirstPerformedActionDate:(void (^)(NSDate *))arg1;
- (void)fetchPerformedTodayCountForActionWithBundleIdentifer:(NSString *)arg1 actionIdentifier:(unsigned long long)arg2 completion:(void (^)(unsigned long long))arg3;
- (void)requestPredictedActionsWithCompletion:(void (^)(NSArray *, NSArray *))arg1;
@end

