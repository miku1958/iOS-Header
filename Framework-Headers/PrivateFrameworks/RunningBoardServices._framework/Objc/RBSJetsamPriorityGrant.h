//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RunningBoardServices/RBSGrant.h>

@interface RBSJetsamPriorityGrant : RBSGrant
{
    long long _priority;
}

@property (readonly, nonatomic) long long priority; // @synthesize priority=_priority;

+ (id)grantWithBackgroundPriority;
+ (id)grantWithForegroundPriority;
+ (id)grantWithPriority:(long long)arg1;
+ (BOOL)supportsRBSXPCSecureCoding;
- (id)description;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithRBSXPCCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

