//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, PXContextualMemoriesSettings;

@interface PXContextualMemoriesSettingsController : NSObject
{
    BOOL _requestingUpdates;
    PXContextualMemoriesSettings *_settings;
    NSMutableArray *_completionHandlers;
    NSMutableArray *_registrationIdentifiers;
}

@property (strong, nonatomic) NSMutableArray *completionHandlers; // @synthesize completionHandlers=_completionHandlers;
@property (strong, nonatomic) NSMutableArray *registrationIdentifiers; // @synthesize registrationIdentifiers=_registrationIdentifiers;
@property (nonatomic, getter=isRequestingUpdates) BOOL requestingUpdates; // @synthesize requestingUpdates=_requestingUpdates;
@property (readonly, nonatomic) PXContextualMemoriesSettings *settings; // @synthesize settings=_settings;

+ (id)sharedController;
- (void).cxx_destruct;
- (id)init;
- (void)registerForLocationPrefetchingWithIdentifier:(id)arg1;
- (void)requestUpdatedContextualMemoriesSettingsWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)unregisterForLocationPrefetchingWithIdentifier:(id)arg1;

@end

