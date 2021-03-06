//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SiriVideoIntents/NSObject-Protocol.h>

@class RemoveFromWatchListIntent;

@protocol RemoveFromWatchListIntentHandling <NSObject>
- (void)handleRemoveFromWatchList:(RemoveFromWatchListIntent *)arg1 completion:(void (^)(RemoveFromWatchListIntentResponse *))arg2;
- (void)resolveContentForRemoveFromWatchList:(RemoveFromWatchListIntent *)arg1 withCompletion:(void (^)(RemoveFromWatchListContentResolutionResult *))arg2;

@optional
- (void)confirmRemoveFromWatchList:(RemoveFromWatchListIntent *)arg1 completion:(void (^)(RemoveFromWatchListIntentResponse *))arg2;
@end

