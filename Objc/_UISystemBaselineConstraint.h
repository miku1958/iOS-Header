//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSLayoutConstraint.h>

#import <UIKitCore/NSCoding-Protocol.h>

@class NSNumber;

__attribute__((visibility("hidden")))
@interface _UISystemBaselineConstraint : NSLayoutConstraint <NSCoding>
{
    NSNumber *_spacingMultiplier;
}

@property (strong, nonatomic) NSNumber *spacingMultiplier; // @synthesize spacingMultiplier=_spacingMultiplier;

+ (id)constraintWithAnchor:(id)arg1 relatedBy:(long long)arg2 toAnchor:(id)arg3 withSystemSpacingMultipliedBy:(double)arg4;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

