//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MobileCoreServices/_LSQuery.h>

__attribute__((visibility("hidden")))
@interface _LSCurrentBundleProxyQuery : _LSQuery
{
}

+ (id)currentBundleProxyQuery;
+ (BOOL)supportsSecureCoding;
- (void)_enumerateWithXPCConnection:(id)arg1 block:(CDUnknownBlockType)arg2;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
