//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXQuickLookComponentFileProvider-Protocol.h>

@class NSString, SXDocumentController;
@protocol SXResourceDataSource;

@interface SXQuickLookComponentFileProvider : NSObject <SXQuickLookComponentFileProvider>
{
    SXDocumentController *_documentController;
    id<SXResourceDataSource> _resourceDataSource;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) SXDocumentController *documentController; // @synthesize documentController=_documentController;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<SXResourceDataSource> resourceDataSource; // @synthesize resourceDataSource=_resourceDataSource;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)copyFileIfNeeded:(id)arg1 to:(id)arg2 error:(id *)arg3;
- (void)fileForComponent:(id)arg1 onCompletion:(CDUnknownBlockType)arg2 onError:(CDUnknownBlockType)arg3;
- (id)initWithDocumentController:(id)arg1 resourceDataSource:(id)arg2;

@end

