//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSDictionary, NSMutableDictionary, NSString, NSURL, UIFont, UITraitCollection;
@protocol OS_dispatch_queue, TPSConstellationContentParserDelegate;

@interface TPSConstellationContentParser : NSObject
{
    BOOL _ignoreLinks;
    BOOL _delegateRespondsToBoldFont;
    BOOL _delegateRespondsToItalicFont;
    int _numberOfParagraphTags;
    id<TPSConstellationContentParserDelegate> _delegate;
    long long _numOfActiveRemoteURLSessions;
    UITraitCollection *_traitCollection;
    NSString *_identifier;
    NSAttributedString *_attributedString;
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSMutableDictionary *_assetsSessionItemMap;
    NSMutableDictionary *_assetsTextAttachmentMap;
    UIFont *_boldFont;
    UIFont *_italicFont;
    NSDictionary *_defaultAttributes;
    NSString *_language;
    NSURL *_assetsBaseURL;
}

@property (strong, nonatomic) NSURL *assetsBaseURL; // @synthesize assetsBaseURL=_assetsBaseURL;
@property (strong, nonatomic) NSMutableDictionary *assetsSessionItemMap; // @synthesize assetsSessionItemMap=_assetsSessionItemMap;
@property (strong, nonatomic) NSMutableDictionary *assetsTextAttachmentMap; // @synthesize assetsTextAttachmentMap=_assetsTextAttachmentMap;
@property (copy, nonatomic) NSAttributedString *attributedString; // @synthesize attributedString=_attributedString;
@property (strong, nonatomic) UIFont *boldFont; // @synthesize boldFont=_boldFont;
@property (strong, nonatomic) NSDictionary *defaultAttributes; // @synthesize defaultAttributes=_defaultAttributes;
@property (weak, nonatomic) id<TPSConstellationContentParserDelegate> delegate; // @synthesize delegate=_delegate;
@property (nonatomic) BOOL delegateRespondsToBoldFont; // @synthesize delegateRespondsToBoldFont=_delegateRespondsToBoldFont;
@property (nonatomic) BOOL delegateRespondsToItalicFont; // @synthesize delegateRespondsToItalicFont=_delegateRespondsToItalicFont;
@property (copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (nonatomic) BOOL ignoreLinks; // @synthesize ignoreLinks=_ignoreLinks;
@property (strong, nonatomic) UIFont *italicFont; // @synthesize italicFont=_italicFont;
@property (strong, nonatomic) NSString *language; // @synthesize language=_language;
@property (nonatomic) long long numOfActiveRemoteURLSessions; // @synthesize numOfActiveRemoteURLSessions=_numOfActiveRemoteURLSessions;
@property (nonatomic) int numberOfParagraphTags; // @synthesize numberOfParagraphTags=_numberOfParagraphTags;
@property (strong, nonatomic) NSObject<OS_dispatch_queue> *syncQueue; // @synthesize syncQueue=_syncQueue;
@property (copy, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;

+ (id)inlineIconPlaceHolderImage;
- (void).cxx_destruct;
- (id)_colorForSystemColorString:(id)arg1;
- (struct CGSize)assetSizeFromAttributes:(id)arg1;
- (id)attributedStringForConstellationContent:(id)arg1 defaultAttributes:(id)arg2 identifier:(id)arg3 language:(id)arg4 assetsBaseURL:(id)arg5 error:(id *)arg6;
- (id)attributedStringForContent:(id)arg1 error:(id *)arg2;
- (id)attributedStringForInlineIconNode:(id)arg1;
- (id)attributedStringForParagraphNode:(id)arg1 error:(id *)arg2;
- (id)attributedStringForPersonalizedTextNode:(id)arg1 error:(id *)arg2;
- (id)attributedStringForSymbolNode:(id)arg1;
- (id)attributedStringForTextNode:(id)arg1;
- (id)attributesWithMarks:(id)arg1;
- (struct CGRect)boundsForImage:(id)arg1 size:(struct CGSize)arg2;
- (void)cancelAssetFetches;
- (void)dealloc;
- (void)fetchAssetConfiguration:(id)arg1 cacheIdentifier:(id)arg2 textAttachment:(id)arg3;
- (id)init;

@end

