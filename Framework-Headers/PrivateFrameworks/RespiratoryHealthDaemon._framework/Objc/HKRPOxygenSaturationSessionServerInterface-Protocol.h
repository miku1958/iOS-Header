//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RespiratoryHealthDaemon/NSObject-Protocol.h>

@protocol HKRPOxygenSaturationSessionServerInterface <NSObject>
- (void)remote_abortWithCompletion:(void (^)(BOOL, NSError *))arg1;
- (void)remote_startWithCompletion:(void (^)(BOOL, NSError *))arg1;
@end
