//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFMessageDestination.h>

@class HMDAccount;

@interface HMDRemoteAccountMessageDestination : HMFMessageDestination
{
    BOOL _multicast;
    HMDAccount *_account;
}

@property (readonly, nonatomic) HMDAccount *account; // @synthesize account=_account;
@property (readonly, nonatomic, getter=isMulticast) BOOL multicast; // @synthesize multicast=_multicast;

+ (id)allMessageDestinations;
+ (id)shortDescription;
- (void).cxx_destruct;
- (id)debugDescription;
- (id)description;
- (id)descriptionWithPointer:(BOOL)arg1;
- (unsigned long long)hash;
- (id)initWithTarget:(id)arg1;
- (id)initWithTarget:(id)arg1 account:(id)arg2 multicast:(BOOL)arg3;
- (BOOL)isEqual:(id)arg1;
- (id)shortDescription;

@end
