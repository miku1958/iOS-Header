//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <MetalTools/MTLFunctionLog-Protocol.h>

@class NSArray, NSString;
@protocol MTLFunction, MTLFunctionLogDebugLocation, MTLTexture;

__attribute__((visibility("hidden")))
@interface MTLTextureErrorLog : NSObject <MTLFunctionLog>
{
    id<MTLFunctionLogDebugLocation> _debugLocation;
    NSString *_encoderLabel;
    id<MTLFunction> _function;
    unsigned long long _type;
    unsigned long long _encoderMethodIdentifier;
    id<MTLTexture> _texture;
    NSArray *_errorStackTrace;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, nonatomic) id<MTLFunctionLogDebugLocation> debugLocation; // @synthesize debugLocation=_debugLocation;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *encoderLabel; // @synthesize encoderLabel=_encoderLabel;
@property (nonatomic) unsigned long long encoderMethodIdentifier; // @synthesize encoderMethodIdentifier=_encoderMethodIdentifier;
@property (readonly, nonatomic) NSArray *errorStackTrace; // @synthesize errorStackTrace=_errorStackTrace;
@property (readonly, nonatomic) id<MTLFunction> function; // @synthesize function=_function;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) id<MTLTexture> texture; // @synthesize texture=_texture;
@property (readonly, nonatomic) unsigned long long type; // @synthesize type=_type;

- (void)dealloc;
- (id)initWithType:(unsigned long long)arg1 function:(id)arg2 encoderLabel:(id)arg3 texture:(id)arg4 stackTrace:(id)arg5;

@end

