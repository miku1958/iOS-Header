//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DADaemonSupport/NSObject-Protocol.h>

@class NSString, SubCalDATask;

@protocol SubCalDATaskPasswordDelegate <NSObject>
- (void)subCalTask:(SubCalDATask *)arg1 needsUsernameAndPasswordForHost:(NSString *)arg2 continuation:(void (^)(NSString *, NSString *))arg3;
@end

