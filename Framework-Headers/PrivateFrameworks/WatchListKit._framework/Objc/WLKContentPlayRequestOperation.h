//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WatchListKit/WLKNetworkRequestOperation.h>

@class NSString;

@interface WLKContentPlayRequestOperation : WLKNetworkRequestOperation
{
    NSString *_canonicalID;
}

@property (readonly, copy, nonatomic) NSString *canonicalID; // @synthesize canonicalID=_canonicalID;

- (void).cxx_destruct;
- (id)initWithCanonicalID:(id)arg1;
- (id)responseProcessor;

@end

