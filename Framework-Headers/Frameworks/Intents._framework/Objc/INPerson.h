//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Intents/INCacheableContainer-Protocol.h>
#import <Intents/INPersonExport-Protocol.h>
#import <Intents/INSpeakable-Protocol.h>
#import <Intents/NSCopying-Protocol.h>
#import <Intents/NSMutableCopying-Protocol.h>
#import <Intents/NSSecureCoding-Protocol.h>

@class INImage, INPersonHandle, NSArray, NSPersonNameComponents, NSString;

@interface INPerson : NSObject <INCacheableContainer, INSpeakable, INPersonExport, NSMutableCopying, NSCopying, NSSecureCoding>
{
    NSString *_displayName;
    NSPersonNameComponents *_nameComponents;
    NSString *_userInput;
    NSArray *_aliases;
    long long _suggestionType;
    NSArray *_alternatives;
    BOOL _isMe;
    NSString *_sourceAppBundleIdentifier;
    INPersonHandle *_personHandle;
    INImage *_image;
    NSString *_contactIdentifier;
    NSString *_customIdentifier;
    NSString *_relationship;
}

@property (readonly, copy, nonatomic) NSArray *aliases;
@property (copy, nonatomic) NSArray *aliases; // @synthesize aliases=_aliases;
@property (readonly, copy, nonatomic) NSArray *alternativeSiriMatches;
@property (readonly, nonatomic) NSArray *alternativeSpeakableMatches;
@property (copy, nonatomic) NSArray *alternatives; // @synthesize alternatives=_alternatives;
@property (copy, nonatomic) NSString *contactIdentifier; // @synthesize contactIdentifier=_contactIdentifier;
@property (copy, nonatomic) NSString *customIdentifier; // @synthesize customIdentifier=_customIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *description;
@property (copy, nonatomic) NSString *displayName;
@property (readonly, copy, nonatomic) NSString *firstName;
@property (readonly, copy, nonatomic) NSString *fullName;
@property (copy, nonatomic) NSString *handle; // @dynamic handle;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *identifier;
@property (copy, nonatomic) INImage *image; // @synthesize image=_image;
@property (readonly, nonatomic) BOOL isMe;
@property (nonatomic) BOOL isMe; // @synthesize isMe=_isMe;
@property (readonly, copy, nonatomic) NSString *lastName;
@property (copy, nonatomic) NSPersonNameComponents *nameComponents; // @synthesize nameComponents=_nameComponents;
@property (copy, nonatomic) INPersonHandle *personHandle; // @synthesize personHandle=_personHandle;
@property (readonly, nonatomic) NSString *pronunciationHint;
@property (copy, nonatomic) NSString *relationship; // @synthesize relationship=_relationship;
@property (readonly, copy, nonatomic) NSArray *siriMatches;
@property (readonly, nonatomic) NSString *spokenPhrase;
@property (readonly, nonatomic) long long suggestionType;
@property (nonatomic) long long suggestionType; // @synthesize suggestionType=_suggestionType;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly) Class superclass;
@property (readonly, copy, nonatomic) NSString *userIdentifier;
@property (readonly, copy, nonatomic) NSString *userName;
@property (readonly, copy, nonatomic) NSString *userURIString;
@property (readonly, nonatomic) NSString *vocabularyIdentifier;

+ (id)expectedCNContactKeys;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)_aliases;
- (id)_dictionaryRepresentation;
- (id)_displayName;
- (id)_initWithUserInput:(id)arg1 personHandle:(id)arg2 nameComponents:(id)arg3 displayName:(id)arg4 image:(id)arg5 contactIdentifier:(id)arg6 customIdentifier:(id)arg7 relationship:(id)arg8 aliases:(id)arg9 suggestionType:(long long)arg10 isMe:(BOOL)arg11 alternatives:(id)arg12 sourceAppBundleIdentifier:(id)arg13;
- (id)_intents_cacheableObjects;
- (void)_intents_updateContainerWithCache:(id)arg1;
- (id)_sourceAppBundleIdentifier;
- (id)_userInput;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionAtIndent:(unsigned long long)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithContact:(id)arg1;
- (id)initWithHandle:(id)arg1 displayName:(id)arg2 contactIdentifier:(id)arg3;
- (id)initWithHandle:(id)arg1 nameComponents:(id)arg2 contactIdentifier:(id)arg3;
- (id)initWithHandle:(id)arg1 nameComponents:(id)arg2 displayName:(id)arg3 image:(id)arg4 contactIdentifier:(id)arg5;
- (id)initWithPersonHandle:(id)arg1 nameComponents:(id)arg2 displayName:(id)arg3 image:(id)arg4 contactIdentifier:(id)arg5 customIdentifier:(id)arg6;
- (id)initWithPersonHandle:(id)arg1 nameComponents:(id)arg2 displayName:(id)arg3 image:(id)arg4 contactIdentifier:(id)arg5 customIdentifier:(id)arg6 aliases:(id)arg7 suggestionType:(long long)arg8;
- (BOOL)isEqual:(id)arg1;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)spokenPhrases;

@end

