//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VKViewVolume : NSObject
{
    Matrix_6e1d3589 _corners[8];
}

@property (readonly, nonatomic) const Matrix_6e1d3589 *corners;

- (id).cxx_construct;
- (Matrix_6e1d3589)lerpPoint:(float *)arg1;
- (void)updateWithFrustum:(CDStruct_7a7719de)arg1 matrix:(const Matrix_08d701e4 *)arg2;

@end
