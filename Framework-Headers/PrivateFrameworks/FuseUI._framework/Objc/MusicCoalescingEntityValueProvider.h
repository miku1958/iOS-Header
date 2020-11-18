//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <FuseUI/MusicEntityValueProviding-Protocol.h>

@class MusicEntityViewContentDescriptor, NSDictionary, NSSet, NSString;
@protocol MusicEntityValueProviding;

@interface MusicCoalescingEntityValueProvider : NSObject <MusicEntityValueProviding>
{
    NSDictionary *_cachedPropertyValuesLoadedAsynchronously;
    NSDictionary *_cachedPropertyValuesLoadedSynchronously;
    NSSet *_propertiesToLoadAsynchronously;
    NSSet *_propertiesToPrefetchSynchronously;
    NSSet *_additionalPropertiesToPrefetchSynchronously;
    id<MusicEntityValueProviding> _baseEntityValueProvider;
    MusicEntityViewContentDescriptor *_contentDescriptor;
}

@property (copy, nonatomic) NSSet *additionalPropertiesToPrefetchSynchronously; // @synthesize additionalPropertiesToPrefetchSynchronously=_additionalPropertiesToPrefetchSynchronously;
@property (readonly, nonatomic) id<MusicEntityValueProviding> baseEntityValueProvider; // @synthesize baseEntityValueProvider=_baseEntityValueProvider;
@property (readonly, nonatomic) MusicEntityViewContentDescriptor *contentDescriptor; // @synthesize contentDescriptor=_contentDescriptor;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;

- (void).cxx_destruct;
- (id)_cachedPropertyValuesLoadedSynchronously;
- (void)_handleContentDescriptorDidInvalidateNotification:(id)arg1;
- (void)_invalidateCachedPropertyValuesLoadedAsynchronously;
- (void)_invalidateCachedPropertyValuesLoadedSynchronously;
- (void)_updatePropertiesToLoadAndPrefetch;
- (void)_updateWithBaseEntityValueProvider:(id)arg1 contentDescriptor:(id)arg2;
- (void)dealloc;
- (id)entityUniqueIdentifier;
- (id)imageURLForEntityArtworkProperty:(id)arg1 fittingSize:(struct CGSize)arg2 destinationScale:(double)arg3;
- (void)reloadWithBaseEntityValueProvider:(id)arg1 contentDescriptor:(id)arg2;
- (void)reset;
- (void)updateWithAsynchronouslyLoadedPropertyValues:(id)arg1;
- (id)valueForEntityProperty:(id)arg1;
- (id)valuesForEntityProperties:(id)arg1;

@end

