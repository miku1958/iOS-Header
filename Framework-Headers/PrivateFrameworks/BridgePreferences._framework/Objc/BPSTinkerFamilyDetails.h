//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FAFamilyMember;

@interface BPSTinkerFamilyDetails : NSObject
{
    FAFamilyMember *_tinkerFamilyMember;
    FAFamilyMember *_pairingParentFamilyMember;
    FAFamilyMember *_organizerParentFamilyMember;
}

@property (strong, nonatomic) FAFamilyMember *organizerParentFamilyMember; // @synthesize organizerParentFamilyMember=_organizerParentFamilyMember;
@property (strong, nonatomic) FAFamilyMember *pairingParentFamilyMember; // @synthesize pairingParentFamilyMember=_pairingParentFamilyMember;
@property (strong, nonatomic) FAFamilyMember *tinkerFamilyMember; // @synthesize tinkerFamilyMember=_tinkerFamilyMember;

- (void).cxx_destruct;

@end

