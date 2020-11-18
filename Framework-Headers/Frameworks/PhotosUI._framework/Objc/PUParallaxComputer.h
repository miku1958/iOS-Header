//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PUParallaxComputer : NSObject
{
    int _axis;
    long long _model;
    double _parallaxFactor;
}

@property (nonatomic) int axis; // @synthesize axis=_axis;
@property (nonatomic) long long model; // @synthesize model=_model;
@property (nonatomic) double parallaxFactor; // @synthesize parallaxFactor=_parallaxFactor;

- (struct CGPoint)contentParallaxOffsetForViewFrame:(struct CGRect)arg1 visibleRect:(struct CGRect)arg2;

@end
