//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/GQWrapPointGenerator-Protocol.h>

@class GQDRoot, GQDSStylesheet, GQPProcessor, GQSTable, NSString, SFUZipArchive;
@protocol GQUOutputBundle, GQWrapPointGenerator;

__attribute__((visibility("hidden")))
@interface GQSDocument : NSObject <GQWrapPointGenerator>
{
    GQPProcessor *mProcessor;
    GQDRoot *mRoot;
    struct __CFURL *mBundleUrl;
    SFUZipArchive *mArchive;
    id<GQUOutputBundle> mOutputBundle;
    struct __CFArray *mObjectStack;
    id mGeneratorState;
    GQSTable *mTableState;
    Class mCurrentDrawablesGenerator;
    Class mCurrentTableGenerator;
    id<GQWrapPointGenerator> mCurrentWrapPointGenerator;
    BOOL mMustRegisterDrawables;
    BOOL mGeneratorBeginWasCalled;
    BOOL mShouldStreamTables;
    BOOL mDoExternalTextWrap;
    BOOL mGeneratingThumbnail;
    BOOL mThumbnailGenerationDone;
    unsigned int mTextScale;
    set_978dc09f *mWrapPoints;
    struct __CFDictionary *mBundleResourceUriMap;
    GQDSStylesheet *mStylesheet;
    BOOL mIsReadingStorageAttachments;
    struct __CFString *mFilename;
    struct __CFURL *mDocumentUrl;
    BOOL _doCalculateThumbnailSize;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic) BOOL doCalculateThumbnailSize; // @synthesize doCalculateThumbnailSize=_doCalculateThumbnailSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void)addWrapPoint:(id)arg1;
- (void)clearWrapPoints;
- (vector_dadce35e *)createListOfWrapPointsAlongY:(float)arg1 minX:(float)arg2 maxX:(float)arg3 zIndex:(int)arg4;
- (struct __CFURL *)createUriToDocumentBundleResource:(struct __CFString *)arg1;
- (struct __CFURL *)createUrlToAppBundleResource:(struct __CFString *)arg1 processorBundle:(struct __CFBundle *)arg2 skipCachingPDFAndNoExtentionResources:(BOOL *)arg3;
- (Class)currentDrawablesGenerator;
- (Class)currentTableGenerator;
- (id)currentWrapPointGenerator;
- (void)dealloc;
- (BOOL)doExternalTextWrap;
- (struct __CFString *)filename;
- (BOOL)generatorBeginWasCalled;
- (id)generatorState;
- (id)initWithRoot:(id)arg1 processor:(id)arg2 archive:(id)arg3 outputBundle:(id)arg4 fileURL:(struct __CFURL *)arg5;
- (id)initWithRoot:(id)arg1 processor:(id)arg2 bundleUrl:(struct __CFURL *)arg3 archive:(id)arg4 outputBundle:(id)arg5;
- (id)initWithRoot:(id)arg1 processor:(id)arg2 outputBundle:(id)arg3 fileURL:(struct __CFURL *)arg4;
- (BOOL)isGeneratingThumbnail;
- (BOOL)isReadingStorageAttachments;
- (BOOL)isThumbnailGenerationDone;
- (BOOL)mustRegisterDrawables;
- (int)objectStackDepth;
- (id)outputBundle;
- (id)peekObject;
- (id)popRetainedObject;
- (id)processor;
- (void)pushObject:(id)arg1;
- (id)root;
- (void)setCurrentDrawablesGenerator:(Class)arg1;
- (void)setCurrentTableGenerator:(Class)arg1;
- (void)setCurrentWrapPointGenerator:(id)arg1;
- (void)setDoExternalTextWrap:(BOOL)arg1;
- (void)setGeneratingThumbnail:(BOOL)arg1;
- (void)setGeneratorBeginWasCalled;
- (void)setGeneratorState:(id)arg1;
- (void)setIsReadingStorageAttachments:(BOOL)arg1;
- (void)setMustRegisterDrawables:(BOOL)arg1;
- (void)setShouldStreamTables:(BOOL)arg1;
- (void)setStylesheet:(id)arg1;
- (void)setTableState:(id)arg1;
- (void)setThumbnailGenerationDone:(BOOL)arg1;
- (BOOL)shouldStreamTables;
- (id)stylesheet;
- (id)tableState;
- (id)topObjectOfClass:(Class)arg1;
- (struct __CFString *)uriForBundleResource:(struct __CFString *)arg1 ofType:(struct __CFString *)arg2;
- (const set_978dc09f *)wrapPoints;

@end
