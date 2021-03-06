//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CloudDocsUI/_UIDocumentPickerContainerItem.h>

@class NSArray, NSDate, NSString, NSURL;

__attribute__((visibility("hidden")))
@interface _UIDocumentPickerContainerURLItem : _UIDocumentPickerContainerItem
{
    NSURL *_url;
    long long _cachedType;
    NSString *_cachedTitle;
    NSString *_cachedSubtitle;
    NSString *_cachedSubtitle2;
    NSArray *_cachedTags;
    unsigned long long _cachedIndentation;
    NSString *_cachedSortPath;
    NSString *_cachedContentType;
    NSDate *_cachedContentModifiedDate;
    BOOL _cachedIsAlias;
    id _generationIdentifier;
}

+ (id)defaultKeys;
- (void).cxx_destruct;
- (void)_cacheIndentationLevelWithSortPathComponents:(id)arg1;
- (void)_modelChanged;
- (void)_removeCachedValues;
- (BOOL)attributesModified:(id)arg1;
- (void)cacheValues;
- (id)contentType;
- (unsigned long long)indentationLevel;
- (id)initWithURL:(id)arg1;
- (BOOL)isAlias;
- (id)modificationDate;
- (BOOL)renameable;
- (id)sortPath;
- (id)sortPathComponents;
- (id)subtitle;
- (id)subtitle2;
- (id)tags;
- (id)title;
- (long long)type;
- (id)url;
- (id)urlInLocalContainer;

@end

