//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SceneKit/NSSecureCoding-Protocol.h>

@class NSDictionary, SCNProgram;

__attribute__((visibility("hidden")))
@interface SCNShadableHelper : NSObject <NSSecureCoding>
{
    id _owner;
    SCNProgram *_program;
    NSDictionary *_shaderModifiers;
    NSDictionary *_symbolToBinder;
    NSDictionary *_symbolToUnbinder;
}

@property (readonly, nonatomic) id owner;
@property (strong, nonatomic) SCNProgram *program;
@property (copy, nonatomic) NSDictionary *shaderModifiers;

+ (BOOL)supportsSecureCoding;
- (void *)__CFObject;
- (BOOL)_bindValueForSymbol:(id)arg1 atLocation:(unsigned int)arg2 programID:(unsigned int)arg3 node:(id)arg4 renderer:(id)arg5;
- (void)_customDecodingOfSCNShadableHelper:(id)arg1;
- (void)_customEncodingOfSCNShadableHelper:(id)arg1;
- (void)_didDecodeSCNShadableHelper:(id)arg1;
- (void)_programDidChange:(id)arg1;
- (struct __C3DFXGLSLProgram *)_programFromPassAtIndex:(long long)arg1;
- (void)_setC3DProgram;
- (void)_setC3DProgramDelegate;
- (void)_shaderModifiersDidChange;
- (void)_startObservingProgram;
- (void)_stopObservingProgram;
- (struct __C3DFXTechnique *)_technique;
- (void)_unbindValueForSymbol:(id)arg1 atLocation:(unsigned int)arg2 programID:(unsigned int)arg3 node:(id)arg4 renderer:(id)arg5;
- (void)_updateAllC3DProgramInputs;
- (void)_updateC3DProgramInput:(struct __C3DFXGLSLProgram *)arg1 forSymbol:(id)arg2;
- (void)_updateC3DProgramInputForSymbol:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)handleBindingOfSymbol:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)handleUnbindingOfSymbol:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithOwner:(id)arg1;
- (BOOL)isOpaque;
- (void)ownerWillDie;

@end

