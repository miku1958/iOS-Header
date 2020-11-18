//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSKSelection.h>

@class TSKDocumentRoot, TSUWeakReference;

__attribute__((visibility("hidden")))
@interface TSKDocumentSelection : TSKSelection
{
    TSUWeakReference *mDocumentRootReference;
}

@property (readonly, nonatomic) TSKDocumentRoot *documentRoot;

+ (Class)archivedSelectionClass;
- (void)dealloc;
- (id)description;
- (unsigned long long)hash;
- (id)initWithDocumentRoot:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end
