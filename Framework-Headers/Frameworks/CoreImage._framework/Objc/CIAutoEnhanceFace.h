//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface CIAutoEnhanceFace : NSObject
{
    int size;
    int centerX;
    int centerY;
    double I;
    double Q;
}

@property (readonly) double I; // @synthesize I;
@property (readonly) double Q; // @synthesize Q;
@property (readonly) int centerX; // @synthesize centerX;
@property (readonly) int centerY; // @synthesize centerY;
@property (readonly) int size; // @synthesize size;

- (id)description;
- (struct CGRect)faceRect;
- (id)initWithBounds:(struct CGRect)arg1 andImage:(id)arg2 usingContext:(id)arg3;

@end

