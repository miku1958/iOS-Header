//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <RunningBoardServices/RBSAttribute.h>

@interface RBSLegacyAttribute : RBSAttribute
{
    unsigned long long _reason;
    unsigned long long _requestedReason;
    unsigned long long _flags;
}

@property (readonly, nonatomic) unsigned long long flags;
@property (nonatomic) unsigned long long reason; // @synthesize reason=_reason;
@property (readonly, nonatomic) unsigned long long requestedReason;

+ (id)attributeWithReason:(unsigned long long)arg1 flags:(unsigned long long)arg2;
- (id)description;
- (void)encodeWithRBSXPCCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithRBSXPCCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
