//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface SKGlobalSharedContextRegistry : NSObject
{
}

+ (BOOL)getPrefersOpenGL;
+ (id)globalGLSharedContext;
+ (id)globalMetalDevice;
+ (void)setGlobalGLSharedContext:(id)arg1;
+ (void)setGlobalMetalDevice:(id)arg1;
+ (void)setPrefersOpenGL:(BOOL)arg1;

@end

