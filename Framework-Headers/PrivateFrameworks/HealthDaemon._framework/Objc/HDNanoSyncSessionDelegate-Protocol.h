//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HDNanoSyncSession, NSArray, NSError;

@protocol HDNanoSyncSessionDelegate <NSObject>
- (void)nanoSyncSession:(HDNanoSyncSession *)arg1 didFinishSuccessfully:(BOOL)arg2 error:(NSError *)arg3;
- (void)nanoSyncSession:(HDNanoSyncSession *)arg1 sendChanges:(NSArray *)arg2 completion:(void (^)(BOOL, NSError *))arg3;
@end

