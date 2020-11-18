//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MessageUI/NSObject-Protocol.h>

@class MFAttachment, MFFuture, NSArray, NSData, NSDictionary, NSString, NSURL;
@protocol MFMailComposeViewDelegate;

@protocol MFComposeBodyField <NSObject>

@property (nonatomic, getter=isDirty) BOOL dirty;
@property (nonatomic) id<MFMailComposeViewDelegate> mailComposeViewDelegate;

- (void)addMailAttributesBeforeDisplayHidingTrailingEmptyQuotes:(BOOL)arg1;
- (void)appendMarkupString:(NSString *)arg1 quote:(BOOL)arg2;
- (void)appendOrReplace:(NSString *)arg1 withMarkupString:(NSString *)arg2 quote:(BOOL)arg3;
- (void)beginPreventingLayout;
- (void)changeQuoteLevel:(long long)arg1;
- (MFFuture *)containsRichText;
- (void)endPreventingLayout;
- (void)getHTMLStringsAttachmentsCharsetsAndPlainTextAlternative:(void (^)(NSString *, NSArray *, NSArray *, MFPlainTextDocument *))arg1;
- (MFFuture *)htmlString;
- (void)insertDocumentWithData:(NSData *)arg1 fileName:(NSString *)arg2 mimeType:(NSString *)arg3 contentID:(NSString *)arg4;
- (void)insertDocumentWithURL:(NSURL *)arg1 isDrawingFile:(BOOL)arg2;
- (void)insertPhotoOrVideoWithInfoDictionary:(NSDictionary *)arg1;
- (void)layoutWithMinimumSize;
- (NSString *)nextAttachmentName;
- (MFFuture *)plainTextContent;
- (void)prependMarkupString:(NSString *)arg1 quote:(BOOL)arg2;
- (void)prependPreamble:(NSString *)arg1;
- (void)prependString:(NSString *)arg1;
- (struct CGRect)rectOfElementWithID:(NSString *)arg1;
- (void)removeDropPlaceholders;
- (void)replaceAttachment:(MFAttachment *)arg1 withDocumentAtURL:(NSURL *)arg2 completion:(void (^)(MFAttachment *))arg3;
- (void)replaceAttachment:(MFAttachment *)arg1 withDocumentData:(NSData *)arg2 fileName:(NSString *)arg3 mimeType:(NSString *)arg4;
- (void)replaceImagesIfNecessary;
- (void)scaleImagesToScale:(unsigned long long)arg1;
- (struct _NSRange)selectedRange;
- (void)setAttachmentURLsToBeReplacedWithFilename:(NSArray *)arg1;
- (void)setCaretPosition:(unsigned long long)arg1;
- (void)setMarkupString:(NSString *)arg1;
- (void)setMarkupString:(NSString *)arg1 quote:(BOOL)arg2;
- (void)setPrefersFirstLineSelection;
- (void)unscaleImages;
- (void)updateInputAssistantItem;
@end

