//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Contacts/CNPredicate.h>

#import <Contacts/CNSuggestedContactPredicate-Protocol.h>

@class CNContact, NSString;

__attribute__((visibility("hidden")))
@interface CNLinkedContactsPredicate : CNPredicate <CNSuggestedContactPredicate>
{
    CNContact *_contact;
    NSString *_contactIdentifier;
}

@property (readonly, copy, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property (readonly, copy, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContact:(id)arg1;
- (id)initWithContactIdentifier:(id)arg1;

@end

