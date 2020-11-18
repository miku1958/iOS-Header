//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSSet, NSString;

@interface _STVocabularyGenerationDiff : NSObject
{
    BOOL _isFullReset;
    NSSet *_deletedSiriIDs;
    NSArray *_updatedVocabularyItems;
    long long _countOfVocabularyItemsAfterApplying;
    NSString *_intentSlotName;
    NSString *_appBundleID;
}

@property (copy, nonatomic) NSString *appBundleID; // @synthesize appBundleID=_appBundleID;
@property (nonatomic) long long countOfVocabularyItemsAfterApplying; // @synthesize countOfVocabularyItemsAfterApplying=_countOfVocabularyItemsAfterApplying;
@property (copy, nonatomic) NSSet *deletedSiriIDs; // @synthesize deletedSiriIDs=_deletedSiriIDs;
@property (copy, nonatomic) NSString *intentSlotName; // @synthesize intentSlotName=_intentSlotName;
@property (nonatomic) BOOL isFullReset; // @synthesize isFullReset=_isFullReset;
@property (copy, nonatomic) NSArray *updatedVocabularyItems; // @synthesize updatedVocabularyItems=_updatedVocabularyItems;

- (void).cxx_destruct;
- (id)description;
- (BOOL)hasChanges;

@end

