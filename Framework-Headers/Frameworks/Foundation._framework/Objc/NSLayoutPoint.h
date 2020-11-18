//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSCoding-Protocol.h>
#import <Foundation/NSCopying-Protocol.h>

@class NSLayoutXAxisAnchor, NSLayoutYAxisAnchor;

@interface NSLayoutPoint : NSObject <NSCopying, NSCoding>
{
    NSLayoutXAxisAnchor *_xAxisAnchor;
    NSLayoutYAxisAnchor *_yAxisAnchor;
}

@property (readonly, copy) NSLayoutXAxisAnchor *xAxisAnchor; // @synthesize xAxisAnchor=_xAxisAnchor;
@property (readonly, copy) NSLayoutYAxisAnchor *yAxisAnchor; // @synthesize yAxisAnchor=_yAxisAnchor;

+ (id)layoutPointWithXAxisAnchor:(id)arg1 yAxisAnchor:(id)arg2;
+ (id)pointWithXAxisAnchor:(id)arg1 yAxisAnchor:(id)arg2;
- (id)constraintsEqualToLayoutPoint:(id)arg1;
- (id)constraintsEqualToPoint:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXAxisAnchor:(id)arg1 yAxisAnchor:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)layoutPointByOffsettingWithXOffset:(double)arg1 yOffset:(double)arg2;
- (id)layoutPointByOffsettingWithXOffsetDimension:(id)arg1 yOffsetDimension:(id)arg2;
- (id)pointByOffsettingWithXOffset:(double)arg1 yOffset:(double)arg2;
- (id)pointByOffsettingWithXOffsetDimension:(id)arg1 yOffsetDimension:(id)arg2;
- (id)ruleEqualToLayoutPoint:(id)arg1;
- (struct CGPoint)valueInItem:(id)arg1;

@end
