//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <SceneKit/NSSecureCoding-Protocol.h>

@interface SCNTimingFunction : NSObject <NSSecureCoding>
{
    struct __C3DTimingFunction *_timingFunction;
}

+ (id)functionWithCAMediaTimingFunction:(id)arg1;
+ (id)functionWithTimingMode:(long long)arg1;
+ (BOOL)supportsSecureCoding;
- (struct __C3DTimingFunction *)c3dTimingFunction;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithTimingFunctionRef:(struct __C3DTimingFunction *)arg1;

@end

