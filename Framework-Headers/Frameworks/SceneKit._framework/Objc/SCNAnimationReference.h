//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <QuartzCore/CAAnimationGroup.h>

@class NSString;

@interface SCNAnimationReference : CAAnimationGroup
{
    NSString *referenceName;
}

@property (copy, nonatomic) NSString *referenceName; // @synthesize referenceName;

- (BOOL)_isAReference;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

