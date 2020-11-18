//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXDataTableTextSourceFactory-Protocol.h>

@class NSString;
@protocol SXDocumentLanguageProviding, SXFontAttributesConstructor, SXSmartFieldFactory;

@interface SXDataTableTextSourceFactory : NSObject <SXDataTableTextSourceFactory>
{
    id<SXSmartFieldFactory> _smartFieldFactory;
    id<SXDocumentLanguageProviding> _documentLanguageProvider;
    id<SXFontAttributesConstructor> _fontAttributesConstructor;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) id<SXDocumentLanguageProviding> documentLanguageProvider; // @synthesize documentLanguageProvider=_documentLanguageProvider;
@property (readonly, nonatomic) id<SXFontAttributesConstructor> fontAttributesConstructor; // @synthesize fontAttributesConstructor=_fontAttributesConstructor;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) id<SXSmartFieldFactory> smartFieldFactory; // @synthesize smartFieldFactory=_smartFieldFactory;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithSmartFieldFactory:(id)arg1 documentLanguageProvider:(id)arg2 fontAttributesConstructor:(id)arg3;
- (id)textSourceWithFormattedText:(id)arg1 indexPath:(CDStruct_2fea82da)arg2 dataSource:(id)arg3;

@end

