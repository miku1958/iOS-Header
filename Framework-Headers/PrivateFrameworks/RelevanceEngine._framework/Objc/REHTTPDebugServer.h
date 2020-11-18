//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <RelevanceEngine/REHTTPServerDelegate-Protocol.h>

@class NSArray, NSString, REHTMLPageBuilder, REHTTPFileCache, REHTTPServer;
@protocol REHTTPDebugServerDataSource;

@interface REHTTPDebugServer : NSObject <REHTTPServerDelegate>
{
    REHTTPServer *_server;
    REHTMLPageBuilder *_pageBuilder;
    REHTTPFileCache *_cache;
    struct {
        unsigned int implementsProvideAvailableEngines:1;
        unsigned int implementsHandleFileRequest:1;
    } _dataSourceCallbacks;
    id<REHTTPDebugServerDataSource> _dataSource;
    NSArray *_availableEngines;
    NSString *_processName;
}

@property (strong) NSArray *availableEngines; // @synthesize availableEngines=_availableEngines;
@property (readonly, weak, nonatomic) id<REHTTPDebugServerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property (readonly, nonatomic) unsigned short port;
@property (strong) NSString *processName; // @synthesize processName=_processName;

- (void).cxx_destruct;
- (id)_aboutPage;
- (void)_availableEngineInstancesForProcess:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_create404Element;
- (id)_createContentItemWithTitle:(id)arg1 content:(id)arg2;
- (id)_engineList;
- (id)_enginesPage;
- (void)_handleFileRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (BOOL)_isReservedFilePath:(id)arg1;
- (id)_landPageFileName;
- (id)_landingPage;
- (void)_loadAvailableEngines:(id)arg1;
- (void)_loadEngineListWithRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_loadPageForReservedPath:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)_pageMap;
- (id)_pageTitle;
- (id)_radarLinkWithTitle:(id)arg1;
- (SEL)_serverMethod:(id)arg1;
- (void)httpServer:(id)arg1 handleRequest:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithPort:(unsigned short)arg1 dataSource:(id)arg2;

@end
