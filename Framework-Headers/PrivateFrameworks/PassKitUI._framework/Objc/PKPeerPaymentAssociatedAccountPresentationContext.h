//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PKFamilyMember, PKPaymentTransaction;

@interface PKPeerPaymentAssociatedAccountPresentationContext : NSObject
{
    PKFamilyMember *_member;
    PKPaymentTransaction *_transaction;
}

@property (strong, nonatomic) PKFamilyMember *member; // @synthesize member=_member;
@property (strong, nonatomic) PKPaymentTransaction *transaction; // @synthesize transaction=_transaction;

- (void).cxx_destruct;
- (id)description;
- (id)initWithPKFamilyMember:(id)arg1 options:(id)arg2;
- (id)initWithPKFamilyMember:(id)arg1 transaction:(id)arg2;

@end
