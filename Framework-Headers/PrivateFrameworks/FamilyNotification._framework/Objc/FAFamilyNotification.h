//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FamilyNotification/NSSecureCoding-Protocol.h>

@class NSData, NSDate, NSDictionary, NSNumber, NSString, NSURL;

@interface FAFamilyNotification : NSObject <NSSecureCoding>
{
    BOOL _shouldPersistWhenActivated;
    BOOL _shouldPersistWhenDismissed;
    BOOL _hasActionButton;
    NSString *_identifier;
    NSString *_title;
    NSString *_informativeText;
    NSDate *_relevanceDate;
    NSDate *_expiryDate;
    NSNumber *_familyMemberDSID;
    unsigned long long _displayStyle;
    NSString *_actionButtonLabel;
    NSString *_otherButtonLabel;
    NSString *_unlockActionLabel;
    NSURL *_activateActionURL;
    NSURL *_dismissActionlURL;
    NSURL *_launchActionURL;
    NSData *_launchActionArguments;
    NSDictionary *_userInfo;
    NSString *_uuid;
    NSString *_clientIdentifier;
    NSString *_delegateMachServiceName;
}

@property (copy) NSString *actionButtonLabel; // @synthesize actionButtonLabel=_actionButtonLabel;
@property (copy) NSURL *activateActionURL; // @synthesize activateActionURL=_activateActionURL;
@property (copy) NSString *clientIdentifier; // @synthesize clientIdentifier=_clientIdentifier;
@property (copy) NSString *delegateMachServiceName; // @synthesize delegateMachServiceName=_delegateMachServiceName;
@property (copy) NSURL *dismissActionlURL; // @synthesize dismissActionlURL=_dismissActionlURL;
@property unsigned long long displayStyle; // @synthesize displayStyle=_displayStyle;
@property (copy) NSDate *expiryDate; // @synthesize expiryDate=_expiryDate;
@property (copy) NSNumber *familyMemberDSID; // @synthesize familyMemberDSID=_familyMemberDSID;
@property BOOL hasActionButton; // @synthesize hasActionButton=_hasActionButton;
@property (copy) NSString *identifier; // @synthesize identifier=_identifier;
@property (copy) NSString *informativeText; // @synthesize informativeText=_informativeText;
@property (copy) NSData *launchActionArguments; // @synthesize launchActionArguments=_launchActionArguments;
@property (copy) NSURL *launchActionURL; // @synthesize launchActionURL=_launchActionURL;
@property (copy) NSString *otherButtonLabel; // @synthesize otherButtonLabel=_otherButtonLabel;
@property (copy) NSDate *relevanceDate; // @synthesize relevanceDate=_relevanceDate;
@property BOOL shouldPersistWhenActivated; // @synthesize shouldPersistWhenActivated=_shouldPersistWhenActivated;
@property BOOL shouldPersistWhenDismissed; // @synthesize shouldPersistWhenDismissed=_shouldPersistWhenDismissed;
@property (copy) NSString *title; // @synthesize title=_title;
@property (copy) NSString *unlockActionLabel; // @synthesize unlockActionLabel=_unlockActionLabel;
@property (copy) NSDictionary *userInfo; // @synthesize userInfo=_userInfo;
@property (copy) NSString *uuid; // @synthesize uuid=_uuid;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)cacheDictionaryRepresentation;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)init;
- (id)initWithCacheDictionaryRepresentation:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

