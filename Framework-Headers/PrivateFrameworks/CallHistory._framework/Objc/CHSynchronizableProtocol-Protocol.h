//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSObject;
@protocol OS_dispatch_queue;

@protocol CHSynchronizableProtocol
- (void)execute:(void (^)(void))arg1;
- (void)executeSync:(void (^)(void))arg1;
- (BOOL)executeSyncWithBOOL:(BOOL (^)(void))arg1;
- (id)executeSyncWithResult:(id (^)(void))arg1;
- (NSObject<OS_dispatch_queue> *)queue;
@end

