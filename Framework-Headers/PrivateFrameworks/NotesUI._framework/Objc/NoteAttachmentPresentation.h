//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NotesUI/NotesCIDDataProvider-Protocol.h>

@class NSData, NSError, NSNumber, NSString, NSURL;

@interface NoteAttachmentPresentation : NSObject <NotesCIDDataProvider>
{
    BOOL _sourceIsManaged;
    BOOL _image;
    NSString *_contentID;
    NSURL *_contentIDURL;
    NSURL *_dataFileURL;
    NSString *_mimeType;
    NSString *_filename;
    NSError *_dataFileURLError;
    NSString *_contentIDURLAbsoluteString;
    NSData *_data;
    struct CGSize _iconSize;
}

@property (copy, nonatomic) NSString *contentID; // @synthesize contentID=_contentID;
@property (copy, nonatomic) NSURL *contentIDURL; // @synthesize contentIDURL=_contentIDURL;
@property (copy, nonatomic) NSString *contentIDURLAbsoluteString; // @synthesize contentIDURLAbsoluteString=_contentIDURLAbsoluteString;
@property (strong, nonatomic) NSData *data; // @synthesize data=_data;
@property (copy, nonatomic) NSURL *dataFileURL; // @synthesize dataFileURL=_dataFileURL;
@property (strong, nonatomic) NSError *dataFileURLError; // @synthesize dataFileURLError=_dataFileURLError;
@property (readonly, nonatomic) NSNumber *dataSizeNumber;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *filename; // @synthesize filename=_filename;
@property (readonly) unsigned long long hash;
@property (nonatomic) struct CGSize iconSize; // @synthesize iconSize=_iconSize;
@property (nonatomic, getter=isImage) BOOL image; // @synthesize image=_image;
@property (copy, nonatomic) NSString *mimeType; // @synthesize mimeType=_mimeType;
@property (readonly, nonatomic) BOOL sourceIsManaged; // @synthesize sourceIsManaged=_sourceIsManaged;
@property (readonly) Class superclass;

+ (id)attachmentPresentationsForAttachments:(id)arg1;
+ (void)prepareDocumentForPresentationWithAttachmentContentIDs:(id)arg1 withAttachmentPresentations:(id)arg2 occurences:(id *)arg3;
+ (void)prepareDocumentForSerializationWithAttachmentContentIDs:(id)arg1 withAttachmentPresentations:(id)arg2 newPresentationProvider:(CDUnknownBlockType)arg3 leftoverPresentations:(id *)arg4;
+ (id)presentationSelector;
- (void).cxx_destruct;
- (void)clearCache;
- (BOOL)getData:(id *)arg1 mimeType:(id *)arg2 error:(id *)arg3;
- (BOOL)getPresentationData:(id *)arg1 mimeType:(id *)arg2 error:(id *)arg3;
- (id)initWithData:(id)arg1 contentID:(id)arg2 mimeType:(id)arg3 filename:(id)arg4;
- (id)initWithNoteAttachmentObject:(id)arg1;
- (void)updateContentIDURL;

@end

