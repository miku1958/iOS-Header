//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/FIAPPlugin-Protocol.h>

@class NSString, SGTopicDissector;

@interface SGTopicExtractionPlugin : NSObject <FIAPPlugin>
{
    SGTopicDissector *_dissector;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSString *identifier;
@property (readonly) Class superclass;

+ (id)getTextContentFromSearchableItem:(id)arg1;
+ (id)sharedInstance;
- (void).cxx_destruct;
- (id)_harvestPodcastsIntent:(id)arg1 identifier:(id)arg2 groupIdentifier:(id)arg3;
- (BOOL)_shouldDeferProcessingSearchableItem:(id)arg1;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 domainIdentifiers:(id)arg2;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2;
- (void)extractAndDonateTopicsForText:(id)arg1 isPlainText:(BOOL)arg2 bundleId:(id)arg3 groupId:(id)arg4 documentId:(id)arg5 weight:(double)arg6 isOutgoing:(BOOL)arg7;
- (id)extractionsFromSearchableItem:(id)arg1;
- (id)init;
- (id)initWithTopicDissector:(id)arg1;
- (BOOL)interestedInSearchableItem:(id)arg1;
- (id)processInteraction:(id)arg1 bundleIdentifier:(id)arg2 protectionClass:(id)arg3;
- (id)processSearchableItem:(id)arg1;
- (void)purgeSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2;
- (id)setup;

@end
