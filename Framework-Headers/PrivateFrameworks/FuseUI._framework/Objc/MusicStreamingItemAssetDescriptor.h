//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, NSURL;

@interface MusicStreamingItemAssetDescriptor : NSObject
{
    NSString *_downloadKey;
    NSString *_flavor;
    NSArray *_sinfs;
    NSURL *_URL;
}

@property (readonly, strong, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property (readonly, copy, nonatomic) NSString *downloadKey; // @synthesize downloadKey=_downloadKey;
@property (readonly, copy, nonatomic) NSString *flavor; // @synthesize flavor=_flavor;
@property (readonly, copy, nonatomic) NSArray *sinfs; // @synthesize sinfs=_sinfs;

- (void).cxx_destruct;
- (id)_initWithResponseDictionary:(id)arg1;
- (id)description;

@end
