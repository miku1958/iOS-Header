//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppConduit/NSObject-Protocol.h>

@class NSError;

@protocol ACXInstallOperationDelegateProtocol <NSObject>
- (void)callCompletionBlockWithError:(NSError *)arg1;
- (void)callProgressBlockWithPhase:(unsigned long long)arg1 percentComplete:(double)arg2;
@end

