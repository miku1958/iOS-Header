//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DACardDAV/NSObject-Protocol.h>

@class ACAccount, NSArray;

@protocol CardDAVDelegateInfoProvider <NSObject>
- (NSArray *)collectDelegatesForAccount:(ACAccount *)arg1;
- (NSArray *)collectExpiredDelgatesForAccount:(ACAccount *)arg1;
@end
