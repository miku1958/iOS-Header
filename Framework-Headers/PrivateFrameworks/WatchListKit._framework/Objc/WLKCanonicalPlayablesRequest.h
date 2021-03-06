//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WatchListKit/WLKRequest.h>

@class NSString;

@interface WLKCanonicalPlayablesRequest : WLKRequest
{
    NSString *_canonicalID;
    NSString *_statsID;
}

@property (readonly, copy, nonatomic) NSString *canonicalID; // @synthesize canonicalID=_canonicalID;
@property (readonly, copy, nonatomic) NSString *statsID; // @synthesize statsID=_statsID;

- (void).cxx_destruct;
- (id)initWithCanonicalID:(id)arg1;
- (id)initWithStatsID:(id)arg1;
- (void)makeRequestWithCompletion:(CDUnknownBlockType)arg1;

@end

