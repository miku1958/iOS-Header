//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WebCore/NSObject-Protocol.h>

@class NSArray, NSIndexSet, NSString;

@protocol AbstractPasteboard <NSObject>

@property (readonly, nonatomic) NSArray *fileURLsForDataInteraction;
@property (copy, nonatomic) NSArray *itemProviders;
@property (readonly, nonatomic) long long numberOfFiles;
@property (readonly, nonatomic) long long numberOfItems;

- (long long)changeCount;
- (NSArray *)dataForPasteboardType:(NSString *)arg1 inItemSet:(NSIndexSet *)arg2;
- (NSArray *)pasteboardTypes;
- (NSArray *)valuesForPasteboardType:(NSString *)arg1 inItemSet:(NSIndexSet *)arg2;

@optional
- (NSArray *)pasteboardTypesByFidelityForItemAtIndex:(unsigned long long)arg1;
- (void)setItems:(NSArray *)arg1;
- (void)setItemsUsingRegistrationInfoLists:(NSArray *)arg1;
- (void)updateSupportedTypeIdentifiers:(NSArray *)arg1;
@end

