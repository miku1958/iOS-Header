//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <ITMLKit/IKJSObject.h>

#import <StoreKitUI/SKUIJSRestrictions-Protocol.h>

@class SKUIClientContext;

@interface SKUIJSRestrictions : IKJSObject <SKUIJSRestrictions>
{
    SKUIClientContext *_clientContext;
}

- (void).cxx_destruct;
- (long long)_explicitRestrictionAlertTypeForTypeString:(id)arg1;
- (void)didDisplayExplicitRestrictionAlertOfType:(id)arg1;
- (id)initWithAppContext:(id)arg1 clientContext:(id)arg2;
- (void)isExplicitContentDisallowedInCurrentStoreFront:(id)arg1;
- (void)isExplicitContentRestrictedByDefaultInCurrentStoreFront:(id)arg1;
- (BOOL)isRestrictedApp:(id)arg1;
- (void)isRestrictionsPasscodeSet:(id)arg1;
- (void)presentExplicitRestrictionAlertIfNeededOfType:(id)arg1:(id)arg2;
- (void)setAllowExplicitContent;
- (void)shouldDisplayExplicitRestrictionAlertOfType:(id)arg1:(id)arg2;

@end
