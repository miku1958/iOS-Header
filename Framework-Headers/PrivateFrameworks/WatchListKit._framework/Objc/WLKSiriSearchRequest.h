//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WatchListKit/WLKRequest.h>

@class NSDictionary;

@interface WLKSiriSearchRequest : WLKRequest
{
    NSDictionary *_query;
}

@property (readonly, copy, nonatomic) NSDictionary *query; // @synthesize query=_query;

- (void).cxx_destruct;
- (id)initWithQuery:(id)arg1;
- (void)makeRequestWithCompletion:(CDUnknownBlockType)arg1;

@end

