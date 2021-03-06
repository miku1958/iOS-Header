//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPMediaPredicate.h>

@class NSSet, NSString;

@interface MPMediaContainmentPredicate : MPMediaPredicate
{
    NSString *_property;
    NSSet *_values;
}

@property (readonly, copy, nonatomic) NSString *property; // @synthesize property=_property;
@property (readonly, copy, nonatomic) NSSet *values; // @synthesize values=_values;

+ (id)predicateWithProperty:(id)arg1 values:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)ML3PredicateForContainer;
- (id)ML3PredicateForTrack;
- (id)_ML3PredicateForEntityClass:(Class)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

