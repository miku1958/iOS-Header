//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WatchListKit/WLKRequest.h>

@class NSDictionary;

@interface WLKSearchWatchListRequest : WLKRequest
{
    NSDictionary *_options;
}

@property (readonly, copy, nonatomic) NSDictionary *options; // @synthesize options=_options;

- (void).cxx_destruct;
- (id)initWithOptions:(id)arg1;
- (void)makeRequestWithCompletion:(CDUnknownBlockType)arg1;

@end

