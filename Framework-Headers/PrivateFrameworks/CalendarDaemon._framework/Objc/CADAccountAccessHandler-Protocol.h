//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSSet, NSString;

@protocol CADAccountAccessHandler
- (BOOL)isAccountManaged:(NSString *)arg1;
- (BOOL)isActionAllowed:(unsigned long long)arg1 forAccountIdentifier:(NSString *)arg2;
- (void)reset;
- (NSSet *)restrictedCalendarRowIDsForAction:(unsigned long long)arg1;
@end

