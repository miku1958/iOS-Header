//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary;
@protocol OS_dispatch_queue;

@interface ML3ArtworkConfiguration : NSObject
{
    NSObject<OS_dispatch_queue> *_accessQueue;
    NSDictionary *_artworkConfigurationDictionary;
    NSMutableDictionary *_supportedSizesCache;
    double _mainScreenScale;
}

@property (strong, nonatomic) NSObject<OS_dispatch_queue> *accessQueue; // @synthesize accessQueue=_accessQueue;
@property (strong, nonatomic) NSDictionary *artworkConfigurationDictionary; // @synthesize artworkConfigurationDictionary=_artworkConfigurationDictionary;
@property (nonatomic) double mainScreenScale; // @synthesize mainScreenScale=_mainScreenScale;
@property (strong, nonatomic) NSMutableDictionary *supportedSizesCache; // @synthesize supportedSizesCache=_supportedSizesCache;

+ (id)systemConfiguration;
- (void).cxx_destruct;
- (id)_supportedSizeKeysForMediaType:(unsigned int)arg1 artworkType:(long long)arg2;
- (id)description;
- (id)initWithConfigurationDictionaries:(id)arg1;
- (id)sizesToAutogenerateForMediaType:(unsigned int)arg1 artworkType:(long long)arg2;
- (id)supportedSizesForMediaType:(unsigned int)arg1 artworkType:(long long)arg2;

@end
