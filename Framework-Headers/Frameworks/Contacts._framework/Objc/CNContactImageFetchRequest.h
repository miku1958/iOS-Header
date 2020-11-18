//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Contacts/CNContactImageRequest-Protocol.h>

@class NSArray, NSPersistentStoreRequest, NSString;

@interface CNContactImageFetchRequest : NSObject <CNContactImageRequest>
{
    NSArray *_contactIdentifiers;
}

@property (strong, nonatomic) NSArray *contactIdentifiers; // @synthesize contactIdentifiers=_contactIdentifiers;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSPersistentStoreRequest *persistentStoreRequest;
@property (readonly) Class superclass;

+ (id)predicateForImagesMatchingContactIdentifiers:(id)arg1;
+ (id)recentImagesRequestForContactIdenfitiers:(id)arg1;
- (void).cxx_destruct;
- (id)initWithContactIdentifiers:(id)arg1;

@end
