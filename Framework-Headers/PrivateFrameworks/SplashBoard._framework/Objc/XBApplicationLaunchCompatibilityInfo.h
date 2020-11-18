//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <SplashBoard/BSXPCCoding-Protocol.h>
#import <SplashBoard/NSCoding-Protocol.h>

@class NSArray, NSString, XBLaunchInterface;

@interface XBApplicationLaunchCompatibilityInfo : NSObject <BSXPCCoding, NSCoding>
{
    XBLaunchInterface *_defaultInterface;
    BOOL _launchesOpaque;
    NSArray *_launchInterfaces;
    NSString *_bundleIdentifier;
    NSString *_bundlePath;
    NSString *_sandboxPath;
    NSString *_bundleContainerPath;
}

@property (readonly, nonatomic) BOOL allowsSavingLaunchImages;
@property (copy, nonatomic) NSString *bundleContainerPath; // @synthesize bundleContainerPath=_bundleContainerPath;
@property (copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (copy, nonatomic) NSString *bundlePath; // @synthesize bundlePath=_bundlePath;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy, nonatomic) XBLaunchInterface *defaultLaunchInterface;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSArray *launchInterfaces; // @synthesize launchInterfaces=_launchInterfaces;
@property (nonatomic) BOOL launchesOpaque; // @synthesize launchesOpaque=_launchesOpaque;
@property (copy, nonatomic) NSString *sandboxPath; // @synthesize sandboxPath=_sandboxPath;
@property (readonly) Class superclass;

+ (id)compatibilityInfoForAppInfo:(id)arg1;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (id)initWithBundle:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (id)launchInterfaceIdentifierForRequest:(id)arg1;
- (id)launchInterfaceWithIdentifier:(id)arg1;

@end

