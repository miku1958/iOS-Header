//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKASMUser-Protocol.h>

@class NSString;
@protocol CRKASMNameComponents, CRKClassKitPerson;

@interface CRKASMConcreteUser : NSObject <CRKASMUser>
{
    NSString *_identifier;
    NSString *_appleID;
    id<CRKASMNameComponents> _nameComponents;
    id<CRKClassKitPerson> _backingPerson;
}

@property (readonly, copy, nonatomic) NSString *appleID; // @synthesize appleID=_appleID;
@property (readonly, nonatomic) id<CRKClassKitPerson> backingPerson; // @synthesize backingPerson=_backingPerson;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) id<CRKASMNameComponents> nameComponents; // @synthesize nameComponents=_nameComponents;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithBackingPerson:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToConcreteUser:(id)arg1;

@end

