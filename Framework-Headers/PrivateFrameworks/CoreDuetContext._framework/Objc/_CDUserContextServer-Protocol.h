//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreDuetContext/_CDLocalContextServer-Protocol.h>

@class NSArray, _CDContextualPredicate;

@protocol _CDUserContextServer <_CDLocalContextServer>
- (void)valuesForPaths:(NSArray *)arg1 inContextsMatching:(_CDContextualPredicate *)arg2 handler:(void (^)(NSArray *))arg3;
@end

