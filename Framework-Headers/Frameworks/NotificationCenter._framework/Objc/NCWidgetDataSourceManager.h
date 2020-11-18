//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

#import <NotificationCenter/NCWidgetVisibilityDelegate-Protocol.h>
#import <NotificationCenter/_NCDataSourceManager-Protocol.h>

@class NCWidgetDataSource, NCWidgetVisibilityManager, NSArray, NSString;
@protocol _NCParentDataSourceManager;

__attribute__((visibility("hidden")))
@interface NCWidgetDataSourceManager : NSObject <NCWidgetVisibilityDelegate, _NCDataSourceManager>
{
    NCWidgetDataSource *_widgetDataSource;
    NCWidgetVisibilityManager *_widgetVisbilityManager;
    id _plugInDiscoveryToken;
    BOOL _isPublishing;
    CDUnknownBlockType _didStartBlock;
    id<_NCParentDataSourceManager> _parentDataSourceManager;
}

@property (readonly, nonatomic) NSArray *dataSources;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (nonatomic) id<_NCParentDataSourceManager> parentDataSourceManager; // @synthesize parentDataSourceManager=_parentDataSourceManager;
@property (strong, nonatomic, getter=_plugInDiscoveryToken, setter=_setPlugInDiscoveryToken:) id plugInDiscoveryToken; // @synthesize plugInDiscoveryToken=_plugInDiscoveryToken;
@property (readonly) Class superclass;
@property (strong, nonatomic, getter=_widgetVisbilityManager) NCWidgetVisibilityManager *widgetVisbilityManager; // @synthesize widgetVisbilityManager=_widgetVisbilityManager;

- (void)_beginContinuousPlugInDiscovery;
- (void)_endContinuousPlugInDiscovery;
- (void)_revokeExtensionWithIdentifier:(id)arg1;
- (BOOL)_shouldPublishWidgetExtension:(id)arg1;
- (void)_start:(CDUnknownBlockType)arg1;
- (void)_stop:(CDUnknownBlockType)arg1;
- (void)_updateDataSourceWithExtension:(id)arg1;
- (void)_updatePublishedWidgetExtensions:(id)arg1;
- (id)_widgetExtensionsDiscoveryAttributes;
- (void)dealloc;
- (id)init;
- (void)widgetVisibilityDidChange;

@end
