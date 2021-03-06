//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, _MXAssetStorage, _MXExtensionDispatchCenter, _MXExtensionMatchingMerger, _MXExtensionServiceCenter;

@interface _MXExtensionProvider : NSObject
{
    Class _extensionMatchingClass;
    id _matchingContext;
    id _intentNonUIMatchingContext;
    id _intentUIMatchingContext;
    NSArray *_blacklistedExtensions;
    NSArray *_blacklistedContainingApplications;
    _MXExtensionMatchingMerger *_merger;
    _MXExtensionDispatchCenter *_dispatchCenter;
    _MXExtensionServiceCenter *_serviceCenter;
    _MXAssetStorage *_assetStorage;
}

@property (strong, nonatomic) _MXAssetStorage *assetStorage; // @synthesize assetStorage=_assetStorage;
@property (strong, nonatomic) _MXExtensionDispatchCenter *dispatchCenter; // @synthesize dispatchCenter=_dispatchCenter;
@property (strong, nonatomic) _MXExtensionMatchingMerger *merger; // @synthesize merger=_merger;
@property (strong, nonatomic) _MXExtensionServiceCenter *serviceCenter; // @synthesize serviceCenter=_serviceCenter;

+ (id)sharedProvider;
- (void).cxx_destruct;
- (void)_beginMatchingExtensionsIfNeeded;
- (id)_currentExtensions;
- (BOOL)_disableExtension:(id)arg1 error:(id *)arg2;
- (BOOL)_enableExtension:(id)arg1 error:(id *)arg2;
- (void)_endMatchingExtensionsIfNeeded;
- (id)_extensionWithIdentifier:(id)arg1;
- (id)_extensionsByFilteringBlacklistedExtensionsFromArray:(id)arg1;
- (id)_intentClassFilter:(id)arg1;
- (void)_restartMatchingExtensionsForDefaultsChange;
- (id)addExtensionsUpdateHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (void)imageForKey:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)imageForKey:(id)arg1 extension:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)init;
- (void)loadImageForKey:(id)arg1 withBlock:(CDUnknownBlockType)arg2;
- (void)removeExtensionUpdateHandler:(id)arg1;
- (id)siblingExtensionsWithContainingAppIdentifer:(id)arg1;

@end

