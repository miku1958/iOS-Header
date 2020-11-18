//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MobileCoreServices/_LSQuery.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _LSApplicationIsInstalledQuery : _LSQuery
{
    NSString *_bundleIdentifier;
}

@property (readonly, copy, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;

+ (id)queryWithBundleIdentifier:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void)_enumerateWithXPCConnection:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

