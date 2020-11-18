//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSLayoutYAxisAnchor.h>

#import <Foundation/NSCompositeLayoutAnchor-Protocol.h>

@class NSArray, NSLayoutDimension;

@interface _NSCompositeLayoutYAxisAnchor : NSLayoutYAxisAnchor <NSCompositeLayoutAnchor>
{
    NSLayoutYAxisAnchor *_yAxisAnchor;
    double _constant;
    double _dimensionMultiplier;
    NSLayoutDimension *_dimension;
}

@property (readonly) NSArray *_childAnchors;

- (id)_expressionInContext:(CDStruct_1b4a36b4)arg1;
- (double)_valueInEngine:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)equationDescription;
- (id)initWithAnchor:(id)arg1;
- (id)initWithAnchor:(id)arg1 plusDimension:(id)arg2 times:(double)arg3 plus:(double)arg4;
- (id)initWithCoder:(id)arg1;

@end

