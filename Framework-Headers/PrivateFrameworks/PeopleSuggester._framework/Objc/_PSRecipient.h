//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <PeopleSuggester/NSSecureCoding-Protocol.h>

@class CNContact, NSString;

@interface _PSRecipient : NSObject <NSSecureCoding>
{
    BOOL _familyHeuristic;
    NSString *_identifier;
    NSString *_handle;
    NSString *_displayName;
    CNContact *_contact;
    NSString *_senderHandle;
    NSString *_mostRecentTransportBundleId;
}

@property (strong, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property (readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property (nonatomic) BOOL familyHeuristic; // @synthesize familyHeuristic=_familyHeuristic;
@property (copy, nonatomic) NSString *handle; // @synthesize handle=_handle;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (copy, nonatomic) NSString *mostRecentTransportBundleId; // @synthesize mostRecentTransportBundleId=_mostRecentTransportBundleId;
@property (copy, nonatomic) NSString *senderHandle; // @synthesize senderHandle=_senderHandle;

+ (id)recipientForINPerson:(id)arg1 contactResolver:(id)arg2;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithCoder:(id)arg1;
- (id)initWithIdentifier:(id)arg1 handle:(id)arg2 contact:(id)arg3;
- (id)initWithIdentifier:(id)arg1 handle:(id)arg2 contact:(id)arg3 mostRecentTransportBundleId:(id)arg4;
- (id)initWithIdentifier:(id)arg1 handle:(id)arg2 displayName:(id)arg3 contact:(id)arg4;
- (id)initWithIdentifier:(id)arg1 senderHandle:(id)arg2 handle:(id)arg3 displayName:(id)arg4 contact:(id)arg5;
- (id)initWithIdentifier:(id)arg1 senderHandle:(id)arg2 handle:(id)arg3 displayName:(id)arg4 contact:(id)arg5 mostRecentTransportBundleId:(id)arg6;
- (BOOL)isEqual:(id)arg1;

@end

