//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface TPSectionHint : NSObject
{
    NSMutableArray *_pageHints;
    unsigned long long _documentStartPageIndex;
}

@property (readonly, nonatomic) struct _NSRange documentPageRange;
@property (nonatomic) unsigned long long documentStartPageIndex; // @synthesize documentStartPageIndex=_documentStartPageIndex;
@property (readonly, nonatomic) unsigned long long lastPageIndex;
@property (readonly, nonatomic) unsigned long long pageCount;
@property (readonly, nonatomic) unsigned long long pageCountWithoutFillerPage;
@property (readonly, nonatomic) NSArray *pageHints; // @synthesize pageHints=_pageHints;

+ (BOOL)verifyHints:(id)arg1 withBodyStorage:(id)arg2 upToPageIndex:(unsigned long long)arg3;
- (void).cxx_destruct;
- (BOOL)containsDocumentPageIndex:(unsigned long long)arg1;
- (id)copyForArchiving;
- (BOOL)hasPageHintOfKind:(long long)arg1 atPageIndex:(unsigned long long)arg2;
- (BOOL)hasPageHintOfKind:(long long)arg1 beforePageIndex:(unsigned long long)arg2;
- (id)init;
- (id)initWithArchive:(const struct SectionHintArchive *)arg1 unarchiver:(id)arg2;
- (id)pageHintForPageIndex:(unsigned long long)arg1;
- (void)saveToArchive:(struct SectionHintArchive *)arg1 archiver:(id)arg2 context:(id)arg3 shouldArchiveHintBlock:(CDUnknownBlockType)arg4;
- (void)setPageHints:(id)arg1;
- (void)trimPageHintsFromPageIndex:(unsigned long long)arg1;

@end

