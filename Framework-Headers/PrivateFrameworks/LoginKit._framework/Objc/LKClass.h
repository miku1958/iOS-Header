//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <LoginKit/LKStudentProviding-Protocol.h>
#import <LoginKit/NSSecureCoding-Protocol.h>

@class NSArray, NSMutableDictionary, NSNumber, NSString;

@interface LKClass : NSObject <LKStudentProviding, NSSecureCoding>
{
    NSMutableDictionary *_avatarNameSimilarityDictionary;
    NSMutableDictionary *_givenNameSimilarityDictionary;
    NSArray *_students;
    NSString *_classDescription;
    NSString *_className;
    NSString *_classImageURL;
    NSNumber *_classID;
    NSArray *_instructors;
    NSString *_sortDescriptor;
}

@property (strong) NSString *classDescription; // @synthesize classDescription=_classDescription;
@property (strong) NSNumber *classID; // @synthesize classID=_classID;
@property (strong) NSString *classImageURL; // @synthesize classImageURL=_classImageURL;
@property (strong) NSString *className; // @synthesize className=_className;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong) NSArray *instructors; // @synthesize instructors=_instructors;
@property (strong) NSString *sortDescriptor; // @synthesize sortDescriptor=_sortDescriptor;
@property (copy, nonatomic) NSArray *students; // @synthesize students=_students;
@property (readonly) Class superclass;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)_updateNamingSimilarityInfoForUser:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithClassDictionary:(id)arg1 usersByUserIdentifier:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithStudents:(id)arg1 instructors:(id)arg2 className:(id)arg3 classID:(id)arg4;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToLKClass:(id)arg1;
- (id)sortUsers:(id)arg1;

@end

