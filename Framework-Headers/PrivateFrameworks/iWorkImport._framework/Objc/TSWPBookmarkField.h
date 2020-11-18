//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TSWPSmartField.h>

#import <iWorkImport/TSWPBookmarkEntry-Protocol.h>

@class NSString, NSURL;

__attribute__((visibility("hidden")))
@interface TSWPBookmarkField : TSWPSmartField <TSWPBookmarkEntry>
{
    NSString *_name;
    BOOL _forRange;
    BOOL _hidden;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *displayName;
@property (readonly, nonatomic) struct _NSRange effectiveRange;
@property (nonatomic) BOOL forRange; // @synthesize forRange=_forRange;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) BOOL hidden; // @synthesize hidden=_hidden;
@property (readonly, nonatomic) NSString *key;
@property (readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property (readonly, nonatomic) struct _NSRange range;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSURL *url;

+ (id)normalizedNameForName:(id)arg1;
+ (id)uniqueBookmarkNameFromBase:(id)arg1 excludingNames:(id)arg2;
- (void).cxx_destruct;
- (BOOL)allowsEditing;
- (unsigned long long)attributeArrayKind;
- (id)copyWithContext:(id)arg1;
- (id)copyWithNewName:(id)arg1;
- (id)initWithContext:(id)arg1;
- (id)initWithContext:(id)arg1 name:(id)arg2 forRange:(BOOL)arg3 hidden:(BOOL)arg4;
- (BOOL)isEquivalentToObject:(id)arg1;
- (void)loadFromArchive:(const struct BookmarkFieldArchive *)arg1 unarchiver:(id)arg2;
- (void)loadFromUnarchiver:(id)arg1;
- (void)resetTextAttributeUUIDString;
- (void)saveToArchive:(struct BookmarkFieldArchive *)arg1 archiver:(id)arg2;
- (void)saveToArchiver:(id)arg1;
- (int)smartFieldKind;
- (int)styleAttributeArrayKind;

@end

