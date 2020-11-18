//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class SXDocumentController, SXHost;
@protocol SXResourceDataSource, SXTextContentProvider;

@interface SXContext : NSObject
{
    SXHost *_host;
    SXDocumentController *_documentController;
    id<SXTextContentProvider> _textContentProvider;
    id<SXResourceDataSource> _resourceDataSource;
}

@property (readonly, nonatomic) SXDocumentController *documentController; // @synthesize documentController=_documentController;
@property (readonly, nonatomic) SXHost *host; // @synthesize host=_host;
@property (readonly, weak, nonatomic) id<SXResourceDataSource> resourceDataSource; // @synthesize resourceDataSource=_resourceDataSource;
@property (readonly, nonatomic) id<SXTextContentProvider> textContentProvider; // @synthesize textContentProvider=_textContentProvider;

+ (void)prewarm;
- (void).cxx_destruct;
- (id)initWithJSONData:(id)arg1 resourceDataSource:(id)arg2 host:(id)arg3 error:(id *)arg4;

@end

