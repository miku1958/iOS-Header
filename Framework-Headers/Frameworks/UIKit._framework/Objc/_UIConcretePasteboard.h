//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIPasteboard.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface _UIConcretePasteboard : UIPasteboard
{
    NSString *_name;
}

@property (copy, nonatomic) NSString *name; // @synthesize name=_name;

+ (void)_asynchronouslyEnumerateItemSet:(id)arg1 itemsCompletionHandler:(CDUnknownBlockType)arg2 usingItemBlock:(CDUnknownBlockType)arg3;
+ (void)_clearPinnedItemProvidersForPasteboardNamed:(id)arg1;
+ (void)_detectPatternsForPatterns:(id)arg1 atIndex:(unsigned long long)arg2 itemCollection:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (void)_detectValuesForPatterns:(id)arg1 atIndex:(unsigned long long)arg2 itemCollection:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
+ (id)_pasteboardNamed:(id)arg1 createIfNotFound:(BOOL)arg2;
+ (id)_pasteboardWithName:(id)arg1 create:(BOOL)arg2;
+ (id)_pasteboardWithUniqueName;
+ (void)_pinItemProviders:(id)arg1 forPasteboardNamed:(id)arg2 withExpirationDate:(id)arg3;
+ (id)generalPasteboard;
+ (id)pasteboardWithName:(id)arg1 create:(BOOL)arg2;
+ (id)pasteboardWithUniqueName;
+ (void)removePasteboardWithName:(id)arg1;
- (void).cxx_destruct;
- (id)URL;
- (id)URLs;
- (long long)_changeCountIgnoringPinningActivity;
- (void)_clearPinnedItemProviders;
- (id)_detectedPasteboardTypeStringsForTypes:(id)arg1;
- (id)_detectedPasteboardTypesForTypes:(id)arg1;
- (id)_initWithName:(id)arg1;
- (id)_itemsCoercibleToClass:(Class)arg1;
- (BOOL)_pasteboardCacheQueue_isPersistent;
- (BOOL)_pasteboardCacheQueue_saveItemCollection:(id)arg1 currentNotificationState:(unsigned long long)arg2 outNewNotificationState:(unsigned long long *)arg3;
- (BOOL)_pasteboardCacheQueue_setPersistent:(BOOL)arg1 currentNotificationState:(unsigned long long)arg2 outNewNotificationState:(unsigned long long *)arg3;
- (void)_pinItemCollection:(id)arg1;
- (void)_pinItemProviders:(id)arg1 expirationDate:(id)arg2;
- (void)_saveItemCollection:(id)arg1;
- (void)_sendPasteboardTypesChangedNotificationOldTypes:(id)arg1 newTypes:(id)arg2;
- (void)_setItemsAndSave:(id)arg1 options:(id)arg2;
- (void)_setItemsAndSave:(id)arg1 options:(id)arg2 coerceStringsToURLs:(BOOL)arg3;
- (void)_setItemsAndSaveFromObjects:(id)arg1 ofClass:(Class)arg2;
- (void)_setPersistent:(BOOL)arg1;
- (void)addItems:(id)arg1;
- (id)availableTypes;
- (BOOL)canInstantiateObjectsOfClass:(Class)arg1;
- (long long)changeCount;
- (id)color;
- (id)colors;
- (BOOL)containsPasteboardTypes:(id)arg1;
- (BOOL)containsPasteboardTypes:(id)arg1 inItemSet:(id)arg2;
- (id)dataForPasteboardType:(id)arg1;
- (id)dataForPasteboardType:(id)arg1 inItemSet:(id)arg2;
- (void)detectPatternsForPatterns:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)detectPatternsForPatterns:(id)arg1 inItemSet:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)detectValuesForPatterns:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)detectValuesForPatterns:(id)arg1 inItemSet:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (BOOL)hasColors;
- (BOOL)hasImages;
- (BOOL)hasStrings;
- (BOOL)hasURLs;
- (id)image;
- (id)images;
- (BOOL)isPersistent;
- (id)itemProviders;
- (id)itemProvidersForInstantiatingObjectsOfClass:(Class)arg1;
- (id)itemProvidersWithRetryBehavior:(BOOL)arg1;
- (id)itemSetWithPasteboardTypes:(id)arg1;
- (id)items;
- (long long)numberOfItems;
- (id)pasteboardTypes;
- (id)pasteboardTypesForItemSet:(id)arg1;
- (void)setColor:(id)arg1;
- (void)setColors:(id)arg1;
- (void)setData:(id)arg1 forPasteboardType:(id)arg2;
- (void)setImage:(id)arg1;
- (void)setImages:(id)arg1;
- (void)setItemProviders:(id)arg1;
- (void)setItemProviders:(id)arg1 localOnly:(BOOL)arg2 expirationDate:(id)arg3;
- (void)setItemProviders:(id)arg1 options:(id)arg2;
- (void)setItems:(id)arg1;
- (void)setItems:(id)arg1 options:(id)arg2;
- (void)setObjects:(id)arg1;
- (void)setObjects:(id)arg1 localOnly:(BOOL)arg2 expirationDate:(id)arg3;
- (void)setObjects:(id)arg1 options:(id)arg2;
- (void)setPersistent:(BOOL)arg1;
- (void)setString:(id)arg1;
- (void)setStrings:(id)arg1;
- (void)setURL:(id)arg1;
- (void)setURLs:(id)arg1;
- (void)setValue:(id)arg1 forPasteboardType:(id)arg2;
- (id)string;
- (id)strings;
- (id)valueForPasteboardType:(id)arg1;
- (id)valuesForPasteboardType:(id)arg1 inItemSet:(id)arg2;

@end

