//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface WBSPasswordRule : NSObject
{
    long long _type;
    id _value;
}

@property (readonly, nonatomic) long long type; // @synthesize type=_type;
@property (readonly, nonatomic) id value; // @synthesize value=_value;

+ (id)ruleWithType:(long long)arg1 value:(id)arg2;
- (void).cxx_destruct;
- (id)initWithPasswordRuleType:(long long)arg1 value:(id)arg2;

@end
