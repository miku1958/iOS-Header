//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <WebCore/AbstractPasteboard-Protocol.h>

@class NSArray, NSString;

@interface WebItemProviderPasteboard : NSObject <AbstractPasteboard>
{
    struct RetainPtr<NSArray> _itemProviders;
    struct RetainPtr<NSArray> _cachedTypeIdentifiers;
    struct RetainPtr<NSArray> _typeToFileURLMaps;
    struct RetainPtr<NSArray> _supportedTypeIdentifiers;
    struct RetainPtr<NSArray> _registrationInfoLists;
    long long _numberOfItems;
    long long _changeCount;
    long long _pendingOperationCount;
}

@property (nonatomic) long long changeCount; // @synthesize changeCount=_changeCount;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSArray *fileURLsForDataInteraction;
@property (readonly, nonatomic) BOOL hasPendingOperation;
@property (readonly) unsigned long long hash;
@property (copy, nonatomic) NSArray *itemProviders;
@property (readonly, nonatomic) long long numberOfFiles;
@property (nonatomic) long long numberOfItems; // @synthesize numberOfItems=_numberOfItems;
@property (nonatomic) long long pendingOperationCount; // @synthesize pendingOperationCount=_pendingOperationCount;
@property (readonly) Class superclass;

+ (id)sharedInstance;
- (id).cxx_construct;
- (void).cxx_destruct;
- (id)_preLoadedDataConformingToType:(id)arg1 forItemProviderAtIndex:(unsigned long long)arg2;
- (id)dataForPasteboardType:(id)arg1 inItemSet:(id)arg2;
- (void)decrementPendingOperationCount;
- (void)doAfterLoadingProvidedContentIntoFileURLs:(CDUnknownBlockType)arg1;
- (void)doAfterLoadingProvidedContentIntoFileURLs:(CDUnknownBlockType)arg1 synchronousTimeout:(double)arg2;
- (void)enumerateItemProvidersWithBlock:(CDUnknownBlockType)arg1;
- (void)incrementPendingOperationCount;
- (id)init;
- (id)itemProviderAtIndex:(unsigned long long)arg1;
- (id)pasteboardTypes;
- (id)pasteboardTypesByFidelityForItemAtIndex:(unsigned long long)arg1;
- (id)registrationInfoAtIndex:(unsigned long long)arg1;
- (void)setItemsUsingRegistrationInfoLists:(id)arg1;
- (id)typeIdentifierToLoadForRegisteredTypeIdentfiers:(id)arg1;
- (void)updateSupportedTypeIdentifiers:(id)arg1;
- (id)valuesForPasteboardType:(id)arg1 inItemSet:(id)arg2;

@end

