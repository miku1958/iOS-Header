//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <IDS/NSObject-Protocol.h>

@class NSArray;

@protocol IDSXPCReunionSync <NSObject>
- (void)reunionSyncCompletedForServices:(NSArray *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)reunionSyncStartedForServices:(NSArray *)arg1 withCompletion:(void (^)(NSError *))arg2;
@end
