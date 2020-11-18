//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SKUIColorScheme;
@protocol SKUIArtworkProviding;

@interface SKUIUber : NSObject
{
    SKUIColorScheme *_colorScheme;
    NSString *_text;
    id<SKUIArtworkProviding> _artworkProvider;
}

@property (readonly, nonatomic) id<SKUIArtworkProviding> artworkProvider; // @synthesize artworkProvider=_artworkProvider;
@property (readonly, nonatomic) SKUIColorScheme *colorScheme; // @synthesize colorScheme=_colorScheme;
@property (readonly, nonatomic) NSString *text; // @synthesize text=_text;

- (void).cxx_destruct;
- (id)initWithUberDictionary:(id)arg1;

@end

