//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OpusKit/OKProducerBundle.h>

@class OKProducerPlugin;

@interface OKProducerContent : OKProducerBundle
{
    OKProducerPlugin *_plugin;
}

@property (nonatomic) OKProducerPlugin *plugin; // @synthesize plugin=_plugin;

- (void)dealloc;
- (id)initWithURL:(id)arg1;
- (BOOL)isLoaded;

@end
