//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RunningBoardServices/RBSAttribute.h>

@interface RBSDurationAttribute : RBSAttribute
{
    double _invalidationDuration;
    double _warningDuration;
    unsigned long long _startPolicy;
    unsigned long long _endPolicy;
}

@property (nonatomic) unsigned long long endPolicy; // @synthesize endPolicy=_endPolicy;
@property (nonatomic) double invalidationDuration; // @synthesize invalidationDuration=_invalidationDuration;
@property (nonatomic) unsigned long long startPolicy; // @synthesize startPolicy=_startPolicy;
@property (nonatomic) double warningDuration; // @synthesize warningDuration=_warningDuration;

+ (id)attributeWithDuration:(double)arg1;
+ (id)attributeWithDuration:(double)arg1 warningDuration:(double)arg2 startPolicy:(unsigned long long)arg3 endPolicy:(unsigned long long)arg4;
+ (id)invalidateAfterInterval:(double)arg1;
+ (id)terminateAfterInterval:(double)arg1;
- (id)_initWithInvalidationDuration:(double)arg1 warningDuration:(double)arg2 startPolicy:(unsigned long long)arg3 endPolicy:(unsigned long long)arg4;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (void)encodeWithBSXPCCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithBSXPCCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)succinctDescriptionBuilder;

@end
