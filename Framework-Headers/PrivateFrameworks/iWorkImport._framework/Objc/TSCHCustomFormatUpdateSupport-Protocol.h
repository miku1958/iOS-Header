//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

@class NSDictionary, TSKCustomFormatList, TSKDocumentRoot;

@protocol TSCHCustomFormatUpdateSupport
- (void)remapCustomFormatKeysWithOldToNewKeyMap:(NSDictionary *)arg1;
- (void)updateAfterPasteForDocumentRoot:(TSKDocumentRoot *)arg1 pasteboardCustomFormatList:(TSKCustomFormatList *)arg2;
- (void)upgradePreU2_0CustomFormatsForDocumentRoot:(TSKDocumentRoot *)arg1;
@end
