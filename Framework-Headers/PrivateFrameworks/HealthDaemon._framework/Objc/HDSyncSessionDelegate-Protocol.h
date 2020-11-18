//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HDSyncSession, NSArray, NSError;

@protocol HDSyncSessionDelegate <NSObject>
- (void)syncSession:(HDSyncSession *)arg1 didFinishSuccessfully:(BOOL)arg2 error:(NSError *)arg3;
- (void)syncSession:(HDSyncSession *)arg1 sendChanges:(NSArray *)arg2 completion:(void (^)(long long, NSError *))arg3;
- (void)syncSessionWillBegin:(HDSyncSession *)arg1;

@optional
- (BOOL)syncSession:(HDSyncSession *)arg1 didEndTransactionWithError:(id *)arg2;
@end
