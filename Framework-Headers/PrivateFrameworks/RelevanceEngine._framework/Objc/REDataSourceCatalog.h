//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSCache, NSMutableDictionary, NSSet, REAppIconCache, REAppNameCache, REDataSourceManager;
@protocol OS_dispatch_queue;

@interface REDataSourceCatalog : NSObject
{
    REDataSourceManager *_dataSourceManager;
    NSCache *_iconCache;
    NSMutableDictionary *_localizedNameCache;
    NSObject<OS_dispatch_queue> *_queue;
    REAppIconCache *_appIconCache;
    REAppNameCache *_appNameCache;
}

@property (readonly, nonatomic) NSSet *dataSourceIdentifiers;

- (void).cxx_destruct;
- (void)_applicationsStatesDidChange;
- (id)applicationIdentifierForDataSourceWithIdentifier:(id)arg1;
- (void)dealloc;
- (void)donatedAppIdentifiersWithCompletion:(CDUnknownBlockType)arg1;
- (void)enumerateDataSources:(CDUnknownBlockType)arg1;
- (void)imageForApplicationWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)imageForDataSourceWithIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithDataSourceManager:(id)arg1;
- (id)localAndRemoteAppIdentifiersForDataSourceIdentifiers:(id)arg1;
- (id)localizedNameForApplicationWithIdentifier:(id)arg1;
- (id)localizedNameForDataSourceWithIdentifier:(id)arg1;
- (CDStruct_2ec95fd7)minimumSupportedSystemVersionForDataSourceWithIdentifier:(id)arg1;
- (BOOL)requiresLocationInUseAssertonForDataSourceWithIdentifier:(id)arg1;
- (BOOL)wantsApplicationPrewarmForDataSourceWithIdentifier:(id)arg1;

@end

