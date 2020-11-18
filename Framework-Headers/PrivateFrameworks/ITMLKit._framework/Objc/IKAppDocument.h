//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <ITMLKit/IKJSDOMDocumentAppBridgeInternal-Protocol.h>
#import <ITMLKit/IKStyleMediaQueryEvaluator-Protocol.h>

@class IKAppContext, IKDOMDocument, IKHeadElement, IKJSNavigationDocument, IKJSObject, IKViewElement, IKViewElementStyleFactory, NSDictionary, NSError, NSMapTable, NSMutableDictionary, NSString;
@protocol IKAppDocumentDelegate, IKNetworkRequestLoader;

@interface IKAppDocument : NSObject <IKJSDOMDocumentAppBridgeInternal, IKStyleMediaQueryEvaluator>
{
    NSMutableDictionary *_mediaQueryCache;
    BOOL _parsingDOM;
    BOOL _isTrackingImplicitUpdates;
    NSMapTable *_viewElementRegistry;
    BOOL _isViewElementRegistryDirty;
    BOOL _updated;
    BOOL _subtreeUpdated;
    BOOL _implicitlyUpdated;
    IKAppContext *_appContext;
    IKDOMDocument *_jsDocument;
    NSString *_identifier;
    IKHeadElement *_headElement;
    IKViewElement *_navigationBarElement;
    IKViewElement *_toolbarElement;
    IKViewElement *_templateElement;
    NSError *_error;
    id<IKAppDocumentDelegate> _delegate;
    double _impressionThreshold;
    double _impressionViewablePercentage;
    NSDictionary *_cachedSnapshotImpressionsMap;
    NSMutableDictionary *_impressions;
    IKJSObject *_owner;
    IKViewElementStyleFactory *_styleFactory;
}

@property (readonly, weak) IKAppContext *appContext; // @synthesize appContext=_appContext;
@property (strong, nonatomic) NSDictionary *cachedSnapshotImpressionsMap; // @synthesize cachedSnapshotImpressionsMap=_cachedSnapshotImpressionsMap;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<IKAppDocumentDelegate> delegate; // @synthesize delegate=_delegate;
@property (readonly, copy) NSString *description;
@property (strong, nonatomic) NSError *error; // @synthesize error=_error;
@property (readonly) unsigned long long hash;
@property (strong) IKHeadElement *headElement; // @synthesize headElement=_headElement;
@property (strong) NSString *identifier; // @synthesize identifier=_identifier;
@property (readonly, nonatomic, getter=isImplicitlyUpdated) BOOL implicitlyUpdated; // @synthesize implicitlyUpdated=_implicitlyUpdated;
@property (nonatomic) double impressionThreshold; // @synthesize impressionThreshold=_impressionThreshold;
@property (nonatomic) double impressionViewablePercentage; // @synthesize impressionViewablePercentage=_impressionViewablePercentage;
@property (strong, nonatomic) NSMutableDictionary *impressions; // @synthesize impressions=_impressions;
@property (readonly, weak, nonatomic) IKDOMDocument *jsDocument; // @synthesize jsDocument=_jsDocument;
@property (strong) IKViewElement *navigationBarElement; // @synthesize navigationBarElement=_navigationBarElement;
@property (readonly, weak, nonatomic) IKJSNavigationDocument *navigationDocument;
@property (readonly, weak, nonatomic) IKJSObject *owner; // @synthesize owner=_owner;
@property (readonly, nonatomic) id<IKNetworkRequestLoader> requestLoader;
@property (strong, nonatomic) IKViewElementStyleFactory *styleFactory; // @synthesize styleFactory=_styleFactory;
@property (getter=isSubtreeUpdated) BOOL subtreeUpdated; // @synthesize subtreeUpdated=_subtreeUpdated;
@property (readonly) Class superclass;
@property (strong) IKViewElement *templateElement; // @synthesize templateElement=_templateElement;
@property (strong) IKViewElement *toolbarElement; // @synthesize toolbarElement=_toolbarElement;
@property (nonatomic, getter=isUpdated) BOOL updated; // @synthesize updated=_updated;

- (void).cxx_destruct;
- (BOOL)_isUpdateAllowed;
- (void)_setViewElementStylesDirtyForced:(BOOL)arg1;
- (void)_updateWithXML:(id)arg1;
- (id)_viewElementForNodeID:(unsigned long long)arg1;
- (void)dealloc;
- (BOOL)evaluateStyleMediaQueryList:(id)arg1;
- (id)impressionsMatching:(id)arg1 reset:(BOOL)arg2;
- (id)initWithAppContext:(id)arg1 document:(id)arg2 owner:(id)arg3;
- (id)initWithAppContext:(id)arg1 document:(id)arg2 owner:(id)arg3 extraInfo:(id)arg4;
- (BOOL)markImplicitlyUpdated;
- (void)onActive;
- (void)onAppear;
- (void)onDisappear;
- (void)onImpressionsChange:(id)arg1;
- (void)onInactive;
- (void)onLoad;
- (void)onNeedsUpdateWithCompletion:(CDUnknownBlockType)arg1;
- (void)onPerformanceMetricsChange:(id)arg1;
- (void)onUnload;
- (void)onUpdate;
- (void)onViewAttributesChangeWithArguments:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)performImplicitUpdates:(CDUnknownBlockType)arg1;
- (void)recordImpressionsForViewElements:(id)arg1;
- (id)recordedImpressions;
- (id)recordedImpressions:(BOOL)arg1;
- (id)retrieveJSElementForViewElement:(id)arg1 jsContext:(id)arg2;
- (void)runTestWithName:(id)arg1 options:(id)arg2;
- (void)scrollToTop;
- (void)setNeedsUpdateForDocument:(id)arg1;
- (void)setViewElementStylesDirty;
- (id)snapshotImpressions;
- (void)snapshotImpressionsForViewElements:(id)arg1;
- (void)updateForDocument:(id)arg1;
- (id)viewElementForNodeID:(unsigned long long)arg1;

@end

