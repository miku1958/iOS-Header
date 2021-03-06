//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotosGraph/PGTitleGenerator.h>

@interface PGTripMemoryTitleGenerator : PGTitleGenerator
{
    unsigned long long _type;
}

@property (readonly, nonatomic) unsigned long long type; // @synthesize type=_type;

- (void)_generateTitleAndSubtitleWithResult:(CDUnknownBlockType)arg1;
- (id)_locationTitle;
- (id)_timeTitleForTrip;
- (id)_timeTitleForTripAndWeekend;
- (id)_timeTitleForWeekend;
- (BOOL)_triggerDefaultTitleGenerationIfNil;
- (id)_typeString;
- (id)initWithHighlightNode:(id)arg1;
- (id)initWithMomentNodes:(id)arg1 type:(unsigned long long)arg2;

@end

