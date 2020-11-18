//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSPredicate.h>

#import <Contacts/NSCopying-Protocol.h>

@class NSArray;

@interface CNPredicate : NSPredicate <NSCopying>
{
    NSPredicate *_cn_predicate;
    BOOL _augmentMainStoreResults;
    NSArray *_mainStoreContactIdentifiers;
}

@property (nonatomic) BOOL augmentMainStoreResults; // @synthesize augmentMainStoreResults=_augmentMainStoreResults;
@property (strong, nonatomic) NSArray *mainStoreContactIdentifiers; // @synthesize mainStoreContactIdentifiers=_mainStoreContactIdentifiers;

+ (id)_convertSuggestions:(id)arg1 withSortOrder:(long long)arg2 mutableObjects:(BOOL)arg3;
- (void)_convertContactMatches:(id)arg1 withService:(id)arg2 intoSuggestions:(id)arg3;
- (id)cn_predicate;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (BOOL)evaluateWithObject:(id)arg1;
- (BOOL)evaluateWithObject:(id)arg1 substitutionVariables:(id)arg2;
- (id)init;
- (id)initWithPredicate:(id)arg1;
- (void)mainStoreDidFetchContacts:(id)arg1 unifiedFetch:(BOOL)arg2;
- (id)predicateFormat;
- (id)suggestedContactsWithSortOrder:(long long)arg1 keysToFetch:(id)arg2 mutableObjects:(BOOL)arg3 service:(id)arg4 error:(id *)arg5;

@end

