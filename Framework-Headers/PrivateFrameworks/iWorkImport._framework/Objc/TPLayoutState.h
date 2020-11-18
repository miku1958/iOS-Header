//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/NSCopying-Protocol.h>

@class NSArray, NSSet;

__attribute__((visibility("hidden")))
@interface TPLayoutState : NSObject <NSCopying>
{
    unsigned long long _sectionIndex;
    unsigned long long _sectionPageIndex;
    unsigned long long _documentPageIndex;
    unsigned long long _lastPageCount;
    NSArray *_sectionHints;
    unsigned long long _bodyLength;
    NSSet *_missingFonts;
}

@property (nonatomic) unsigned long long bodyLength; // @synthesize bodyLength=_bodyLength;
@property (nonatomic) unsigned long long documentPageIndex; // @synthesize documentPageIndex=_documentPageIndex;
@property (nonatomic) unsigned long long lastPageCount; // @synthesize lastPageCount=_lastPageCount;
@property (copy, nonatomic) NSSet *missingFonts; // @synthesize missingFonts=_missingFonts;
@property (copy, nonatomic) NSArray *sectionHints; // @synthesize sectionHints=_sectionHints;
@property (nonatomic) unsigned long long sectionIndex; // @synthesize sectionIndex=_sectionIndex;
@property (nonatomic) unsigned long long sectionPageIndex; // @synthesize sectionPageIndex=_sectionPageIndex;

- (void).cxx_destruct;
- (id)archivedLayoutStateInContext:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (unsigned long long)hash;
- (id)init;
- (id)initWithArchive:(const struct LayoutStateArchive *)arg1 unarchiver:(id)arg2;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isEqualToLayoutState:(id)arg1;
- (void)reset;
- (void)saveToArchive:(struct LayoutStateArchive *)arg1 archiver:(id)arg2 context:(id)arg3;

@end
