//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <UIKitCore/UIGraphicsRendererContext.h>

@interface UIGraphicsPDFRendererContext : UIGraphicsRendererContext
{
    BOOL _inPage;
    struct CGRect _documentBounds;
    struct CGRect _pageBounds;
}

@property struct CGRect documentBounds; // @synthesize documentBounds=_documentBounds;
@property BOOL inPage; // @synthesize inPage=_inPage;
@property struct CGRect pageBounds; // @synthesize pageBounds=_pageBounds;
@property (readonly, nonatomic) struct CGRect pdfContextBounds;

- (void)addDestinationWithName:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)beginPage;
- (void)beginPageWithBounds:(struct CGRect)arg1 pageInfo:(id)arg2;
- (void)setDestinationWithName:(id)arg1 forRect:(struct CGRect)arg2;
- (void)setURL:(id)arg1 forRect:(struct CGRect)arg2;
- (void)updateAuxInfo:(id)arg1;

@end

