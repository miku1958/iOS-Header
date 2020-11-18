//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DeviceManagement/DMFAppRequest.h>

@interface DMFInstallAppRequest : DMFAppRequest
{
    BOOL _allowFreePurchases;
    unsigned long long _licenseType;
}

@property (nonatomic) BOOL allowFreePurchases; // @synthesize allowFreePurchases=_allowFreePurchases;
@property (nonatomic) unsigned long long licenseType; // @synthesize licenseType=_licenseType;

+ (BOOL)supportsSecureCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end
