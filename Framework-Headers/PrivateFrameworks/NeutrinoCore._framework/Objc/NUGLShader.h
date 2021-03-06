//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUGLObject.h>

@class NSError, NSString;

@interface NUGLShader : NUGLObject
{
    long long _compilationStatus;
    NSError *_compilationError;
    long long _type;
    NSString *_source;
}

@property (readonly) unsigned int glStage;
@property (readonly) unsigned int glType;
@property (readonly) NSString *source; // @synthesize source=_source;
@property (readonly) long long type; // @synthesize type=_type;

- (void).cxx_destruct;
- (void)_compile:(id)arg1;
- (BOOL)compile:(id)arg1 error:(out id *)arg2;
- (void)delete;
- (void)generate:(id)arg1;
- (id)init;
- (id)initWithType:(long long)arg1 source:(id)arg2;

@end

