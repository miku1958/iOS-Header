//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPModelObject.h>

@class NSString;

@interface MPModelLyrics : MPModelObject
{
    BOOL _hasStoreLyrics;
    NSString *_text;
}

@property (nonatomic) BOOL hasStoreLyrics; // @synthesize hasStoreLyrics=_hasStoreLyrics;
@property (copy, nonatomic) NSString *text; // @synthesize text=_text;

+ (id)__MPModelPropertyLyricsHasStoreLyrics__PROPERTY;
+ (id)__MPModelPropertyLyricsText__PROPERTY;
+ (id)__hasStoreLyrics__KEY;
+ (id)__text__KEY;
- (void).cxx_destruct;
- (id)descriptionWithType:(long long)arg1;

@end

