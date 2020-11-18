//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WatchListKit/WLKNetworkRequestOperation.h>

@class NSArray, NSDictionary;

@interface WLKPlayActivityLookupRequestOperation : WLKNetworkRequestOperation
{
    NSArray *_playActivityIdentifiers;
    NSDictionary *_metadataByIdentifier;
}

@property (readonly, copy, nonatomic) NSDictionary *metadataByIdentifier; // @synthesize metadataByIdentifier=_metadataByIdentifier;
@property (readonly, copy, nonatomic) NSArray *playActivityIdentifiers; // @synthesize playActivityIdentifiers=_playActivityIdentifiers;

+ (id)identifierForPlayActivityID:(id)arg1 channelID:(id)arg2 duration:(id)arg3;
- (void).cxx_destruct;
- (void)didFinish;
- (id)initWithIdentifier:(id)arg1;
- (id)initWithIdentifiers:(id)arg1;
- (id)responseProcessor;

@end

