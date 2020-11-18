//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSURL, UIColor, UIImage;

@interface UIPasteboard : NSObject
{
}

@property (copy, nonatomic) NSURL *URL;
@property (copy, nonatomic) NSArray *URLs;
@property (readonly, nonatomic) long long _changeCountIgnoringPinningActivity;
@property (readonly, copy, nonatomic) NSArray *availableTypes;
@property (readonly, nonatomic) long long changeCount;
@property (copy, nonatomic) UIColor *color;
@property (copy, nonatomic) NSArray *colors;
@property (readonly, nonatomic) BOOL hasColors;
@property (readonly, nonatomic) BOOL hasImages;
@property (readonly, nonatomic) BOOL hasStrings;
@property (readonly, nonatomic) BOOL hasURLs;
@property (copy, nonatomic) UIImage *image;
@property (copy, nonatomic) NSArray *images;
@property (copy, nonatomic) NSArray *itemProviders;
@property (copy, nonatomic) NSArray *items;
@property (readonly, nonatomic) NSString *name;
@property (readonly, nonatomic) long long numberOfItems;
@property (readonly, nonatomic) NSArray *pasteboardTypes;
@property (readonly, nonatomic, getter=isPersistent) BOOL persistent;
@property (copy, nonatomic) NSString *string;
@property (copy, nonatomic) NSArray *strings;

+ (void)_clearPinnedItemProvidersForPasteboardNamed:(id)arg1;
+ (id)_pasteboardWithName:(id)arg1 create:(BOOL)arg2;
+ (id)_pasteboardWithUniqueName;
+ (void)_pinItemProviders:(id)arg1 forPasteboardNamed:(id)arg2 withExpirationDate:(id)arg3;
+ (id)generalPasteboard;
+ (id)pasteboardWithName:(id)arg1 create:(BOOL)arg2;
+ (id)pasteboardWithUniqueName;
+ (void)removePasteboardWithName:(id)arg1;
- (void)_clearPinnedItemProviders;
- (id)_detectedPasteboardTypeStringsForTypes:(id)arg1;
- (id)_detectedPasteboardTypesForTypes:(id)arg1;
- (BOOL)_hasStrings;
- (void)_pinItemProviders:(id)arg1 expirationDate:(id)arg2;
- (void)addItems:(id)arg1;
- (BOOL)canInstantiateObjectsOfClass:(Class)arg1;
- (BOOL)containsPasteboardTypes:(id)arg1;
- (BOOL)containsPasteboardTypes:(id)arg1 inItemSet:(id)arg2;
- (id)dataForPasteboardType:(id)arg1;
- (id)dataForPasteboardType:(id)arg1 inItemSet:(id)arg2;
- (void)detectPatternsForPatterns:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)detectPatternsForPatterns:(id)arg1 inItemSet:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)detectValuesForPatterns:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)detectValuesForPatterns:(id)arg1 inItemSet:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)itemProvidersForInstantiatingObjectsOfClass:(Class)arg1;
- (id)itemSetWithPasteboardTypes:(id)arg1;
- (id)pasteboardTypesForItemSet:(id)arg1;
- (void)setData:(id)arg1 forPasteboardType:(id)arg2;
- (void)setItemProviders:(id)arg1 localOnly:(BOOL)arg2 expirationDate:(id)arg3;
- (void)setItemProviders:(id)arg1 options:(id)arg2;
- (void)setItems:(id)arg1 options:(id)arg2;
- (void)setName:(id)arg1;
- (void)setObjects:(id)arg1;
- (void)setObjects:(id)arg1 localOnly:(BOOL)arg2 expirationDate:(id)arg3;
- (void)setObjects:(id)arg1 options:(id)arg2;
- (void)setPersistent:(BOOL)arg1;
- (void)setValue:(id)arg1 forPasteboardType:(id)arg2;
- (id)valueForPasteboardType:(id)arg1;
- (id)valuesForPasteboardType:(id)arg1 inItemSet:(id)arg2;

@end
