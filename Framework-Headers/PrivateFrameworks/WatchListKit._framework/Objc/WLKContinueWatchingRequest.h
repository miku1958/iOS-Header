//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <WatchListKit/WLKRequest.h>

@class WLKContinueWatchingResponse;

@interface WLKContinueWatchingRequest : WLKRequest
{
    BOOL _allowAuthentication;
    WLKContinueWatchingResponse *_response;
}

@property (nonatomic) BOOL allowAuthentication; // @synthesize allowAuthentication=_allowAuthentication;
@property (readonly, nonatomic) WLKContinueWatchingResponse *response; // @synthesize response=_response;

- (void).cxx_destruct;
- (id)init;
- (void)makeRequestWithCompletion:(CDUnknownBlockType)arg1;

@end
