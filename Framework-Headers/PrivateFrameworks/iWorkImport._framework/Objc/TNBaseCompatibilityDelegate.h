//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSKCompatibilityDelegate-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TNBaseCompatibilityDelegate : NSObject <TSKCompatibilityDelegate>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (id)backwardsCompatibleTypeForType:(id)arg1;
- (Class)exportOptionsControllerClass;
- (id)exportableTypes;
- (Class)exporterClassForType:(id)arg1 options:(id)arg2;
- (Class)importerClassForType:(id)arg1 path:(id)arg2;
- (id)indexXmlFilename;
- (BOOL)isSageDocumentType:(id)arg1;
- (BOOL)isTCMessageExceptionErrorDomain:(id)arg1;
- (id)needNewerVersionIndexXmlContentString;
- (id)nestedDocumentFilename;
- (id)newExportableDocumentTypesForFlag:(unsigned long long)arg1;

@end
