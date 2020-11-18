//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPModelKind.h>

@interface MPModelTVEpisodeKind : MPModelKind
{
    unsigned long long _variants;
    unsigned long long _options;
}

@property (readonly, nonatomic) unsigned long long options; // @synthesize options=_options;
@property (readonly, nonatomic) unsigned long long variants; // @synthesize variants=_variants;

+ (id)kindWithVariants:(unsigned long long)arg1 options:(unsigned long long)arg2;
+ (BOOL)supportsSecureCoding;
- (void)encodeWithCoder:(id)arg1;
- (id)humanDescription;
- (id)initWithCoder:(id)arg1;
- (shared_ptr_cf7b8a22)predicateWithBaseProperty:(struct ModelPropertyBase *)arg1;
- (shared_ptr_cf7b8a22)representedSearchScopePredicate;

@end

