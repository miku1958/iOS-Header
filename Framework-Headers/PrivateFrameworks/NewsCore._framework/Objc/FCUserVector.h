//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <NewsCore/FCUserVectorProvider-Protocol.h>

@class FCPersonalizationTreatment, NSOrderedSet, NSString, NSURL;

@interface FCUserVector : NSObject <FCUserVectorProvider>
{
    NSURL *_whitelistURL;
    NSURL *_modelURL;
    FCPersonalizationTreatment *_personalizationTreatment;
    NSOrderedSet *_bundleChannelIDs;
}

@property (strong, nonatomic) NSOrderedSet *bundleChannelIDs; // @synthesize bundleChannelIDs=_bundleChannelIDs;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (strong, nonatomic) NSURL *modelURL; // @synthesize modelURL=_modelURL;
@property (strong, nonatomic) FCPersonalizationTreatment *personalizationTreatment; // @synthesize personalizationTreatment=_personalizationTreatment;
@property (readonly) Class superclass;
@property (strong, nonatomic) NSURL *whitelistURL; // @synthesize whitelistURL=_whitelistURL;

- (void).cxx_destruct;
- (id)bundleSubscribedVector;
- (id)computePersonalizationVectorWithBaselineAggregate:(id)arg1 allAggregates:(id)arg2;
- (id)findVector:(id)arg1 closestToBins:(id)arg2;
- (id)init;
- (id)initWithWhitelistURL:(id)arg1 modelURL:(id)arg2 personalizationTreatment:(id)arg3 bundleChannelIDs:(id)arg4;

@end

