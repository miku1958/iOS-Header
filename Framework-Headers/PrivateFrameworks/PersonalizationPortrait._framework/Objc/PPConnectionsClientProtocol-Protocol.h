//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PersonalizationPortrait/PPFeedbackAccepting-Protocol.h>

@class NSArray, NSError;

@protocol PPConnectionsClientProtocol <PPFeedbackAccepting>
- (void)recentLocationsBatch:(NSArray *)arg1 isLast:(BOOL)arg2 error:(NSError *)arg3 queryId:(unsigned long long)arg4 completion:(void (^)(BOOL))arg5;
@end
