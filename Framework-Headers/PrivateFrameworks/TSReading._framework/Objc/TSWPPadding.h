//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface TSWPPadding : NSObject
{
    double _topInset;
    double _leftInset;
    double _bottomInset;
    double _rightInset;
}

@property (nonatomic) double bottomInset; // @synthesize bottomInset=_bottomInset;
@property (nonatomic) double leftInset; // @synthesize leftInset=_leftInset;
@property (nonatomic) double rightInset; // @synthesize rightInset=_rightInset;
@property (nonatomic) double topInset; // @synthesize topInset=_topInset;

+ (id)padding;
+ (id)paddingWithTopInset:(double)arg1 leftInset:(double)arg2 bottomInset:(double)arg3 rightInset:(double)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (id)init;
- (id)initWithTopInset:(double)arg1 leftInset:(double)arg2 bottomInset:(double)arg3 rightInset:(double)arg4;
- (BOOL)isEqual:(id)arg1;
- (void)transform:(struct CGAffineTransform)arg1;

@end
