//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSPredicate.h>

@interface NSPredicate (EmailFoundationPredicateAdditions)

@property (readonly, nonatomic) BOOL ef_matchesEverything;
@property (readonly, nonatomic) BOOL ef_matchesNothing;

+ (id)ef_matchEverythingPredicate;
+ (id)ef_matchNothingPredicate;
- (id)predicateNodeFromPropertyMapper:(id)arg1;
@end

