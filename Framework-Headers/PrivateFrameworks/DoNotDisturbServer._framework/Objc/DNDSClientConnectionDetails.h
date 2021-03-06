//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <DoNotDisturbServer/NSCopying-Protocol.h>
#import <DoNotDisturbServer/NSMutableCopying-Protocol.h>

@class NSSet, NSUUID;

@interface DNDSClientConnectionDetails : NSObject <NSCopying, NSMutableCopying>
{
    NSUUID *_interruptionInvalidationAssertionUUID;
    NSSet *_assertionUpdateClientIdentifiers;
    BOOL _wantsStateUpdates;
    BOOL _wantsSettingsUpdates;
}

@property (readonly, copy, nonatomic) NSSet *assertionUpdateClientIdentifiers; // @synthesize assertionUpdateClientIdentifiers=_assertionUpdateClientIdentifiers;
@property (readonly, copy, nonatomic) NSUUID *interruptionInvalidationAssertionUUID; // @synthesize interruptionInvalidationAssertionUUID=_interruptionInvalidationAssertionUUID;
@property (readonly, nonatomic) BOOL wantsSettingsUpdates; // @synthesize wantsSettingsUpdates=_wantsSettingsUpdates;
@property (readonly, nonatomic) BOOL wantsStateUpdates; // @synthesize wantsStateUpdates=_wantsStateUpdates;

- (void).cxx_destruct;
- (id)_initWithDetails:(id)arg1;
- (id)_initWithInterruptionInvalidationAssertionUUID:(id)arg1 assertionUpdateClientIdentifiers:(id)arg2 wantsStateUpdates:(BOOL)arg3 wantsSettingsUpdates:(BOOL)arg4;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;

@end

