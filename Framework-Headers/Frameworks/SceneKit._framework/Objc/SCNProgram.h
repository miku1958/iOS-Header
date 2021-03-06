//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <SceneKit/NSCopying-Protocol.h>
#import <SceneKit/NSSecureCoding-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol MTLLibrary, SCNProgramDelegate;

@interface SCNProgram : NSObject <NSCopying, NSSecureCoding>
{
    NSString *_vertexShader;
    NSString *_fragmentShader;
    NSString *_vertexFunctionName;
    NSString *_fragmentFunctionName;
    NSString *_name;
    NSString *_sourceFile;
    NSMutableDictionary *_semanticInfos;
    BOOL _opaque;
    id _library;
    id _delegate;
    NSMutableDictionary *_bufferBindings;
}

@property (nonatomic) id<SCNProgramDelegate> delegate;
@property (copy, nonatomic) NSString *fragmentFunctionName;
@property (copy, nonatomic) NSString *fragmentShader;
@property (strong, nonatomic) id<MTLLibrary> library;
@property (nonatomic, getter=isOpaque) BOOL opaque;
@property (copy, nonatomic) NSString *vertexFunctionName;
@property (copy, nonatomic) NSString *vertexShader;

+ (id)program;
+ (id)programWithLibrary:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (id)_allSymbolsWithSceneKitSemantic;
- (id)_bufferBindings;
- (void)_customDecodingOfSCNProgram:(id)arg1;
- (void)_customEncodingOfSCNProgram:(id)arg1;
- (id)_optionsForSymbol:(id)arg1;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)handleBindingOfBufferNamed:(id)arg1 frequency:(long long)arg2 usingBlock:(CDUnknownBlockType)arg3;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)name;
- (id)semanticForSymbol:(id)arg1;
- (void)setName:(id)arg1;
- (void)setSemantic:(id)arg1 forSymbol:(id)arg2;
- (void)setSemantic:(id)arg1 forSymbol:(id)arg2 options:(id)arg3;
- (void)setSemanticInfos:(id)arg1;
- (void)setSourceFile:(id)arg1;
- (int)shadingLanguage;
- (id)sourceFile;

@end

