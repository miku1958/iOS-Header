//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SoftwareUpdateServices/SUDownloadMetadata.h>

@interface SUMutableDownloadMetadata : SUDownloadMetadata
{
}

@property (nonatomic) int downloadFeeAgreementStatus; // @dynamic downloadFeeAgreementStatus;
@property (nonatomic) BOOL enforceWifiOnlyOverride; // @dynamic enforceWifiOnlyOverride;
@property (nonatomic) int termsAndConditionsAgreementStatus; // @dynamic termsAndConditionsAgreementStatus;

- (void)applyDownloadPolicy:(id)arg1;
- (id)initWithMetadata:(id)arg1;

@end
