//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class TSCH3DUniformArrayShaderVariables;

__attribute__((visibility("hidden")))
@interface TSCH3DLightUniformArrayShaderVariables : NSObject
{
    TSCH3DUniformArrayShaderVariables *mVariables;
}

- (void)addUniformsToShaderProgram:(id)arg1 size:(unsigned long long)arg2;
- (unsigned long long)arraySize;
- (void)dealloc;
- (void)initializeArrayVariables;
- (void)initializePrefix:(id)arg1;
- (id)variableAtIndex:(unsigned long long)arg1 name:(id)arg2;

@end
