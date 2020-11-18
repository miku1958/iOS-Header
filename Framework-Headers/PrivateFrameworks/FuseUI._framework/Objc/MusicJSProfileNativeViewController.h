//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <FuseUI/MusicJSNativeViewController.h>

#import <FuseUI/MusicJSProfileNativeViewController-Protocol.h>
#import <FuseUI/SKUIDOMFeature-Protocol.h>

@class IKAppContext, IKAppDocument, IKDOMDocument, IKJSNavigationDocument, NSArray, NSDictionary, NSMutableDictionary, NSString;
@protocol MusicJSProfileNativeViewControllerDelegate;

@interface MusicJSProfileNativeViewController : MusicJSNativeViewController <MusicJSProfileNativeViewController, SKUIDOMFeature>
{
    IKDOMDocument *_relatedContentJSDocument;
    NSMutableDictionary *_segmentJSDocuments;
    NSMutableDictionary *_segmentDocuments;
    NSMutableDictionary *_segmentDocumentOptions;
    BOOL _socialHidden;
    id<MusicJSProfileNativeViewControllerDelegate> _delegate;
    NSDictionary *_availableContentFlags;
    IKAppDocument *_biographyEditorDocument;
    NSDictionary *_biographyEditorDocumentOptions;
    NSString *_followerCountText;
    NSString *_followersText;
    long long _numberOfFollowers;
    IKAppDocument *_moreRelatedContentDocument;
    NSDictionary *_moreRelatedContentDocumentOptions;
    NSDictionary *_profileEntityValueProviderData;
    IKAppDocument *_relatedContentDocument;
    NSDictionary *_relatedContentDocumentOptions;
    NSDictionary *_reportingInformation;
    NSString *_selectedSegmentIdentifier;
    IKAppDocument *_shareDocument;
    NSDictionary *_shareDocumentOptions;
    NSArray *_visibleSegments;
}

@property (readonly, weak, nonatomic) IKAppContext *appContext;
@property (readonly, nonatomic) NSDictionary *availableContentFlags; // @synthesize availableContentFlags=_availableContentFlags;
@property (readonly, nonatomic) IKAppDocument *biographyEditorDocument; // @synthesize biographyEditorDocument=_biographyEditorDocument;
@property (readonly, nonatomic) NSDictionary *biographyEditorDocumentOptions; // @synthesize biographyEditorDocumentOptions=_biographyEditorDocumentOptions;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<MusicJSProfileNativeViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (readonly, copy, nonatomic) NSString *featureName;
@property (readonly, nonatomic) NSString *followerCountText; // @synthesize followerCountText=_followerCountText;
@property (readonly, nonatomic) NSString *followersText; // @synthesize followersText=_followersText;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) IKAppDocument *moreRelatedContentDocument; // @synthesize moreRelatedContentDocument=_moreRelatedContentDocument;
@property (readonly, nonatomic) NSDictionary *moreRelatedContentDocumentOptions; // @synthesize moreRelatedContentDocumentOptions=_moreRelatedContentDocumentOptions;
@property (readonly, nonatomic) IKJSNavigationDocument *navigationDocument;
@property (readonly, nonatomic) long long numberOfFollowers; // @synthesize numberOfFollowers=_numberOfFollowers;
@property (readonly, nonatomic) NSDictionary *profileEntityValueProviderData; // @synthesize profileEntityValueProviderData=_profileEntityValueProviderData;
@property (readonly, nonatomic) IKAppDocument *relatedContentDocument; // @synthesize relatedContentDocument=_relatedContentDocument;
@property (readonly, nonatomic) NSDictionary *relatedContentDocumentOptions; // @synthesize relatedContentDocumentOptions=_relatedContentDocumentOptions;
@property (readonly, nonatomic) NSDictionary *reportingInformation; // @synthesize reportingInformation=_reportingInformation;
@property (readonly, nonatomic) NSString *selectedSegmentIdentifier; // @synthesize selectedSegmentIdentifier=_selectedSegmentIdentifier;
@property (readonly, nonatomic) IKAppDocument *shareDocument; // @synthesize shareDocument=_shareDocument;
@property (readonly, nonatomic) NSDictionary *shareDocumentOptions; // @synthesize shareDocumentOptions=_shareDocumentOptions;
@property (nonatomic, getter=isSocialHidden) BOOL socialHidden; // @synthesize socialHidden=_socialHidden;
@property (readonly) Class superclass;
@property (readonly, nonatomic) NSArray *visibleSegments; // @synthesize visibleSegments=_visibleSegments;

+ (id)featureName;
- (void).cxx_destruct;
- (id)documentForSegmentIdentifier:(id)arg1;
- (id)documentOptionsForSegmentIdentifier:(id)arg1;
- (void)enumerateSegmentIdentifiersAndDocumentsUsingBlock:(CDUnknownBlockType)arg1;
- (id)nativeViewIdentifier;
- (void)navigationDocumentDidChange;
- (void)presentBiographyEditorDocument:(id)arg1:(id)arg2;
- (void)presentShareDocument:(id)arg1:(id)arg2;
- (void)setAvailableContentFlags:(id)arg1;
- (void)setFollowerCountText:(id)arg1:(id)arg2;
- (void)setMoreRelatedContentDocument:(id)arg1:(id)arg2;
- (void)setNumberOfFollowers:(unsigned long long)arg1;
- (void)setProfileEntityValueProvider:(id)arg1;
- (void)setRelatedContentDocument:(id)arg1:(id)arg2;
- (void)setReportingInformation:(id)arg1;
- (void)setSegmentDocument:(id)arg1:(id)arg2:(id)arg3;
- (void)setSelectedSegment:(id)arg1;
- (void)setVisibleSegments:(id)arg1;
- (BOOL)supportsRelatedContentDocument;

@end

