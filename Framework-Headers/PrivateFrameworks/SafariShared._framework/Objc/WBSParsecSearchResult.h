//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SafariShared/WBSParsecModel.h>

#import <SafariShared/WBSCompletionListItem-Protocol.h>

@class NSArray, NSDictionary, NSString, NSURL, WBSParsecActionButton, WBSParsecImageRepresentation;

@interface WBSParsecSearchResult : WBSParsecModel <WBSCompletionListItem>
{
    WBSParsecImageRepresentation *_icon;
    WBSParsecImageRepresentation *_completionIcon;
    NSURL *_reportProblemURL;
    NSString *_title;
    NSString *_descriptionText;
    NSString *_identifier;
    NSString *_feedbackIdentifier;
    NSString *_urlString;
    NSString *_sectionHeader;
    NSString *_iTunesItemIdentifier;
    NSString *_completion;
    unsigned long long _type;
    NSString *_typeString;
    unsigned long long _minimumRankOfTopHitToSuppressResult;
    NSString *_appName;
    NSString *_appBundleIdentifier;
    NSURL *_appInstallURL;
    NSURL *_appPunchoutURL;
    NSString *_mediaKind;
    NSString *_referrerForLoadingResult;
    NSArray *_cardSections;
    WBSParsecActionButton *_actionButton;
    NSURL *_cardURL;
    NSArray *_supportedStyleOverrides;
    NSDictionary *_styleOverrides;
}

@property (readonly, nonatomic) WBSParsecActionButton *actionButton; // @synthesize actionButton=_actionButton;
@property (readonly, nonatomic) NSString *appBundleIdentifier; // @synthesize appBundleIdentifier=_appBundleIdentifier;
@property (readonly, nonatomic) NSURL *appInstallURL; // @synthesize appInstallURL=_appInstallURL;
@property (readonly, nonatomic) NSString *appName; // @synthesize appName=_appName;
@property (readonly, nonatomic) NSURL *appPunchoutURL; // @synthesize appPunchoutURL=_appPunchoutURL;
@property (copy, nonatomic) NSArray *cardSections; // @synthesize cardSections=_cardSections;
@property (readonly, nonatomic) NSURL *cardURL; // @synthesize cardURL=_cardURL;
@property (readonly, nonatomic) NSString *completion; // @synthesize completion=_completion;
@property (readonly, nonatomic) WBSParsecImageRepresentation *completionIcon; // @synthesize completionIcon=_completionIcon;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) NSString *descriptionText; // @synthesize descriptionText=_descriptionText;
@property (readonly, nonatomic) NSString *feedbackIdentifier; // @synthesize feedbackIdentifier=_feedbackIdentifier;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSString *iTunesItemIdentifier; // @synthesize iTunesItemIdentifier=_iTunesItemIdentifier;
@property (readonly, nonatomic) WBSParsecImageRepresentation *icon; // @synthesize icon=_icon;
@property (readonly, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic) NSString *lastSearchQuery;
@property (readonly, copy, nonatomic) NSString *mediaKind; // @synthesize mediaKind=_mediaKind;
@property (readonly, nonatomic) unsigned long long minimumRankOfTopHitToSuppressResult; // @synthesize minimumRankOfTopHitToSuppressResult=_minimumRankOfTopHitToSuppressResult;
@property (readonly, nonatomic) NSString *parsecDomainIdentifier;
@property (readonly, copy, nonatomic) NSString *referrerForLoadingResult; // @synthesize referrerForLoadingResult=_referrerForLoadingResult;
@property (readonly, nonatomic) NSURL *reportProblemURL;
@property (readonly, nonatomic) NSString *sectionHeader; // @synthesize sectionHeader=_sectionHeader;
@property (readonly, nonatomic) NSDictionary *styleOverrides; // @synthesize styleOverrides=_styleOverrides;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *supportedStyleOverrides; // @synthesize supportedStyleOverrides=_supportedStyleOverrides;
@property (readonly, nonatomic) NSString *title; // @synthesize title=_title;
@property (readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property (readonly, copy, nonatomic) NSString *typeString; // @synthesize typeString=_typeString;
@property (readonly, nonatomic) NSString *urlString; // @synthesize urlString=_urlString;

+ (id)_searchResultSchemaForCachedResult:(BOOL)arg1;
+ (id)_specializedSchema;
+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (Class)replacementClass;
+ (id)resultWithDictionary:(id)arg1 cache:(id)arg2;
+ (id)searchResultSchemaForCardDetailRequest;
+ (id)searchResultSchemaWithCache:(id)arg1;
+ (void)setReplacementClass:(Class)arg1;
- (void).cxx_destruct;
- (unsigned long long)_constructTypeMaskForTypeString:(id)arg1;
- (id)_glyphRepresentationsFromGlyphDictionaries:(id)arg1;
- (id)_glyphsFromGlyphRepresentations:(id)arg1 withSession:(id)arg2;
- (void)_setStyleOverridesWithDictionary:(id)arg1;
- (id)completionIconWithSession:(id)arg1;
- (id)iconWithSession:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end

