//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface MPSubscriptionStatusPlaybackInformation : NSObject
{
    id _subscriptionStatusObject;
    BOOL _definitiveInformation;
    BOOL _hasPlaybackCapability;
    BOOL _requiresCarrierManualVerification;
    BOOL _shouldUseLease;
    BOOL _shouldUseAccountLessStreaming;
}

@property (readonly, nonatomic, getter=isDefinitiveInformation) BOOL definitiveInformation; // @synthesize definitiveInformation=_definitiveInformation;
@property (readonly, nonatomic) BOOL hasPlaybackCapability; // @synthesize hasPlaybackCapability=_hasPlaybackCapability;
@property (readonly, nonatomic) BOOL requiresCarrierManualVerification; // @synthesize requiresCarrierManualVerification=_requiresCarrierManualVerification;
@property (readonly, nonatomic) BOOL shouldUseAccountLessStreaming; // @synthesize shouldUseAccountLessStreaming=_shouldUseAccountLessStreaming;
@property (readonly, nonatomic) BOOL shouldUseLease; // @synthesize shouldUseLease=_shouldUseLease;

- (void).cxx_destruct;
- (id)description;
- (id)initWithICSubscriptionStatus:(id)arg1;
- (id)initWithSubscriptionStatus:(id)arg1;

@end

