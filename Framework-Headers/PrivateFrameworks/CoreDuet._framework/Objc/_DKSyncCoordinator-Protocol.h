//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSString;

@protocol _DKSyncCoordinator
- (void)deleteRemoteStateWithReply:(void (^)(BOOL, NSError *))arg1;
- (void)syncWithReply:(void (^)(BOOL, NSError *))arg1;
- (void)synchronizeWithUrgency:(unsigned long long)arg1 client:(NSString *)arg2 reply:(void (^)(BOOL, NSError *))arg3;
@end
