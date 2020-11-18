//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <StoreKitUI/JSExport-Protocol.h>

@class JSValue, NSString;

@protocol SKUIJSRestrictions <JSExport>
- (void)didDisplayExplicitRestrictionAlertOfType:(NSString *)arg1;
- (void)isExplicitContentDisallowedInCurrentStoreFront:(JSValue *)arg1;
- (void)isExplicitContentRestrictedByDefaultInCurrentStoreFront:(JSValue *)arg1;
- (BOOL)isRestrictedApp:(NSString *)arg1;
- (void)isRestrictionsPasscodeSet:(JSValue *)arg1;
- (void)presentExplicitRestrictionAlertIfNeededOfType:(NSString *)arg1:(JSValue *)arg2;
- (void)setAllowExplicitContent;
- (void)shouldDisplayExplicitRestrictionAlertOfType:(NSString *)arg1:(JSValue *)arg2;
@end
