//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudKit/CKShare.h>

@class NSArray;

@interface CKShare (IC)

@property (readonly, nonatomic) NSArray *ic_nonCurrentUserParticipants;
@property (readonly, nonatomic) unsigned long long ic_nonOwnerAcceptedParticipantsCount;
@property (readonly, nonatomic) unsigned long long ic_nonOwnerInvitedParticipantsCount;

- (unsigned long long)_nonOwnerParticipantsCountWithAcceptanceStatus:(long long)arg1;
@end

