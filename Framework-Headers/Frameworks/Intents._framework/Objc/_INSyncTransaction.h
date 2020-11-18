//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, _INVocabularyGenerationDocument, _INVocabularyStoreManager;

@interface _INSyncTransaction : NSObject
{
    NSString *_pathToLatestVocabularyDocument;
    NSString *_pathToStagedVocabularyDocument;
    NSString *_pathToSentVocabularyDocument;
    NSString *_syncSlot;
    _INVocabularyStoreManager *_storeManager;
    BOOL _deleteExistingVocabulary;
    BOOL _vocabularyUpdatesEnabled;
    BOOL _fullResetRequired;
    _INVocabularyGenerationDocument *_latest;
    _INVocabularyGenerationDocument *_sent;
}

@property (nonatomic) BOOL fullResetRequired; // @synthesize fullResetRequired=_fullResetRequired;
@property (readonly, nonatomic) _INVocabularyGenerationDocument *latestVocabularyDocument; // @synthesize latestVocabularyDocument=_latest;
@property (readonly, nonatomic) _INVocabularyGenerationDocument *sentVocabularyDocument; // @synthesize sentVocabularyDocument=_sent;

+ (id)beginTransactionForBundleID:(id)arg1 bundlePath:(id)arg2 syncSlot:(id)arg3;
- (void).cxx_destruct;
- (void)_beginTransaction;
- (void)_deleteInvalidSavedData;
- (id)_emptySentDocument;
- (id)_initWithVocabularyManager:(id)arg1 syncSlot:(id)arg2 deleteExistingVocabulary:(BOOL)arg3;
- (BOOL)_isMissingLatestFileError:(id)arg1;
- (void)_saveAndCleanup;
- (id)calculateDiff;
- (void)endTransactionWithFinalAnchor:(id)arg1;

@end

