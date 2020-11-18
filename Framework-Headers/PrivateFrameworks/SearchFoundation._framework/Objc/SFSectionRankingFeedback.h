//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SearchFoundation/SFFeedback.h>

#import <SearchFoundation/NSCopying-Protocol.h>

@class NSArray, SFResultSection;

@interface SFSectionRankingFeedback : SFFeedback <NSCopying>
{
    NSArray *_results;
    SFResultSection *_section;
    unsigned long long _localSectionPosition;
    double _personalizationScore;
}

@property (nonatomic) unsigned long long localSectionPosition; // @synthesize localSectionPosition=_localSectionPosition;
@property (nonatomic) double personalizationScore; // @synthesize personalizationScore=_personalizationScore;
@property (copy, nonatomic) NSArray *results; // @synthesize results=_results;
@property (copy, nonatomic) SFResultSection *section; // @synthesize section=_section;

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithResults:(id)arg1 section:(id)arg2 localSectionPosition:(unsigned long long)arg3 personalizationScore:(double)arg4;

@end

