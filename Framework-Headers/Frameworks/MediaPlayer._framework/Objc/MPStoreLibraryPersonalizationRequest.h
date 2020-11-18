//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPModelRequest.h>

@class MPSectionedCollection, NSDictionary, NSMutableDictionary;

@interface MPStoreLibraryPersonalizationRequest : MPModelRequest
{
    NSMutableDictionary *_itemIndexPathToOverridePropertySet;
    MPSectionedCollection *_unpersonalizedContentDescriptors;
    MPSectionedCollection *_representedObjects;
}

@property (readonly, copy, nonatomic) NSDictionary *itemIndexPathToOverridePropertySet;
@property (strong, nonatomic) MPSectionedCollection *representedObjects; // @synthesize representedObjects=_representedObjects;
@property (readonly, nonatomic) MPSectionedCollection *unpersonalizedContentDescriptors; // @synthesize unpersonalizedContentDescriptors=_unpersonalizedContentDescriptors;

+ (id)defaultLibraryView;
+ (id)personalizedResponseForContentDescriptor:(id)arg1 requestedProperties:(id)arg2;
+ (id)sharedQueue;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUnpersonalizedContentDescriptors:(id)arg1;
- (id)initWithUnpersonalizedRequest:(id)arg1 unpersonalizedContentDescriptors:(id)arg2;
- (id)newOperationWithResponseHandler:(CDUnknownBlockType)arg1;
- (id)propertiesForItemAtIndexPath:(id)arg1;
- (void)setProperties:(id)arg1 forItemAtIndexPath:(id)arg2;

@end
