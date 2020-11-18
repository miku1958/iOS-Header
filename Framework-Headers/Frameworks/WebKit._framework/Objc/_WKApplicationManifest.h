//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebKit/NSSecureCoding-Protocol.h>
#import <WebKit/WKObject-Protocol.h>

@class NSString, NSURL;

@interface _WKApplicationManifest : NSObject <WKObject, NSSecureCoding>
{
    struct ObjectStorage<API::ApplicationManifest> _applicationManifest;
}

@property (readonly) struct Object *_apiObject;
@property (readonly, copy, nonatomic) NSString *applicationDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) long long displayMode;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSURL *scope;
@property (readonly, copy, nonatomic) NSString *shortName;
@property (readonly, copy, nonatomic) NSURL *startURL;
@property (readonly) Class superclass;

+ (id)applicationManifestFromJSON:(id)arg1 manifestURL:(id)arg2 documentURL:(id)arg3;
+ (BOOL)supportsSecureCoding;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

