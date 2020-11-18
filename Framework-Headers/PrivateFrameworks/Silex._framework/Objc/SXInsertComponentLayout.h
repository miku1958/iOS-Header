//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Silex/SXComponentLayout-Protocol.h>

@class NSString, SXJSONArray;
@protocol SXEdgeSpacing;

@interface SXInsertComponentLayout : NSObject <SXComponentLayout>
{
    struct _SXComponentContentInset _contentInset;
    unsigned long long _ignoreDocumentGutter;
    unsigned long long _ignoreDocumentMargin;
    id<SXEdgeSpacing> _margin;
    unsigned long long _horizontalContentAlignment;
    id<SXEdgeSpacing> _padding;
    struct _NSRange _columnRange;
    struct _SXConvertibleValue _minimumHeight;
    struct _SXConvertibleValue _maximumContentWidth;
    struct _SXConvertibleValue _suggestedHeight;
}

@property (readonly, nonatomic) struct _NSRange columnRange; // @synthesize columnRange=_columnRange;
@property (readonly, nonatomic) SXJSONArray *conditional;
@property (readonly, nonatomic) struct _SXComponentContentInset contentInset; // @synthesize contentInset=_contentInset;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) unsigned long long horizontalContentAlignment; // @synthesize horizontalContentAlignment=_horizontalContentAlignment;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long ignoreDocumentGutter; // @synthesize ignoreDocumentGutter=_ignoreDocumentGutter;
@property (nonatomic) unsigned long long ignoreDocumentMargin; // @synthesize ignoreDocumentMargin=_ignoreDocumentMargin;
@property (strong, nonatomic) id<SXEdgeSpacing> margin; // @synthesize margin=_margin;
@property (readonly, nonatomic) struct _SXConvertibleValue maximumContentWidth; // @synthesize maximumContentWidth=_maximumContentWidth;
@property (readonly, nonatomic) struct _SXConvertibleValue maximumWidth;
@property (readonly, nonatomic) struct _SXConvertibleValue minimumHeight; // @synthesize minimumHeight=_minimumHeight;
@property (readonly, nonatomic) struct _SXConvertibleValue minimumWidth;
@property (readonly, nonatomic) id<SXEdgeSpacing> padding; // @synthesize padding=_padding;
@property (readonly, nonatomic) struct _SXConvertibleValue suggestedHeight; // @synthesize suggestedHeight=_suggestedHeight;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)initWithColumnRange:(struct _NSRange)arg1;

@end

