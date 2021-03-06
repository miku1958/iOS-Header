//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface PKRoundedPath : NSObject
{
    struct CGPath *_CGPath;
}

@property (readonly) struct CGPath *CGPath; // @synthesize CGPath=_CGPath;

+ (id)pathWithRoundedRect:(struct CGRect)arg1 cornerRadius:(double)arg2;
- (void)addContinuousCornerToPath:(struct CGPath *)arg1 trueCorner:(struct CGPoint)arg2 cornerRadius:(struct CGSize)arg3 corners:(unsigned long long)arg4 portion:(unsigned long long)arg5 clockwise:(BOOL)arg6 fullRadius:(BOOL)arg7;
- (void)dealloc;
- (id)init;
- (id)initWithRect:(struct CGRect)arg1 withRoundedCorners:(int)arg2 cornerRadii:(id)arg3 smoothPillShapes:(BOOL)arg4;

@end

