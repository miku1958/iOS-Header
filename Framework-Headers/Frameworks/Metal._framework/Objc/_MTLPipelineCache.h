//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Metal/MTLPipelineCache-Protocol.h>

@class NSString;

@interface _MTLPipelineCache : NSObject <MTLPipelineCache>
{
    BOOL _writable;
    struct MTLCompilerCache *_compilerCache;
    BOOL _disableRunTimeCompilation;
}

@property (readonly) struct MTLCompilerCache *cache; // @synthesize cache=_compilerCache;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL disableRunTimeCompilation; // @synthesize disableRunTimeCompilation=_disableRunTimeCompilation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly) BOOL writable; // @synthesize writable=_writable;

- (void)dealloc;
- (id)initWithFilePath:(id)arg1 readOnly:(BOOL)arg2 deviceInfo:(const struct MTLTargetDeviceArch *)arg3;
- (void)write;

@end

