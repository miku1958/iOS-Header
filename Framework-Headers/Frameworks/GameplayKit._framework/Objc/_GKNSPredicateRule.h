//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GameplayKit/GKNSPredicateRule.h>

@protocol NSObject;

@interface _GKNSPredicateRule : GKNSPredicateRule
{
    id<NSObject> _fact;
    float _grade;
    BOOL _asserting;
}

- (void).cxx_destruct;
- (id)initWithPredicate:(id)arg1 fact:(id)arg2 grade:(float)arg3 asserting:(BOOL)arg4;
- (void)performActionWithSystem:(id)arg1;

@end

