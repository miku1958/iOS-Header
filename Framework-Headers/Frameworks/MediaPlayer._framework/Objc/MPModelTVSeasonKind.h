//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPModelKind.h>

@class MPModelTVEpisodeKind;

@interface MPModelTVSeasonKind : MPModelKind
{
    MPModelTVEpisodeKind *_episodeKind;
}

@property (readonly, nonatomic) MPModelTVEpisodeKind *episodeKind; // @synthesize episodeKind=_episodeKind;

+ (id)identityKind;
+ (id)kindWithEpisodeKind:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)applyToView:(shared_ptr_5c01893c)arg1 withContext:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)humanDescription;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;

@end

