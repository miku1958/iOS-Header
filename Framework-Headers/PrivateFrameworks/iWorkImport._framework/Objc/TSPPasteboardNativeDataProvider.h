//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSPDecoder-Protocol.h>

@class NSArray, NSMutableDictionary, NSString, TSPPasteboard;

__attribute__((visibility("hidden")))
@interface TSPPasteboardNativeDataProvider : NSObject <TSPDecoder>
{
    TSPPasteboard *_pasteboard;
    NSMutableDictionary *_nativeData;
    NSMutableDictionary *_tspData;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSArray *promisedDataTypes;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)dataForIdentifier:(long long)arg1;
- (id)init;
- (id)initWithPasteboard:(id)arg1 nativeData:(id)arg2 tspData:(id)arg3;
- (void)loadNativeData;
- (id)newReadChannelForDataWithIdentifier:(long long)arg1 info:(id)arg2;
- (id)newReadChannelForMetadata;
- (id)newReadChannelForRootObjectComponent;
- (id)pasteboardPropertyListForType:(id)arg1;

@end
