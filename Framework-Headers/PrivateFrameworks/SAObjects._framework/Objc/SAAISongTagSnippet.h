//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SAObjects/SAUISnippet.h>

@class SAAISongTag, SAMPPlaybackButton, SAUIAppPunchOut;

@interface SAAISongTagSnippet : SAUISnippet
{
}

@property (strong, nonatomic) SAUIAppPunchOut *attributionPunchOut;
@property (strong, nonatomic) SAMPPlaybackButton *playbackButton;
@property (strong, nonatomic) SAUIAppPunchOut *purchaseSongPunchOut;
@property (strong, nonatomic) SAUIAppPunchOut *songDetailsPunchOut;
@property (strong, nonatomic) SAAISongTag *songTag;

+ (id)songTagSnippet;
+ (id)songTagSnippetWithDictionary:(id)arg1 context:(id)arg2;
- (id)encodedClassName;
- (id)groupIdentifier;

@end

