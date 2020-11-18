//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPModelKind.h>

@class MPModelTVSeasonKind;

@interface MPModelTVShowKind : MPModelKind
{
    MPModelTVSeasonKind *_seasonKind;
}

@property (readonly, copy, nonatomic) MPModelTVSeasonKind *seasonKind; // @synthesize seasonKind=_seasonKind;

+ (id)kindWithSeasonKind:(id)arg1;
+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (void)applyToView:(shared_ptr_5c01893c)arg1 withContext:(id)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (shared_ptr_cf7b8a22)representedSearchScopePredicate;

@end
