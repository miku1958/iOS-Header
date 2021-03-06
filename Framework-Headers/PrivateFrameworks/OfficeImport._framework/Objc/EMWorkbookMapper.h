//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/CMDocumentMapper.h>

#import <OfficeImport/CMMapperRoot-Protocol.h>

@class EDWorkbook, NSMutableArray, NSString, OIXMLDocument, OIXMLElement;

__attribute__((visibility("hidden")))
@interface EMWorkbookMapper : CMDocumentMapper <CMMapperRoot>
{
    unsigned long long mRealSheetCount;
    int mWidth;
    int mHeight;
    NSMutableArray *mWorksheetUrls;
    NSMutableArray *mWorksheetNames;
    NSMutableArray *mWorksheetGuids;
    NSString *mResourceUrlPrefix;
    NSString *mResourceUrlProtocol;
    NSString *mStyleSheetGuid;
    NSString *mFileName;
    unsigned int mSheetIndex;
    BOOL mIsFirstMappedSheet;
    BOOL mIsFrameset;
    OIXMLDocument *mXhtmlDoc;
    OIXMLElement *mBodyElement;
    OIXMLDocument *mTabBarDoc;
    NSString *mTabBarURL;
    NSMutableArray *mSheetURLs;
    double mTabPosition;
    unsigned long long mNumberOfMappedSheets;
    BOOL mHasPushedHeader;
    BOOL mHasPushedFirstSheet;
    BOOL mLoadingMessageVisible;
}

@property (readonly) EDWorkbook *document; // @dynamic document;
@property (strong) NSString *fileName; // @synthesize fileName=mFileName;

+ (id)borderStyleCache;
+ (id)borderWidthCache;
+ (id)cssStyleCache;
- (void).cxx_destruct;
- (id)_copyStringForSheet:(id)arg1 atIndex:(unsigned long long)arg2 withState:(id)arg3 andMapper:(id)arg4;
- (id)_frontPageByCopyingMainPage;
- (id)_mainPageBack;
- (void)_pushTabForSheet:(id)arg1 atIndex:(unsigned long long)arg2;
- (id)archiver;
- (id)blipAtIndex:(unsigned int)arg1;
- (id)copySheetMapperWithEdSheet:(id)arg1;
- (id)documentTitle;
- (void)finishMappingWithState:(id)arg1;
- (BOOL)hasMultipleSheets;
- (id)headElementForFrontPage;
- (id)initWithDocument:(id)arg1 archiver:(id)arg2;
- (void)mapElement:(id)arg1 atIndex:(unsigned long long)arg2 withState:(id)arg3 isLastElement:(BOOL)arg4;
- (void)mapStylesheetData:(id)arg1 name:(id)arg2 atElement:(id)arg3;
- (void)mapStylesheetNamed:(id)arg1 atElement:(id)arg2;
- (struct CGSize)pageSizeForDevice;
- (void)setElementCount:(unsigned long long)arg1;
- (void)startMappingWithState:(id)arg1;
- (id)styleMatrix;
- (id)tabTitleDrawingAttributes;

@end

