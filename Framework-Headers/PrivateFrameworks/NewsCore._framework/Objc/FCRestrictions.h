//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface FCRestrictions : NSObject
{
    BOOL _testing;
    long long _buildVersionNumber;
    long long _isExplicitContentAllowedOverride;
}

@property (nonatomic) long long buildVersionNumber; // @synthesize buildVersionNumber=_buildVersionNumber;
@property (readonly, nonatomic) BOOL isExplicitContentAllowed;
@property (nonatomic) long long isExplicitContentAllowedOverride; // @synthesize isExplicitContentAllowedOverride=_isExplicitContentAllowedOverride;
@property (nonatomic) BOOL testing; // @synthesize testing=_testing;

+ (long long)integerRepresentationOfShortVersionString:(id)arg1;
+ (id)sharedInstance;
- (id)init;
- (BOOL)isContentAllowedInStorefrontID:(id)arg1 withAllowedStorefrontIDs:(id)arg2 blockedStorefrontIDs:(id)arg3;
- (BOOL)isContentBlockedInStorefrontID:(id)arg1 withAllowedStorefrontIDs:(id)arg2 blockedStorefrontIDs:(id)arg3;
- (BOOL)isNewsVersionAllowed:(long long)arg1;
- (BOOL)isNewsVersionAllowedWithMinNewsVersion:(long long)arg1 maxNewsVersion:(long long)arg2;
- (void)t_startForcingExplicitContentDisallowed;
- (void)t_stopForcingExplicitContentDisallowed;

@end

