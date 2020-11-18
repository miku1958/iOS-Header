//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ROCKit/ROCKRemoteProxy.h>

@class NSMethodSignature;

__attribute__((visibility("hidden")))
@interface ROCKRemoteBlockProxy : ROCKRemoteProxy
{
    NSMethodSignature *_methodSignature;
}

@property (strong, nonatomic) NSMethodSignature *methodSignature; // @synthesize methodSignature=_methodSignature;
@property (readonly, nonatomic) const char *signature;
@property (readonly, nonatomic) BOOL stret;

+ (id)blockProxyWithSessionManager:(id)arg1 xpcDictionary:(id)arg2;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)initWithSessionManager:(id)arg1 xpcDictionary:(id)arg2;

@end

