//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSURL;
@protocol OS_xpc_object;

@interface PKBundle : NSObject
{
    NSString *_supportPath;
    NSObject<OS_xpc_object> *__bundle;
}

@property (strong) NSObject<OS_xpc_object> *_bundle; // @synthesize _bundle=__bundle;
@property (readonly) NSString *bundleIdentifier;
@property (readonly) NSString *executablePath;
@property (readonly) NSDictionary *infoDictionary;
@property (readonly) NSString *path;
@property (readonly) NSString *plugInsPath;
@property (readonly) NSString *supportPath; // @synthesize supportPath=_supportPath;
@property (readonly) NSURL *url;

- (void).cxx_destruct;
- (id)bundleDirectory:(id)arg1;
- (id)initForMainBundle;
- (id)initWithExecutablePath:(id)arg1;
- (id)initWithExecutableURL:(id)arg1;
- (id)initWithPath:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)initWithXPCBundle:(id)arg1;
- (id)stringProperty:(int)arg1;

@end

