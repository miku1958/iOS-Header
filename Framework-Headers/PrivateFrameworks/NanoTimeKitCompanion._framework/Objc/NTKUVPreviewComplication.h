//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NanoTimeKitCompanion/NTKComplication.h>

@class CLKComplicationPreviewTimelineEntry;

@interface NTKUVPreviewComplication : NTKComplication
{
    CLKComplicationPreviewTimelineEntry *_entry;
    long long _family;
}

@property (readonly, nonatomic) CLKComplicationPreviewTimelineEntry *entry; // @synthesize entry=_entry;
@property (readonly, nonatomic) long long family; // @synthesize family=_family;

+ (id)complicationWithEntry:(id)arg1 forFamily:(long long)arg2;
- (void).cxx_destruct;
- (id)init;
- (id)initWithComplicationType:(unsigned long long)arg1;
- (BOOL)supportsComplicationFamily:(long long)arg1 forDevice:(id)arg2;

@end
