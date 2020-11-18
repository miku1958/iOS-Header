//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ContactsUI/CNMeCardSharingNameProvider-Protocol.h>

@class CNContact, NSString;

@interface CNMeCardSharingContactNameProvider : NSObject <CNMeCardSharingNameProvider>
{
    CNContact *_contact;
}

@property (readonly, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

+ (id)descriptorForRequiredKeys;
- (void).cxx_destruct;
- (id)familyName;
- (id)givenName;
- (id)initWithContact:(id)arg1;
- (id)middleName;
- (id)nickname;

@end
