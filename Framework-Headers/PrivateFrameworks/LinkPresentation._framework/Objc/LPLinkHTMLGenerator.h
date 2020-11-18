//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class DOMDocument, DOMDocumentFragment, DOMElement, LPCSSResolver, LPCaptionBarPresentationProperties, LPHTMLComponent, LPImage, LPLinkMetadata, LPMetadataProvider, LPTheme, LPVideo, NSString, NSURL, UIColor;
@protocol LPLinkHTMLGeneratorDelegate;

@interface LPLinkHTMLGenerator : NSObject
{
    LPMetadataProvider *_pendingMetadataProvider;
    BOOL _mayReceiveAdditionalMetadata;
    BOOL _usesComputedPresentationProperties;
    LPCaptionBarPresentationProperties *_captionBar;
    LPCaptionBarPresentationProperties *_mediaTopCaptionBar;
    LPCaptionBarPresentationProperties *_mediaBottomCaptionBar;
    NSString *_quotedText;
    LPImage *_image;
    LPVideo *_video;
    UIColor *_backgroundColor;
    DOMElement *_rootElement;
    LPHTMLComponent *_linkComponent;
    BOOL _everBuiltView;
    BOOL _useVariablesWhenUsingInlineStyles;
    BOOL _includeClassNamesWhenUsingInlineStyles;
    BOOL _allowsTapToLoad;
    BOOL _useInlineStyles;
    BOOL _applyCornerRadiusToLink;
    BOOL _generateEmailCompatibleMarkup;
    BOOL _isPreliminary;
    id<LPLinkHTMLGeneratorDelegate> _delegate;
    LPLinkMetadata *_metadata;
    NSURL *_URL;
    DOMDocument *_parentDocument;
    LPCSSResolver *_cssResolver;
    long long _style;
    LPTheme *_theme;
}

@property (readonly, copy, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property (nonatomic, setter=_setAllowsTapToLoad:) BOOL _allowsTapToLoad; // @synthesize _allowsTapToLoad;
@property (readonly, nonatomic) BOOL _canTapToLoad;
@property (nonatomic, setter=_setIncludeClassNamesWhenUsingInlineStyles:) BOOL _includeClassNamesWhenUsingInlineStyles; // @synthesize _includeClassNamesWhenUsingInlineStyles;
@property (nonatomic, setter=_setUseVariablesWhenUsingInlineStyles:) BOOL _useVariablesWhenUsingInlineStyles; // @synthesize _useVariablesWhenUsingInlineStyles;
@property (nonatomic) BOOL applyCornerRadiusToLink; // @synthesize applyCornerRadiusToLink=_applyCornerRadiusToLink;
@property (readonly, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
@property (readonly, nonatomic) LPCSSResolver *cssResolver; // @synthesize cssResolver=_cssResolver;
@property (weak, nonatomic) id<LPLinkHTMLGeneratorDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, nonatomic) BOOL delegateRespondsToURLForResource;
@property (readonly, strong, nonatomic) DOMDocumentFragment *documentFragment;
@property (nonatomic) BOOL generateEmailCompatibleMarkup; // @synthesize generateEmailCompatibleMarkup=_generateEmailCompatibleMarkup;
@property (readonly, nonatomic) BOOL hasPendingMetadataProvider;
@property (readonly, nonatomic) BOOL hasTallMedia;
@property (readonly, nonatomic) BOOL isPreliminary; // @synthesize isPreliminary=_isPreliminary;
@property (copy, nonatomic) LPLinkMetadata *metadata; // @synthesize metadata=_metadata;
@property (readonly, nonatomic) DOMDocument *parentDocument; // @synthesize parentDocument=_parentDocument;
@property (readonly, nonatomic) long long style; // @synthesize style=_style;
@property (readonly, nonatomic) LPTheme *theme; // @synthesize theme=_theme;
@property (readonly, nonatomic) BOOL useFlexibleWidth;
@property (nonatomic) BOOL useInlineStyles; // @synthesize useInlineStyles=_useInlineStyles;

+ (void)initialize;
- (void).cxx_destruct;
- (id)_URLForImage:(id)arg1;
- (id)_URLForResource:(id)arg1 withMIMEType:(id)arg2;
- (void)_computePresentationPropertiesFromMetadata;
- (id)_createCaptionBar;
- (id)_createMediaBottomCaptionBar;
- (id)_createMediaComponent;
- (id)_createMediaTopCaptionBar;
- (id)_createQuoteComponent;
- (void)_fetchMetadata;
- (void)_rebuildView;
- (void)_setMetadata:(id)arg1 isFinal:(BOOL)arg2;
- (void)_setPresentationProperties:(id)arg1;
- (void)clearCurrentLayout;
- (id)init;
- (id)initWithMetadataLoadedFromURL:(id)arg1 document:(id)arg2;
- (id)initWithPresentationProperties:(id)arg1 URL:(id)arg2 document:(id)arg3;
- (id)initWithPresentationProperties:(id)arg1 document:(id)arg2;
- (id)initWithURL:(id)arg1 document:(id)arg2;
- (void)injectCSSIfNeeded;

@end
