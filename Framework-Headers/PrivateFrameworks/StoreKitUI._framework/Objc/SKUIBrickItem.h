//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SKUIArtwork, SKUICountdown, SKUIEditorialComponent, SKUILink;

@interface SKUIBrickItem : NSObject
{
    NSString *_accessibilityLabel;
    SKUIArtwork *_artwork;
    long long _brickIdentifier;
    SKUICountdown *_countdown;
    SKUIEditorialComponent *_editorial;
    SKUILink *_link;
}

@property (readonly, nonatomic) NSString *accessibilityLabel; // @synthesize accessibilityLabel=_accessibilityLabel;
@property (readonly, nonatomic) SKUIArtwork *artwork; // @synthesize artwork=_artwork;
@property (readonly, nonatomic) long long brickIdentifier; // @synthesize brickIdentifier=_brickIdentifier;
@property (readonly, nonatomic) SKUICountdown *countdown; // @synthesize countdown=_countdown;
@property (readonly, nonatomic) SKUIEditorialComponent *editorial; // @synthesize editorial=_editorial;
@property (readonly, nonatomic) SKUILink *link; // @synthesize link=_link;

- (void).cxx_destruct;
- (void)_setLinkInfoWithLinkDictionary:(id)arg1 context:(id)arg2;
- (void)_setLinkItem:(id)arg1;
- (id)description;
- (id)initWithBannerRoomContext:(id)arg1;
- (id)initWithComponentContext:(id)arg1;
- (id)initWithCustomPageContext:(id)arg1;

@end
