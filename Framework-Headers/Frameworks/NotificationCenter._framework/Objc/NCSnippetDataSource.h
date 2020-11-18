//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <NotificationCenter/NCDataSource-Protocol.h>
#import <NotificationCenter/NCSnippetDataSourceObserver-Protocol.h>
#import <NotificationCenter/_NCSnippetDataSource-Protocol.h>

@class BBSectionInfo, NSString, _NCConcreteDataSource;
@protocol _NCSnippetDataSourceManager;

@interface NCSnippetDataSource : NSObject <NCSnippetDataSourceObserver, _NCSnippetDataSource, NCDataSource>
{
    _NCConcreteDataSource *_concreteDataSource;
    NSString *_dataSourceIdentifier;
    NSString *_parentDataSourceIdentifier;
    long long _snippetDataSourceCategory;
    id<_NCSnippetDataSourceManager> _snippetDataSourceManager;
    BBSectionInfo *_representedSectionInfo;
}

@property (readonly, nonatomic) NSString *dataSourceIdentifier; // @synthesize dataSourceIdentifier=_dataSourceIdentifier;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *parentDataSourceIdentifier; // @synthesize parentDataSourceIdentifier=_parentDataSourceIdentifier;
@property (strong, nonatomic) BBSectionInfo *representedSectionInfo; // @synthesize representedSectionInfo=_representedSectionInfo;
@property (readonly, nonatomic) long long snippetDataSourceCategory; // @synthesize snippetDataSourceCategory=_snippetDataSourceCategory;
@property (nonatomic) id<_NCSnippetDataSourceManager> snippetDataSourceManager; // @synthesize snippetDataSourceManager=_snippetDataSourceManager;
@property (readonly) Class superclass;

- (void)addSnippetObserver:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithCategory:(long long)arg1 identifier:(id)arg2 parentDataSourceIdentifier:(id)arg3;
- (BOOL)isEqual:(id)arg1;
- (void)removeSnippetObserver:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)snippetDataSource:(id)arg1 removeDatum:(id)arg2;
- (void)snippetDataSource:(id)arg1 replaceWithDatum:(id)arg2;

@end
