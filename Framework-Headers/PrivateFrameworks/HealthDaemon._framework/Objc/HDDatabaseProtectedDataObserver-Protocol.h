//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HealthDaemon/NSObject-Protocol.h>

@protocol HDHealthDatabase;

@protocol HDDatabaseProtectedDataObserver <NSObject>
- (void)database:(id<HDHealthDatabase>)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2;
@end

