//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <AppleMediaServices/AMSLookup.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface LPiTunesMediaLookupTask : AMSLookup
{
    NSString *_identifier;
    NSString *_storefrontCountryCode;
}

- (void).cxx_destruct;
- (id)_compileQueryParametersWithBundleIds:(id)arg1 itemIds:(id)arg2;
- (id)callerID;
- (id)initWithIdentifier:(id)arg1 storefrontCountryCode:(id)arg2;
- (id)sharedBag;
- (void)start:(CDUnknownBlockType)arg1;

@end

