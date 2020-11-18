//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXTextSourceDataSource-Protocol.h>

@class NSString, SXFormattedText;
@protocol SXFullscreenCaptionDataSource;

@interface SXFullscreenCaption : NSObject <SXTextSourceDataSource>
{
    NSString *_text;
    SXFormattedText *_caption;
    id<SXFullscreenCaptionDataSource> _dataSource;
}

@property (readonly, nonatomic) SXFormattedText *caption; // @synthesize caption=_caption;
@property (readonly, weak, nonatomic) id<SXFullscreenCaptionDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSString *text; // @synthesize text=_text;

- (void).cxx_destruct;
- (id)additionsForTextSource:(id)arg1;
- (id)componentTextStyleForTextSource:(id)arg1 inheritingFromDefaultStyles:(BOOL)arg2;
- (id)contentSizeCategoryForTextSource:(id)arg1;
- (id)defaultComponentTextStyleForTextSource:(id)arg1;
- (id)defaultComponentTextStylesForTextSource:(id)arg1;
- (id)initWithCaption:(id)arg1 dataSource:(id)arg2;
- (id)initWithText:(id)arg1 dataSource:(id)arg2;
- (id)inlineTextStylesForTextSource:(id)arg1;
- (id)linkStyleForTextSource:(id)arg1;
- (id)textResizerForTextSource:(id)arg1;
- (id)textRulesForTextSource:(id)arg1;
- (id)textStyleForIdentifier:(id)arg1;

@end

