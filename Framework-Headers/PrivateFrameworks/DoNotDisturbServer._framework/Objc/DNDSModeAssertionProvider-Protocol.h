//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DoNotDisturbServer/NSObject-Protocol.h>

@class DNDSModeAssertion, NSArray, NSUUID;

@protocol DNDSModeAssertionProvider <NSObject>
- (NSArray *)allModeAssertionsWithError:(id *)arg1;
- (DNDSModeAssertion *)assertionWithUUID:(NSUUID *)arg1 error:(id *)arg2;
@end

