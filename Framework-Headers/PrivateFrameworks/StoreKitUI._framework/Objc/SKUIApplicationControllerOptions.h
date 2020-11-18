//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <StoreKitUI/NSCopying-Protocol.h>
#import <StoreKitUI/NSMutableCopying-Protocol.h>

@interface SKUIApplicationControllerOptions : NSObject <NSCopying, NSMutableCopying>
{
    BOOL _supportsFullApplicationReload;
    long long _tabBarControllerStyle;
    BOOL _pageRenderMetricsEnabled;
    BOOL _requiresLocalBootstrapScript;
    BOOL _bootstrapScriptFallbackEnabled;
    double _bootstrapScriptFallbackMaximumAge;
    double _bootstrapScriptTimeoutInterval;
    BOOL _useTransientStorageForTests;
}

@property (readonly, nonatomic, getter=isBootstrapScriptFallbackEnabled) BOOL bootstrapScriptFallbackEnabled;
@property (readonly, nonatomic) double bootstrapScriptFallbackMaximumAge;
@property (readonly, nonatomic) double bootstrapScriptTimeoutInterval;
@property (readonly, nonatomic) BOOL pageRenderMetricsEnabled;
@property (readonly, nonatomic) BOOL requiresLocalBootstrapScript;
@property (readonly, nonatomic) BOOL supportsFullApplicationReload;
@property (readonly, nonatomic) long long tabBarControllerStyle;
@property (readonly, nonatomic) BOOL useTransientStorageForTests;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)init;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end

