//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchUI/SearchUIAppIconImage.h>

@class UIWebClip;

@interface SearchUIWebClipIconImage : SearchUIAppIconImage
{
    UIWebClip *_webClip;
}

@property (strong, nonatomic) UIWebClip *webClip; // @synthesize webClip=_webClip;

+ (id)convertImage:(id)arg1 ofSize:(struct CGSize)arg2 withShape:(unsigned long long)arg3;
- (void).cxx_destruct;
- (id)generateImageWithFormat:(int)arg1;
- (unsigned long long)hash;
- (id)initWithWebClip:(id)arg1 variant:(unsigned long long)arg2;
- (BOOL)isEqual:(id)arg1;
- (id)uniqueIdentifier;

@end

