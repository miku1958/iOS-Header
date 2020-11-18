//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OCMapper.h>

@class NSData, NSString, NSURL, OCDReader, OITSUProgressContext;

__attribute__((visibility("hidden")))
@interface OCImporter : OCMapper
{
    NSURL *mURL;
    NSData *mData;
    OCDReader *mReader;
    BOOL mTryAlternateReader;
    OITSUProgressContext *mProgressContext;
    CDUnknownBlockType mOfficeDOMInspector;
    NSString *_lastPasswordAttempted;
}

@property (copy, nonatomic) NSString *lastPasswordAttempted; // @synthesize lastPasswordAttempted=_lastPasswordAttempted;
@property (copy, nonatomic) CDUnknownBlockType officeDOMInspector; // @synthesize officeDOMInspector=mOfficeDOMInspector;
@property (strong) OITSUProgressContext *progressContext; // @synthesize progressContext=mProgressContext;

+ (BOOL)URLIsXML:(id)arg1;
+ (Class)binaryReaderClass;
+ (void)initialize;
+ (Class)readerClassForURL:(id)arg1;
+ (id)xmlPathExtensions;
+ (Class)xmlReaderClass;
- (void).cxx_destruct;
- (void)dealloc;
- (id)displayName;
- (id)filename;
- (void)finalizeWithDocumentState:(id)arg1;
- (id)initWithData:(id)arg1;
- (id)initWithURL:(id)arg1;
- (BOOL)isDocumentEncryptedUnsupportedVersion:(BOOL *)arg1 errorMessage:(id *)arg2;
- (BOOL)isDocumentEncryptedUnsupportedVersionHelper:(BOOL *)arg1 errorMessage:(id *)arg2 readError:(BOOL *)arg3;
- (BOOL)isXML;
- (Class)readerClass;
- (BOOL)setPassphrase:(id)arg1;
- (void)setURL:(id)arg1;
- (BOOL)start;
- (BOOL)tryAlternateReader;
- (id)url;

@end
