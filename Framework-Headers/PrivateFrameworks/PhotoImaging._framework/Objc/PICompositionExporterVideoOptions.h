//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <PhotoImaging/PICompositionExporterOptions.h>

@interface PICompositionExporterVideoOptions : PICompositionExporterOptions
{
    BOOL _increaseBitRateIfNecessary;
    BOOL _bypassOutputSettingsIfNoComposition;
    CDUnknownBlockType _metadataProcessor;
}

@property (nonatomic) BOOL bypassOutputSettingsIfNoComposition; // @synthesize bypassOutputSettingsIfNoComposition=_bypassOutputSettingsIfNoComposition;
@property (nonatomic) BOOL increaseBitRateIfNecessary; // @synthesize increaseBitRateIfNecessary=_increaseBitRateIfNecessary;
@property (copy) CDUnknownBlockType metadataProcessor; // @synthesize metadataProcessor=_metadataProcessor;

- (void).cxx_destruct;

@end
