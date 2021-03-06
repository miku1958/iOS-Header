//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, OKMediaFeeder, OKProducerPreset;

@interface OKProducerSettings : NSObject
{
    NSArray *_guidelines;
    OKMediaFeeder *_mediaFeeder;
    NSArray *_audioURLs;
    OKProducerPreset *_preset;
}

@property (strong) NSArray *audioURLs;
@property (strong) NSArray *guidelines; // @synthesize guidelines=_guidelines;
@property (strong) OKMediaFeeder *mediaFeeder; // @synthesize mediaFeeder=_mediaFeeder;
@property (strong) OKProducerPreset *preset; // @synthesize preset=_preset;

- (void)dealloc;

@end

