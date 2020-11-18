//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class CUIMutableCommonAssetStorage, CoreThemeDocument, NSArray, NSMutableArray, NSString, NSThread, NSUUID, TDLogger;

@interface TDDistiller : NSObject
{
    CoreThemeDocument *_document;
    CUIMutableCommonAssetStorage *_assetStore;
    NSMutableArray *_renditionEntries;
    NSArray *_changedProductions;
    NSArray *_mainThreadPerformRunLoopModes;
    int _fileCompression;
    BOOL _dontPackRenditionsBeforeDistilling;
    BOOL _incremental;
    BOOL _cancelled;
    BOOL _successful;
    BOOL _finished;
    NSString *_assetStoreVersionString;
    long long _assetStoreVersionNumber;
    TDLogger *_logger;
    NSString *_accumulatedErrorDescription;
    NSThread *_callbackThread;
    CDUnknownBlockType _completionHandler;
}

@property (strong, nonatomic) NSString *accumulatedErrorDescription; // @synthesize accumulatedErrorDescription=_accumulatedErrorDescription;
@property long long assetStoreVersionNumber; // @synthesize assetStoreVersionNumber=_assetStoreVersionNumber;
@property (copy) NSString *assetStoreVersionString; // @synthesize assetStoreVersionString=_assetStoreVersionString;
@property (strong) NSThread *callbackThread; // @synthesize callbackThread=_callbackThread;
@property (getter=isCancelled) BOOL cancelled; // @synthesize cancelled=_cancelled;
@property (copy) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (nonatomic) BOOL dontPackRenditionsBeforeDistilling; // @synthesize dontPackRenditionsBeforeDistilling=_dontPackRenditionsBeforeDistilling;
@property int fileCompression;
@property (getter=isFinished) BOOL finished; // @synthesize finished=_finished;
@property (getter=isIncremental) BOOL incremental; // @synthesize incremental=_incremental;
@property (strong) TDLogger *logger; // @synthesize logger=_logger;
@property (getter=isSuccessful) BOOL successful; // @synthesize successful=_successful;
@property (readonly, nonatomic) NSUUID *uuid;

- (void)_accumulateErrorDescription:(id)arg1;
- (id)_copyStandardEffectDefinitions;
- (void)_distill:(id)arg1;
- (void)_distillChanges:(id)arg1;
- (BOOL)_distillColorDefinitions:(id)arg1;
- (BOOL)_distillCursorFacetDefinitions:(id)arg1;
- (BOOL)_distillFonts:(id)arg1;
- (BOOL)_distillNamedElements:(id)arg1;
- (id)_filterRenditions:(id)arg1;
- (id)_keyDataFromKey:(const struct _renditionkeytoken *)arg1;
- (id)_keySpecsToRemoveFromKeySpecs:(id)arg1;
- (void)_logError:(id)arg1;
- (void)_logErrorAndAccumulateDescription:(id)arg1;
- (void)_logExtra:(id)arg1;
- (void)_logInfo:(id)arg1;
- (void)_logWarning:(id)arg1;
- (id)_productionForRenditionSpec:(id)arg1;
- (BOOL)_recordRenditionEntryFromRendition:(id)arg1;
- (unsigned long long)_removeRenditionsWithKeySpecs:(id)arg1;
- (id)_renditionsFromProductions:(id)arg1 error:(id *)arg2;
- (id)_renditionsWithError:(id *)arg1;
- (void)_resetDocumentUuid:(id)arg1;
- (BOOL)_setupWithOutputPath:(id)arg1 attemptIncremental:(BOOL)arg2;
- (BOOL)_sortRenditionEntries;
- (void)_storeRenditions;
- (id)_textureFaceExclusionPredicate;
- (BOOL)assetStoreWriteToDisk;
- (void)cancelDistill;
- (id)dateOfLastDistill;
- (void)dealloc;
- (BOOL)distillCatalogGlobals;
- (BOOL)distillCursorFacetDefinitions;
- (BOOL)distillCustomColors;
- (BOOL)distillCustomFontSizes;
- (BOOL)distillCustomFonts;
- (BOOL)distillNamedElements;
- (BOOL)distillRenditions;
- (id)documentPath;
- (void)finishDistillationWithSuccess:(BOOL)arg1;
- (id)initWithDocument:(id)arg1 outputPath:(id)arg2;
- (id)initWithDocument:(id)arg1 outputPath:(id)arg2 attemptIncremental:(BOOL)arg3;
- (id)initWithDocument:(id)arg1 outputPath:(id)arg2 attemptIncremental:(BOOL)arg3 versionString:(id)arg4;
- (id)initWithDocument:(id)arg1 outputPath:(id)arg2 versionString:(id)arg3;
- (id)keyFormatData;
- (void)markDistillationAsFinished;
- (void)performSelectorOnCallbackThread:(SEL)arg1 withObject:(id)arg2 waitUntilDone:(BOOL)arg3;
- (void)removeRenditionsFromAssetStoreWithKey:(id)arg1;
- (void)saveAndDistillWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)setAsset:(id)arg1 withKey:(const struct _renditionkeytoken *)arg2 fromRenditionSpec:(id)arg3;
- (void)setAssetColorSpaceID:(unsigned int)arg1;
- (void)setAssetSchemaVersion:(unsigned int)arg1;
- (void)setAssetStorageVersion:(unsigned int)arg1;
- (void)setAssetStorageVersionString:(const char *)arg1;
- (void)setAssetStoreAssociatedChecksum:(unsigned int)arg1;
- (void)setAssetStoreKeyFormatData:(id)arg1;
- (void)setAssetStoreKeySemantics:(int)arg1;
- (void)setAssetStoreRenditionCount:(unsigned int)arg1;
- (void)setAssetStoreUuid:(id)arg1;
- (BOOL)sortAndStoreRenditions;
- (void)waitTimerDidFire:(id)arg1;
- (void)waitUntilFinished;

@end

