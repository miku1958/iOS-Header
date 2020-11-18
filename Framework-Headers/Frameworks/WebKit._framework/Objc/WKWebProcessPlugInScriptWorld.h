//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/WKObject-Protocol.h>

@class NSString;

@interface WKWebProcessPlugInScriptWorld : NSObject <WKObject>
{
    struct ObjectStorage<WebKit::InjectedBundleScriptWorld> _world;
}

@property (readonly) struct Object *_apiObject;
@property (readonly) struct InjectedBundleScriptWorld *_scriptWorld;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly) Class superclass;

+ (id)normalWorld;
+ (id)world;
- (void)clearWrappers;
- (void)dealloc;
- (void)makeAllShadowRootsOpen;

@end

