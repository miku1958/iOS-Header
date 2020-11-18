//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSURL;

@interface _HKCDADocumentCollectionImporter : NSObject
{
    NSURL *_url;
    NSMutableArray *_collection;
    BOOL _loaded;
    BOOL _passwordProtectedZipArchive;
}

- (void).cxx_destruct;
- (BOOL)_containsPasswordProtectedData:(id)arg1;
- (id)_extractFirstOccurrenceOfTagRule:(id)arg1 extactor:(id)arg2;
- (void)_loadCollection;
- (void)_loadCollectionFromXMLData:(id)arg1;
- (void)_loadCollectionFromXMLFile:(id)arg1;
- (void)_loadCollectionFromZipArchive:(id)arg1;
- (BOOL)archiveIsPasswordProtected;
- (void)enumerateDocumentsUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithURL:(id)arg1;

@end
