//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface GKGradient : NSObject
{
    struct CGGradient *_CGGradient;
}

+ (id)gradientWithColors:(id)arg1 atLocations:(const double *)arg2;
- (struct CGGradient *)CGGradient;
- (void)dealloc;
- (id)initWithColors:(id)arg1 atLocations:(const double *)arg2;

@end

