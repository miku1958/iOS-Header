//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NotesShared/NSObject-Protocol.h>

@class NSAttributedString, NSMutableDictionary, TTMergeableStringVersionedDocument;

@protocol ICNoteUI <NSObject>

@optional
- (void)createMissingAttachmentsInTextStorage;
- (void)didMergeNoteDocument:(TTMergeableStringVersionedDocument *)arg1 withUserInfo:(NSMutableDictionary *)arg2;
- (void)noteDidReplaceDocument;
- (void)noteDidSaveAndClearDecryptedData;
- (void)noteWillTurnIntoFault;
- (BOOL)shouldReleaseTextStorageWhenTurningIntoFault;
- (NSAttributedString *)uiAttributedString;
- (void)willMergeNoteDocument:(TTMergeableStringVersionedDocument *)arg1 withUserInfo:(NSMutableDictionary *)arg2;
@end

