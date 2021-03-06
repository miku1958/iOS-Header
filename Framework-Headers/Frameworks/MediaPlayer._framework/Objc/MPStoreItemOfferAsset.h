//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSString, NSURL;

@interface MPStoreItemOfferAsset : NSObject
{
    NSDictionary *_lookupDictionary;
}

@property (readonly, nonatomic) double duration;
@property (readonly, copy, nonatomic) NSString *flavor;
@property (readonly, copy, nonatomic) NSDictionary *lookupDictionary; // @synthesize lookupDictionary=_lookupDictionary;
@property (readonly, nonatomic) double previewDuration;
@property (readonly, copy, nonatomic) NSURL *previewURL;
@property (readonly, nonatomic) long long size;

- (void).cxx_destruct;
- (id)initWithLookupDictionary:(id)arg1;

@end

