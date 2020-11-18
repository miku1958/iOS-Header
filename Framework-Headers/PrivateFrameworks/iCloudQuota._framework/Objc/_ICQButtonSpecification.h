//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class ICQLink, NSDictionary;

@interface _ICQButtonSpecification : NSObject
{
    NSDictionary *_serverDict;
    ICQLink *_buttonLink;
    NSDictionary *_linkForBundleIdentifier;
}

@property (strong, nonatomic) NSDictionary *linkForBundleIdentifier; // @synthesize linkForBundleIdentifier=_linkForBundleIdentifier;

+ (id)buttonSpecificationSampleForLevel:(long long)arg1;
- (void).cxx_destruct;
- (id)buttonLink;
- (id)initWithServerDictionary:(id)arg1;
- (id)linkForBundleIdentifier:(id)arg1;

@end

