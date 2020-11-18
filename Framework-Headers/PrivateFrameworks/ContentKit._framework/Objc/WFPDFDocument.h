//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface WFPDFDocument : NSObject
{
    BOOL _encrypted;
    BOOL _locked;
    BOOL _allowsPrinting;
    BOOL _allowsCopying;
    struct CGPDFDocument *_documentRef;
    NSArray *_pages;
}

@property (nonatomic) BOOL allowsCopying; // @synthesize allowsCopying=_allowsCopying;
@property (nonatomic) BOOL allowsPrinting; // @synthesize allowsPrinting=_allowsPrinting;
@property (readonly, nonatomic) struct CGPDFDocument *documentRef; // @synthesize documentRef=_documentRef;
@property (nonatomic, getter=isEncrypted) BOOL encrypted; // @synthesize encrypted=_encrypted;
@property (readonly, nonatomic) unsigned long long expectedPageCount;
@property (nonatomic, getter=isLocked) BOOL locked; // @synthesize locked=_locked;
@property (readonly, nonatomic) int majorVersion;
@property (readonly, nonatomic) int minorVersion;
@property (readonly, nonatomic) Class pageClass;
@property (strong, nonatomic) NSArray *pages; // @synthesize pages=_pages;

- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithData:(id)arg1;
- (id)initWithDocumentRef:(struct CGPDFDocument *)arg1;
- (id)initWithURL:(id)arg1;
- (BOOL)unlockWithPassword:(id)arg1;

@end
