//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Foundation/NSSecureCoding-Protocol.h>

@class NSString;

@interface _NSCloudSharingDescriptor : NSObject <NSSecureCoding>
{
    long long _operation;
    NSString *_sharedContentType;
    long long _numberOfInvitations;
    BOOL _invitationsSentViaThirdPartyService;
    BOOL _publicShare;
}

@property BOOL invitationsSentViaThirdPartyService; // @synthesize invitationsSentViaThirdPartyService=_invitationsSentViaThirdPartyService;
@property long long numberOfInvitations; // @synthesize numberOfInvitations=_numberOfInvitations;
@property long long operation; // @synthesize operation=_operation;
@property BOOL publicShare; // @synthesize publicShare=_publicShare;
@property (copy) NSString *sharedContentType; // @synthesize sharedContentType=_sharedContentType;

+ (BOOL)supportsSecureCoding;
- (id)_variantSubstrings;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

