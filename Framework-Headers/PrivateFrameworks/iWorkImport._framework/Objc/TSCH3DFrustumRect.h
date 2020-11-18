//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface TSCH3DFrustumRect : NSObject
{
    float _left;
    float _right;
    float _bottom;
    float _top;
}

@property (readonly, nonatomic) float bottom; // @synthesize bottom=_bottom;
@property (readonly, nonatomic) float left; // @synthesize left=_left;
@property (readonly, nonatomic) float right; // @synthesize right=_right;
@property (readonly, nonatomic) float top; // @synthesize top=_top;

+ (id)rectWithLeft:(float)arg1 right:(float)arg2 bottom:(float)arg3 top:(float)arg4;
- (id)initWithLeft:(float)arg1 right:(float)arg2 bottom:(float)arg3 top:(float)arg4;
- (box_80622335)toBox;

@end

