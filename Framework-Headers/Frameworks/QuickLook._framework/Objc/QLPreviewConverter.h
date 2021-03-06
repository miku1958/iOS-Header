//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSURL, NSURLRequest, NSURLResponse, QLPreviewParts;
@protocol OS_dispatch_io;

@interface QLPreviewConverter : NSObject
{
    QLPreviewParts *_previewParts;
    NSDictionary *_options;
    NSObject<OS_dispatch_io> *_io_write;
    NSURL *_tmpFileURL;
    long long _totalWrittenBytes;
    BOOL _dataPhaseFinished;
    BOOL _dataGatheringSucceeded;
}

@property (readonly, nonatomic) NSString *previewFileName;
@property (readonly, nonatomic) QLPreviewParts *previewParts;
@property (readonly, nonatomic) NSURLRequest *previewRequest;
@property (readonly, nonatomic) NSURLResponse *previewResponse;
@property (readonly, nonatomic) NSString *previewUTI;

+ (id)_csvMIMETypes;
+ (id)_csvUTIs;
+ (id)_iWorkMIMETypes;
+ (id)_iWorkUTIs;
+ (id)_lpdfUTIs;
+ (id)_officeMIMETypes;
+ (id)_officeUTIs;
+ (id)_rtfMIMETypes;
+ (id)_rtfUTIs;
+ (id)_spreadSheetMIMETypes;
+ (id)_spreadSheetUTIs;
+ (BOOL)canConvertDocumentType:(id)arg1;
+ (id)convertibleMIMETypes;
+ (id)convertibleUTIs;
+ (BOOL)isCSVDocumentType:(id)arg1;
+ (BOOL)isIWorkDocumentType:(id)arg1;
+ (BOOL)isLPDFDocumentType:(id)arg1;
+ (BOOL)isOfficeDocumentType:(id)arg1;
+ (BOOL)isRTFDocumentType:(id)arg1;
+ (BOOL)isSafeRequest:(id)arg1;
+ (BOOL)isSafeURL:(id)arg1;
+ (BOOL)isSpreadSheetDocumentType:(id)arg1;
- (void).cxx_destruct;
- (void)_closeIOCahnnel;
- (void)_createDispatchIOChannel;
- (void)_register;
- (void)_writeDataArrayIntoStream:(id)arg1;
- (void)appendData:(id)arg1;
- (void)appendDataArray:(id)arg1;
- (void)cancel;
- (void)dealloc;
- (void)finishConverting;
- (void)finishedAppendingData;
- (BOOL)htmlErrorDisabled;
- (id)initWithConnection:(id)arg1 delegate:(id)arg2 response:(id)arg3 options:(id)arg4;
- (id)initWithData:(id)arg1 name:(id)arg2 uti:(id)arg3 options:(id)arg4;
- (id)initWithURL:(id)arg1 uti:(id)arg2 options:(id)arg3;
- (BOOL)isCancelled;
- (BOOL)isComputed;
- (id)safeRequestForRequest:(id)arg1;
- (void)setHtmlErrorDisabled:(BOOL)arg1;

@end

