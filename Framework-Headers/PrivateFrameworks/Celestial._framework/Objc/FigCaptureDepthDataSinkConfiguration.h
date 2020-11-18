//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Celestial/FigCaptureSinkConfiguration.h>

@interface FigCaptureDepthDataSinkConfiguration : FigCaptureSinkConfiguration
{
    BOOL _discardsLateDepthData;
    BOOL _filteringEnabled;
}

@property (nonatomic) BOOL discardsLateDepthData; // @synthesize discardsLateDepthData=_discardsLateDepthData;
@property (nonatomic) BOOL filteringEnabled; // @synthesize filteringEnabled=_filteringEnabled;

- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)copyXPCEncoding;
- (id)description;
- (id)initWithXPCEncoding:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (int)sinkType;

@end
