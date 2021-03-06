//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray, NSMutableSet, NSString, NSURL, PSSpecifier, PSSpecifierAction;

@interface PSSearchEntry : NSObject
{
    PSSpecifier *_specifier;
    NSString *_name;
    NSURL *_url;
    BOOL _isRootURL;
    NSString *_identifier;
    NSString *_sectionIdentifier;
    BOOL _isSection;
    BOOL _hasDetailController;
    BOOL _hasListController;
    NSArray *_additionalDetailTextComponents;
    PSSearchEntry *_parentEntry;
    NSMutableSet *_childEntries;
    NSString *_groupName;
    NSString *_plistName;
    NSString *_bundleName;
    NSString *_manifestBundleName;
    NSMutableArray *_keywords;
    PSSpecifierAction *_action;
    PSSpecifier *_groupSpecifier;
}

@property (strong, nonatomic) PSSpecifierAction *action; // @synthesize action=_action;
@property (copy, nonatomic) NSString *bundleName; // @synthesize bundleName=_bundleName;
@property (readonly, nonatomic) NSMutableSet *childEntries; // @synthesize childEntries=_childEntries;
@property (copy, nonatomic) NSString *groupName; // @synthesize groupName=_groupName;
@property (strong, nonatomic) PSSpecifier *groupSpecifier; // @synthesize groupSpecifier=_groupSpecifier;
@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) BOOL isRootURL; // @synthesize isRootURL=_isRootURL;
@property (readonly, nonatomic) NSMutableArray *keywords; // @synthesize keywords=_keywords;
@property (copy, nonatomic) NSString *manifestBundleName; // @synthesize manifestBundleName=_manifestBundleName;
@property (readonly, copy, nonatomic) NSString *name;
@property (weak, nonatomic) PSSearchEntry *parentEntry; // @synthesize parentEntry=_parentEntry;
@property (copy, nonatomic) NSString *plistName; // @synthesize plistName=_plistName;
@property (readonly, copy, nonatomic) NSString *sectionIdentifier; // @synthesize sectionIdentifier=_sectionIdentifier;
@property (readonly, nonatomic) PSSpecifier *specifier; // @synthesize specifier=_specifier;
@property (readonly, copy, nonatomic) NSURL *url;

+ (id)schemeNameOverride;
+ (void)setSchemeNameOverride:(id)arg1;
- (void).cxx_destruct;
- (id)_prefsURLIsRoot:(BOOL *)arg1;
- (BOOL)_specifier:(id)arg1 hasDetailController:(BOOL)arg2;
- (id)ancestorEntries;
- (id)debugDescription;
- (id)description;
- (id)detailTextWithEffectiveTitle:(id *)arg1;
- (BOOL)finishIndexing;
- (BOOL)hasDetailController;
- (BOOL)hasFinishedIndexing;
- (BOOL)hasListController;
- (id)hierarchyDescription;
- (id)initWithSpecifier:(id)arg1 parent:(id)arg2;
- (BOOL)isRootEntry;
- (BOOL)isRootUrl;
- (BOOL)isSectionEntry;
- (id)recursiveDescription;
- (id)recursiveDescriptionForLevel:(unsigned long long)arg1;
- (id)rootEntry;
- (id)sectionEntry;

@end

