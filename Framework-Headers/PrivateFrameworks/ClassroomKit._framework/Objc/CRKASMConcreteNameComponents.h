//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKASMNameComponents-Protocol.h>

@class NSString;

@interface CRKASMConcreteNameComponents : NSObject <CRKASMNameComponents>
{
    NSString *_givenName;
    NSString *_phoneticGivenName;
    NSString *_familyName;
    NSString *_phoneticFamilyName;
    NSString *_fullName;
    NSString *_phoneticFullName;
    NSString *_monogram;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *familyName; // @synthesize familyName=_familyName;
@property (readonly, copy, nonatomic) NSString *fullName; // @synthesize fullName=_fullName;
@property (readonly, copy, nonatomic) NSString *givenName; // @synthesize givenName=_givenName;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *monogram; // @synthesize monogram=_monogram;
@property (readonly, copy, nonatomic) NSString *phoneticFamilyName; // @synthesize phoneticFamilyName=_phoneticFamilyName;
@property (readonly, copy, nonatomic) NSString *phoneticFullName; // @synthesize phoneticFullName=_phoneticFullName;
@property (readonly, copy, nonatomic) NSString *phoneticGivenName; // @synthesize phoneticGivenName=_phoneticGivenName;
@property (readonly) Class superclass;

+ (id)makeFullNameWithComponents:(id)arg1;
+ (id)makeMonogramWithComponents:(id)arg1;
+ (id)makeNameComponentsForPerson:(id)arg1;
+ (id)makePhoneticFullNameWithComponents:(id)arg1;
- (void).cxx_destruct;
- (id)initWithPerson:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
