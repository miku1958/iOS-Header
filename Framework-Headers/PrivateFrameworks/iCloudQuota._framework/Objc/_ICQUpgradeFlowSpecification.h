//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iCloudQuota/_ICQFlowSpecification.h>

@class NSDictionary;

@interface _ICQUpgradeFlowSpecification : _ICQFlowSpecification
{
    NSDictionary *_serverDict;
    BOOL _needsWiFi;
    long long _offerType;
}

@property (nonatomic) BOOL needsWiFi; // @synthesize needsWiFi=_needsWiFi;
@property (nonatomic) long long offerType; // @synthesize offerType=_offerType;
@property (readonly, nonatomic) NSDictionary *serverDict;

+ (id)_upgradePageIdentifierForError:(id)arg1;
+ (id)sanitizedUpgradeFlowServerDict:(id)arg1;
+ (id)upgradeFlowSpecificationSampleForLevel:(long long)arg1;
- (void).cxx_destruct;
- (id)initWithServerDictionary:(id)arg1;
- (id)upgradeFailurePage;
- (id)upgradeFailurePageForNetwork;
- (id)upgradePageForError:(id)arg1;
- (id)upgradePageForSuccess:(BOOL)arg1;
- (id)upgradeSuccessPage;
- (id)upgradeSuccessPageForWiFi;

@end

