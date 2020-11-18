//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <iWorkImport/TPRenderingExporter.h>

#import <iWorkImport/TSKEncryptedDocumentExporter-Protocol.h>

@class NSDictionary, NSString;

__attribute__((visibility("hidden")))
@interface TPPdfExporter : TPRenderingExporter <TSKEncryptedDocumentExporter>
{
    NSDictionary *mOptions;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)p_renderingExporterDelegate;
- (void)setCopyPassphrase:(id)arg1 hint:(id)arg2;
- (void)setOptions:(id)arg1;
- (void)setPassphrase:(id)arg1 hint:(id)arg2;
- (void)setPrintPassphrase:(id)arg1 hint:(id)arg2;
- (BOOL)validatePassphrases:(id *)arg1;

@end
