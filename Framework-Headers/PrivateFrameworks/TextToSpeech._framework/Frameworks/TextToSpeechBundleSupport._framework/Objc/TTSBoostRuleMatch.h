//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

@interface TTSBoostRuleMatch : NSObject
{
    NSString *_rule;
    long long _boostRuleIndex;
    NSArray *_groupings;
    struct _NSRange _range;
}

@property (nonatomic) long long boostRuleIndex; // @synthesize boostRuleIndex=_boostRuleIndex;
@property (strong, nonatomic) NSArray *groupings; // @synthesize groupings=_groupings;
@property (nonatomic) struct _NSRange range; // @synthesize range=_range;
@property (strong, nonatomic) NSString *rule; // @synthesize rule=_rule;

- (void).cxx_destruct;
- (id)description;

@end
