//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSIndexSet, TSKDocumentRoot;

__attribute__((visibility("hidden")))
@interface TSDUserDefinedShapeLibraryIndexChangeObject : NSObject
{
    NSIndexSet *_indexesChanged;
    unsigned long long _changeType;
    TSKDocumentRoot *_documentRoot;
    unsigned long long _categoryChangeType;
}

@property unsigned long long categoryChangeType; // @synthesize categoryChangeType=_categoryChangeType;
@property unsigned long long changeType; // @synthesize changeType=_changeType;
@property (strong) TSKDocumentRoot *documentRoot; // @synthesize documentRoot=_documentRoot;
@property (strong) NSIndexSet *indexesChanged; // @synthesize indexesChanged=_indexesChanged;

- (void).cxx_destruct;

@end

