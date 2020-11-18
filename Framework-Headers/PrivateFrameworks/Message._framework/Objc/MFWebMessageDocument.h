//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Message/MFWebAttachmentSource.h>

@class MFAttachmentManager, MFLock, MFMimeBody, MFMimePart, NSData, NSMutableDictionary, NSURL;

@interface MFWebMessageDocument : MFWebAttachmentSource
{
    unsigned int _uniqueId;
    NSURL *_baseURL;
    MFMimeBody *_mimeBody;
    MFMimePart *_htmlPart;
    NSData *_htmlData;
    MFLock *_lock;
    NSMutableDictionary *_partsByURL;
    NSMutableDictionary *_partsByFilename;
    unsigned int _preferredEncoding;
    MFAttachmentManager *_attachmentManager;
}

@property (strong, nonatomic) MFAttachmentManager *attachmentManager; // @synthesize attachmentManager=_attachmentManager;
@property (readonly) NSURL *baseURL; // @synthesize baseURL=_baseURL;
@property (readonly) NSData *htmlData; // @synthesize htmlData=_htmlData;
@property (readonly) MFMimeBody *mimeBody; // @synthesize mimeBody=_mimeBody;
@property (readonly) MFMimePart *mimePart; // @synthesize mimePart=_htmlPart;
@property unsigned int preferredEncoding; // @synthesize preferredEncoding=_preferredEncoding;

- (id)_initWithMimePart:(id)arg1 htmlData:(id)arg2;
- (id)attachmentForURL:(id)arg1;
- (id)attachmentsInDocument;
- (void)dealloc;
- (id)fileWrapper;
- (id)init;
- (id)initWithMimeBody:(id)arg1;
- (id)initWithMimePart:(id)arg1;
- (id)initWithMimePart:(id)arg1 htmlData:(id)arg2 encoding:(unsigned int)arg3;
- (id)mimePartForURL:(id)arg1;
- (id)preferredCharacterSet;

@end

