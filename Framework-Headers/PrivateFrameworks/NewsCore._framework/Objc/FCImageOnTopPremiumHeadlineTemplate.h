//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCHeadlineTemplate.h>

@class FCTextInfo;

@interface FCImageOnTopPremiumHeadlineTemplate : FCHeadlineTemplate
{
    FCTextInfo *_headlineSubtitleTextInfo;
}

@property (copy, nonatomic) FCTextInfo *headlineSubtitleTextInfo; // @synthesize headlineSubtitleTextInfo=_headlineSubtitleTextInfo;

+ (id)_defaultSubtitleTextColor;
+ (id)debug_templateForHash:(unsigned long long)arg1;
- (void).cxx_destruct;
- (id)_allThemePropertyNames;
- (id)initWithJSONDictionary:(id)arg1 versionNumber:(long long)arg2;
- (id)initWithJSONDictionary:(id)arg1 versionNumber:(long long)arg2 allowNil:(BOOL)arg3;
- (id)loadableFonts;

@end

