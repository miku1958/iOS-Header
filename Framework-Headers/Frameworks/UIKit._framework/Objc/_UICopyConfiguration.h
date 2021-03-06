//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <UIKitCore/_UICopyConfigurationReading-Protocol.h>

@class NSArray, NSString;

@interface _UICopyConfiguration : NSObject <_UICopyConfigurationReading>
{
    NSArray *_itemProviders;
    BOOL _allowsSharing;
    id _localObject;
    CDUnknownBlockType _metadataProvider;
    CDUnknownBlockType _previewProvider;
    CDUnknownBlockType _activityItemsProvider;
    CDUnknownBlockType _applicationActivitiesProvider;
}

@property (readonly, copy, nonatomic) NSArray *activityItemsForSharing;
@property (copy, nonatomic) CDUnknownBlockType activityItemsProvider; // @synthesize activityItemsProvider=_activityItemsProvider;
@property (nonatomic) BOOL allowsSharing; // @synthesize allowsSharing=_allowsSharing;
@property (readonly, copy, nonatomic) NSArray *applicationActivitiesForActivityItemsConfiguration;
@property (readonly, copy, nonatomic) NSArray *applicationActivitiesForSharing;
@property (copy, nonatomic) CDUnknownBlockType applicationActivitiesProvider; // @synthesize applicationActivitiesProvider=_applicationActivitiesProvider;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, copy, nonatomic) NSArray *itemProvidersForActivityItemsConfiguration;
@property (readonly, copy, nonatomic) NSArray *itemProvidersForSharing;
@property (strong, nonatomic) id localObject; // @synthesize localObject=_localObject;
@property (copy, nonatomic) CDUnknownBlockType metadataProvider; // @synthesize metadataProvider=_metadataProvider;
@property (copy, nonatomic) CDUnknownBlockType previewProvider; // @synthesize previewProvider=_previewProvider;
@property (readonly) Class superclass;

+ (id)copyConfigurationWithItemProviders:(id)arg1;
+ (id)copyConfigurationWithSharedObjects:(id)arg1;
- (void).cxx_destruct;
- (id)initWithItemProviders:(id)arg1;
- (id)initWithSharedObjects:(id)arg1;
- (id)itemProviders;
- (id)previewForSharedItemProviderAtIndex:(long long)arg1 intent:(id)arg2;
- (id)sharingMetadataForKey:(id)arg1;

@end

