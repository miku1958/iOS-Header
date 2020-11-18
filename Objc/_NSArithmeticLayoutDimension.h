//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSLayoutDimension.h>

#import <Foundation/NSCompositeLayoutAnchor-Protocol.h>

@class NSArray;

@interface _NSArithmeticLayoutDimension : NSLayoutDimension <NSCompositeLayoutAnchor>
{
    NSLayoutDimension *_rootLayoutDimension;
    double _multiplier;
    double _constant;
}

@property (readonly) NSArray *_childAnchors;

- (id)_expressionInContext:(CDStruct_1b4a36b4)arg1;
- (id)_nearestAncestorLayoutItem;
- (double)_valueInEngine:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)equationDescription;
- (id)initWithAnchor:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithMultiplier:(double)arg1 dimension:(id)arg2 constant:(double)arg3;

@end

