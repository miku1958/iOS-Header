//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <TelephonyPreferences/TPSResponse.h>

@interface TPSCallingLineIdRestrictionResponse : TPSResponse
{
    BOOL _editable;
    long long _state;
}

@property (readonly, nonatomic, getter=isEditable) BOOL editable; // @synthesize editable=_editable;
@property (readonly, nonatomic) long long state; // @synthesize state=_state;

+ (id)unarchivedObjectClasses;
+ (id)unarchivedObjectFromData:(id)arg1 error:(id *)arg2;
- (id)archivedDataWithError:(id *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)debugDescription;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithSubscriptionContext:(id)arg1 error:(id)arg2;
- (id)initWithsubscriptionContext:(id)arg1 editable:(BOOL)arg2 state:(long long)arg3 error:(id)arg4;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToResponse:(id)arg1;

@end

