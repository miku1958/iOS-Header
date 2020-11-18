//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AvatarUI/NSObject-Protocol.h>

@class NSString;
@protocol AVTCacheableResourceChangeToken, AVTCacheableResourceScope;

@protocol AVTCacheableResource <NSObject>
- (unsigned long long)costForScope:(id<AVTCacheableResourceScope>)arg1;
- (BOOL)requiresEncryption;
- (NSString *)volatileIdentifierForScope:(id<AVTCacheableResourceScope>)arg1;

@optional
- (NSString *)persistentIdentifierForScope:(id<AVTCacheableResourceScope>)arg1;
- (id<AVTCacheableResourceChangeToken>)tokenForObservingChangesWithHandler:(void (^)(void))arg1;
@end

