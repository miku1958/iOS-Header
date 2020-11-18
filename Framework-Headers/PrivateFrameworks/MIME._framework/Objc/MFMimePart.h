//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class MFPartialNetworkDataConsumer, MFWeakReferenceHolder, NSData, NSMutableDictionary, NSString, NSURL;

@interface MFMimePart : NSObject
{
    NSString *_type;
    NSString *_subtype;
    NSMutableDictionary *_bodyParameters;
    NSString *_contentTransferEncoding;
    NSMutableDictionary *_otherIvars;
    struct _NSRange _range;
    MFWeakReferenceHolder *_parent;
    MFWeakReferenceHolder *_body;
    MFMimePart *_nextPart;
    NSURL *_partURL;
    NSURL *_parentPartURL;
    MFPartialNetworkDataConsumer *_partialDataConsumer;
    NSData *_fullData;
    MFWeakReferenceHolder *_decodedData;
}

+ (Class)attachmentClass;
+ (void)initialize;
+ (BOOL)isRecognizedClassForContent:(id)arg1;
+ (BOOL)parseContentTypeHeader:(id)arg1 type:(id *)arg2 subtype:(id *)arg3;
+ (BOOL)parseContentTypeHeader:(id)arg1 type:(id *)arg2 subtype:(id *)arg3 info:(id *)arg4;
- (void)_clearNextAndSibling;
- (void)_clearParent;
- (void)_contents:(id *)arg1 toOffset:(unsigned long long)arg2 resultOffset:(unsigned long long *)arg3 downloadIfNecessary:(BOOL)arg4 asHTML:(BOOL)arg5 isComplete:(BOOL *)arg6;
- (void)_ensureBodyDataToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long *)arg2 downloadIfNecessary:(BOOL)arg3 isComplete:(BOOL *)arg4 decoded:(id *)arg5;
- (id)_fullMimeTypeEvenInsideAppleDouble;
- (BOOL)_hasCompleteBodyDataToOffset:(unsigned long long)arg1;
- (id)_partThatIsAttachment;
- (void)_setDecryptedMessageBody:(id)arg1 isEncrypted:(BOOL)arg2 isSigned:(BOOL)arg3;
- (void)_setRFC822DecodedMessageBody:(id)arg1;
- (BOOL)_shouldContinueDecodingProcess;
- (void)addSubpart:(id)arg1;
- (id)alternativeAtIndex:(long long)arg1;
- (unsigned int)approximateRawSize;
- (id)attachmentFilename;
- (id)attachmentURLs;
- (id)attachments;
- (id)bodyData;
- (id)bodyDataForcingDownload:(BOOL)arg1;
- (id)bodyDataToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long *)arg2;
- (id)bodyDataToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long *)arg2 downloadIfNecessary:(BOOL)arg3;
- (id)bodyParameterForKey:(id)arg1;
- (id)bodyParameterKeys;
- (id)chosenAlternativePart;
- (void)clearCachedDescryptedMessageBody;
- (void)configureFileWrapper:(id)arg1;
- (id)contentDescription;
- (id)contentID;
- (id)contentLocation;
- (id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long *)arg2 asHTML:(BOOL)arg3;
- (id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long *)arg2 downloadIfNecessary:(BOOL)arg3 asHTML:(BOOL)arg4;
- (id)contentToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long *)arg2 downloadIfNecessary:(BOOL)arg3 asHTML:(BOOL)arg4 isComplete:(BOOL *)arg5;
- (id)contentTransferEncoding;
- (id)contentsForTextSystem;
- (id)contentsForTextSystemForcingDownload:(BOOL)arg1;
- (id)contentsForTextSystemToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long *)arg2;
- (id)contentsForTextSystemToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long *)arg2 downloadIfNecessary:(BOOL)arg3;
- (id)contentsForTextSystemToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long *)arg2 downloadIfNecessary:(BOOL)arg3 asHTML:(BOOL)arg4;
- (id)contentsForTextSystemToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long *)arg2 downloadIfNecessary:(BOOL)arg3 asHTML:(BOOL)arg4 isComplete:(BOOL *)arg5;
- (id)copyBodyDataToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long *)arg2;
- (id)copyBodyDataToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long *)arg2 downloadIfNecessary:(BOOL)arg3;
- (id)copyBodyDataToOffset:(unsigned long long)arg1 resultOffset:(unsigned long long *)arg2 downloadIfNecessary:(BOOL)arg3 isComplete:(BOOL *)arg4;
- (void)dealloc;
- (id)decodeApplicationOctet_stream;
- (id)decodeApplicationZip;
- (void)decodeIfNecessary;
- (id)decodeMultipart;
- (id)decodeMultipartAlternative;
- (id)decodeMultipartRelated;
- (id)decodeText;
- (id)decodedDataForData:(id)arg1;
- (id)decryptedMessageBodyIsEncrypted:(BOOL *)arg1 isSigned:(BOOL *)arg2;
- (id)description;
- (id)disposition;
- (id)dispositionParameterForKey:(id)arg1;
- (id)dispositionParameterKeys;
- (void)download;
- (id)fileWrapper;
- (id)fileWrapperForDecodedObject:(id)arg1 withFileData:(id *)arg2;
- (id)fileWrapperForcingDownload:(BOOL)arg1;
- (id)firstChildPart;
- (void)getNumberOfAttachments:(unsigned int *)arg1 isSigned:(BOOL *)arg2 isEncrypted:(BOOL *)arg3;
- (BOOL)hasContentType:(id)arg1 subtype:(id)arg2;
- (BOOL)hasContents;
- (BOOL)hasValidMultipartSignedContentType;
- (id)init;
- (BOOL)isAttachment;
- (BOOL)isGenerated;
- (BOOL)isHTML;
- (BOOL)isReadableText;
- (BOOL)isRich;
- (id)languages;
- (id)mimeBody;
- (id)nextSiblingPart;
- (long long)numberOfAlternatives;
- (unsigned int)numberOfAttachments;
- (id)parentPart;
- (BOOL)parseIMAPPropertyList:(id)arg1;
- (BOOL)parseMimeBody;
- (BOOL)parseMimeBodyDownloadIfNecessary:(BOOL)arg1;
- (id)partNumber;
- (id)partURL;
- (id)preservedHeaderValueForKey:(id)arg1;
- (struct _NSRange)range;
- (id)rfc822DecodedMessageBody;
- (void)setBodyParameter:(id)arg1 forKey:(id)arg2;
- (void)setContentDescription:(id)arg1;
- (void)setContentID:(id)arg1;
- (void)setContentLocation:(id)arg1;
- (void)setContentTransferEncoding:(id)arg1;
- (void)setDisposition:(id)arg1;
- (void)setDispositionParameter:(id)arg1 forKey:(id)arg2;
- (void)setIsGenerated:(BOOL)arg1;
- (void)setLanguages:(id)arg1;
- (void)setMimeBody:(id)arg1;
- (void)setRange:(struct _NSRange)arg1;
- (void)setSubparts:(id)arg1;
- (void)setSubtype:(id)arg1;
- (void)setType:(id)arg1;
- (BOOL)shouldConsiderInlineOverridingExchangeServer;
- (id)signedData;
- (id)startPart;
- (id)storeData:(id)arg1 inMessage:(id)arg2 isComplete:(BOOL)arg3;
- (id)subpartAtIndex:(long long)arg1;
- (id)subparts;
- (id)subtype;
- (unsigned int)textEncoding;
- (id)textHtmlPart;
- (unsigned long long)totalTextSize;
- (id)type;
- (BOOL)usesKnownSignatureProtocol;

@end

