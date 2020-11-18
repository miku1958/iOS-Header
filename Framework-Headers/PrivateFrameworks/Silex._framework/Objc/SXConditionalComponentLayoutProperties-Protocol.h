//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Silex/NSObject-Protocol.h>

@protocol SXEdgeSpacing;

@protocol SXConditionalComponentLayoutProperties <NSObject>

@property (readonly, nonatomic) struct _NSRange columnRange;
@property (readonly, nonatomic) struct _SXComponentContentInset contentInset;
@property (readonly, nonatomic) unsigned long long horizontalContentAlignment;
@property (readonly, nonatomic) unsigned long long ignoreDocumentGutter;
@property (readonly, nonatomic) unsigned long long ignoreDocumentMargin;
@property (readonly, nonatomic) unsigned long long ignoreViewportPadding;
@property (readonly, nonatomic) id<SXEdgeSpacing> margin;
@property (readonly, nonatomic) struct _SXConvertibleValue maximumContentWidth;
@property (readonly, nonatomic) struct _SXConvertibleValue maximumWidth;
@property (readonly, nonatomic) struct _SXConvertibleValue minimumHeight;
@property (readonly, nonatomic) struct _SXConvertibleValue minimumWidth;
@property (readonly, nonatomic) id<SXEdgeSpacing> padding;
@property (readonly, nonatomic) struct _SXConvertibleValue suggestedHeight;

@end
