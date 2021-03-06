//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HelpKit/HLPRemoteDataController.h>

@class HLPHelpLocale, HLPHelpSectionItem, HLPURLImageCacheController, NSMutableDictionary, NSString, NSURL;

@interface HLPHelpBookController : HLPRemoteDataController
{
    BOOL _hasSectionIcon;
    BOOL _fullBookView;
    long long _contentFormatVersion;
    long long _serverType;
    NSMutableDictionary *_helpItemMap;
    NSString *_contentVersion;
    NSString *_copyrightText;
    NSString *_copyrightTopicIdentifier;
    NSString *_bookId;
    NSString *_topicPathFormat;
    NSString *_remoteSearchPath;
    NSString *_remoteCSSearchIndex;
    NSString *_iconBasePath;
    HLPHelpLocale *_locale;
    NSString *_welcomeTopicIdentifier;
    NSURL *_helpBookURL;
    HLPHelpSectionItem *_rootSectionItem;
    HLPURLImageCacheController *_imageCacheController;
}

@property (strong, nonatomic) NSString *bookId; // @synthesize bookId=_bookId;
@property (nonatomic) long long contentFormatVersion; // @synthesize contentFormatVersion=_contentFormatVersion;
@property (strong, nonatomic) NSString *contentVersion; // @synthesize contentVersion=_contentVersion;
@property (strong, nonatomic) NSString *copyrightText; // @synthesize copyrightText=_copyrightText;
@property (strong, nonatomic) NSString *copyrightTopicIdentifier; // @synthesize copyrightTopicIdentifier=_copyrightTopicIdentifier;
@property (nonatomic) BOOL fullBookView; // @synthesize fullBookView=_fullBookView;
@property (nonatomic) BOOL hasSectionIcon; // @synthesize hasSectionIcon=_hasSectionIcon;
@property (strong, nonatomic) NSURL *helpBookURL; // @synthesize helpBookURL=_helpBookURL;
@property (strong, nonatomic) NSMutableDictionary *helpItemMap; // @synthesize helpItemMap=_helpItemMap;
@property (strong, nonatomic) NSString *iconBasePath; // @synthesize iconBasePath=_iconBasePath;
@property (strong, nonatomic) HLPURLImageCacheController *imageCacheController; // @synthesize imageCacheController=_imageCacheController;
@property (strong, nonatomic) HLPHelpLocale *locale; // @synthesize locale=_locale;
@property (strong, nonatomic) NSString *remoteCSSearchIndex; // @synthesize remoteCSSearchIndex=_remoteCSSearchIndex;
@property (strong, nonatomic) NSString *remoteSearchPath; // @synthesize remoteSearchPath=_remoteSearchPath;
@property (strong, nonatomic) HLPHelpSectionItem *rootSectionItem; // @synthesize rootSectionItem=_rootSectionItem;
@property (readonly, nonatomic, getter=isSemanticHTML) BOOL semanticHTML; // @dynamic semanticHTML;
@property (nonatomic) long long serverType; // @synthesize serverType=_serverType;
@property (strong, nonatomic) NSString *topicPathFormat; // @synthesize topicPathFormat=_topicPathFormat;
@property (strong, nonatomic) NSString *welcomeTopicIdentifier; // @synthesize welcomeTopicIdentifier=_welcomeTopicIdentifier;

- (void).cxx_destruct;
- (void)addAsideTopic:(id)arg1;
- (id)copyrightTopicItem;
- (void)dealloc;
- (id)dynamicServerSectionsForIdentifiers:(id)arg1 level:(long long)arg2 parent:(id)arg3 tocMap:(id)arg4;
- (void)fetchDataWithDataType:(long long)arg1 identifier:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)helpItemForID:(id)arg1;
- (id)helpTopicItemForID:(id)arg1;
- (id)helpTopicItemForName:(id)arg1;
- (void)processData:(id)arg1 formattedData:(id)arg2;
- (void)processFileURLWithCompletionHandler:(CDUnknownBlockType)arg1;
- (id)sectionsForChildrenIdentifiers:(id)arg1 level:(long long)arg2 parent:(id)arg3 sectionsMap:(id)arg4 topicsMap:(id)arg5;
- (id)welcomeTopicItem;

@end

