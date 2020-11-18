//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreServices/_LSQuery.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _LSApplicationIsInstalledQuery : _LSQuery
{
    NSString *_bundleIdentifier;
}

@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;

+ (id)queryWithBundleIdentifier:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_enumerateWithXPCConnection:(id)arg1 block:(CDUnknownBlockType)arg2;
- (BOOL)_requiresDatabaseMappingEntitlement;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
