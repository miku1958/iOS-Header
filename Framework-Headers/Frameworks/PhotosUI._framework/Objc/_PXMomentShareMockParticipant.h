//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PhotosUICore/PXCMMInvitationParticipant-Protocol.h>

@class NSString;

@interface _PXMomentShareMockParticipant : NSObject <PXCMMInvitationParticipant>
{
    NSString *emailAddressString;
    NSString *phoneNumberString;
    NSString *_localizedName;
    NSString *_firstName;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *emailAddressString; // @synthesize emailAddressString;
@property (strong, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSString *localizedName; // @synthesize localizedName=_localizedName;
@property (readonly, nonatomic) NSString *phoneNumberString; // @synthesize phoneNumberString;
@property (readonly) Class superclass;

- (void).cxx_destruct;

@end
