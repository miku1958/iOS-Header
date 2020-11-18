//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <iWorkImport/TSULogContext-Protocol.h>

@class NSString, TSKDocumentRoot;

__attribute__((visibility("hidden")))
@interface TSKDocumentRootLogContext : NSObject <TSULogContext>
{
    TSKDocumentRoot *_documentRoot;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) NSString *privateString;
@property (readonly) NSString *publicString;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithDocumentRoot:(id)arg1;

@end

