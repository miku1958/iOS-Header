//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <OfficeImport/OAXClient.h>

__attribute__((visibility("hidden")))
@interface EXOfficeArtClient : OAXClient
{
    BOOL mAutoChartFillIsHollow;
    BOOL mAutoChartStrokeIsHollow;
}

@property BOOL autoChartFillIsHollow; // @synthesize autoChartFillIsHollow=mAutoChartFillIsHollow;
@property BOOL autoChartStrokeIsHollow; // @synthesize autoChartStrokeIsHollow=mAutoChartStrokeIsHollow;

- (BOOL)chartAutoFillIsHollow;
- (BOOL)chartAutoStrokeIsHollow;
- (void)readClientDataFromNode:(struct _xmlNode *)arg1 toDrawable:(id)arg2 state:(id)arg3;

@end

