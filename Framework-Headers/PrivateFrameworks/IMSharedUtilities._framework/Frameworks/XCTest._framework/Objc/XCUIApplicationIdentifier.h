//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTest/NSCopying-Protocol.h>

@class NSString;

@interface XCUIApplicationIdentifier : NSObject <NSCopying>
{
    NSString *_bundleIdentifier;
    NSString *_path;
}

@property (readonly) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property (readonly) NSString *path; // @synthesize path=_path;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)hash;
- (id)initWithBundleIdentifier:(id)arg1 path:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end

