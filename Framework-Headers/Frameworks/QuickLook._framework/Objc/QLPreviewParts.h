//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSError, NSMutableDictionary, NSMutableSet, NSSet, NSString, NSThread, NSURL, NSURLConnection, NSURLRequest, NSURLResponse;

__attribute__((visibility("hidden")))
@interface QLPreviewParts : NSObject
{
    NSURL *_url;
    NSData *_data;
    NSString *_fileName;
    NSString *_uti;
    NSString *_password;
    BOOL _progressive;
    void *_convertFunction;
    NSURLConnection *_connection;
    long long _pageCount;
    float _pageWidth;
    float _pageHeight;
    NSURL *previewURL;
    NSURLResponse *previewResponse;
    NSMutableSet *registeredURLs;
    NSMutableSet *outstandingURLs;
    NSMutableDictionary *encodingsForURLs;
    NSThread *delegateCallbackThread;
    NSError *mainError;
    BOOL computed;
    BOOL cancelled;
    const void *representedObject;
    CDStruct_b3b3fc87 representedObjectCallbacks;
    long long representedObjectProtection;
    BOOL htmlErrorDisabled;
    BOOL _shouldRemoveURLAfterGeneration;
    id _delegate;
}

@property (readonly, nonatomic) NSSet *attachmentURLs;
@property (readonly, getter=isCancelled) BOOL cancelled;
@property (readonly, getter=isComputed) BOOL computed;
@property (strong, nonatomic) NSURLConnection *connection; // @synthesize connection=_connection;
@property (strong, nonatomic) NSData *data; // @synthesize data=_data;
@property (weak, nonatomic) id delegate; // @synthesize delegate=_delegate;
@property (strong, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property BOOL htmlErrorDisabled; // @synthesize htmlErrorDisabled;
@property (readonly) long long pageCount; // @synthesize pageCount=_pageCount;
@property (readonly) float pageHeight; // @synthesize pageHeight=_pageHeight;
@property (readonly) float pageWidth; // @synthesize pageWidth=_pageWidth;
@property (strong, nonatomic) NSString *password; // @synthesize password=_password;
@property (readonly, nonatomic) NSURLRequest *previewRequest;
@property (readonly, nonatomic) NSURLResponse *previewResponse;
@property (readonly, nonatomic) NSURL *previewURL; // @synthesize previewURL;
@property (nonatomic) BOOL progressive; // @synthesize progressive=_progressive;
@property (nonatomic) BOOL shouldRemoveURLAfterGeneration; // @synthesize shouldRemoveURLAfterGeneration=_shouldRemoveURLAfterGeneration;
@property (strong, nonatomic) NSURL *url; // @synthesize url=_url;
@property (strong, nonatomic) NSString *uti; // @synthesize uti=_uti;

+ (BOOL)isSafeRequest:(id)arg1;
+ (BOOL)isSafeURL:(id)arg1;
+ (void)registerPreview:(id)arg1;
+ (id)relativeStringForSafeURL:(id)arg1;
+ (id)safeURLScheme;
+ (void)unregisterPreview:(id)arg1;
- (void).cxx_destruct;
- (void)_discardRepresentedObjectSafely;
- (void)_protectRepresentedObjectSafely;
- (void)_registerURL:(id)arg1 mimeType:(id)arg2 textEncoding:(id)arg3;
- (id)_requestForURL:(id)arg1;
- (id)_voidRequest;
- (void)appendData:(id)arg1 forURL:(id)arg2 lastChunk:(BOOL)arg3;
- (void)cancel;
- (unsigned int)cfEncodingForAttachmentURL:(id)arg1;
- (void)computePreview;
- (void)computePreviewInThread;
- (void)dealloc;
- (const void *)documentObject;
- (id)mimeTypeForAttachmentURL:(id)arg1;
- (id)newAttachmentURLWithID:(id)arg1 properties:(id)arg2;
- (id)newSafeAttachmentURLWithID:(id)arg1 mimeType:(id)arg2 textEncoding:(id)arg3;
- (id)safeRequestForRequest:(id)arg1;
- (void)setDocumentObject:(const void *)arg1 callbacks:(const CDStruct_b3b3fc87 *)arg2;
- (void)setError:(id)arg1;
- (void)startComputingPreview;
- (void)startDataRepresentationWithContentType:(id)arg1 properties:(id)arg2;

@end
