//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <GeoServices/GEOServiceRequester.h>

__attribute__((visibility("hidden")))
@interface GEORPProblemRequester : GEOServiceRequester
{
}

+ (id)sharedInstance;
- (id)_validateResponse:(id)arg1 userInfo:(id)arg2;
- (void)cancelRequest:(id)arg1;
- (void)startWithRequest:(id)arg1 traits:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end

