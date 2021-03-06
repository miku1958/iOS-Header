//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <DocumentManagerCore/DOCFeatureState.h>

@class NSString;

@interface DOCFeatureStateFFSetting : DOCFeatureState
{
    NSString *_domainID;
    NSString *_featureID;
    long long _valueMode;
}

@property (strong) NSString *domainID; // @synthesize domainID=_domainID;
@property (strong) NSString *featureID; // @synthesize featureID=_featureID;
@property long long valueMode; // @synthesize valueMode=_valueMode;

- (void).cxx_destruct;
- (id)initWithDomainID:(id)arg1 featureID:(id)arg2 valueMode:(long long)arg3;

@end

