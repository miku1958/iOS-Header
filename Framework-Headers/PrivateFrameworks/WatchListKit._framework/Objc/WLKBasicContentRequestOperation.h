//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WatchListKit/WLKNetworkRequestOperation.h>

@class NSArray, WLKBasicContentMetadata;

@interface WLKBasicContentRequestOperation : WLKNetworkRequestOperation
{
    NSArray *_contentIDs;
}

@property (readonly, nonatomic) WLKBasicContentMetadata *basicContentMetadata;
@property (readonly, copy, nonatomic) NSArray *contentIDs; // @synthesize contentIDs=_contentIDs;

- (void).cxx_destruct;
- (id)initWithContentID:(id)arg1;
- (id)initWithContentIDs:(id)arg1;
- (id)responseProcessor;

@end

