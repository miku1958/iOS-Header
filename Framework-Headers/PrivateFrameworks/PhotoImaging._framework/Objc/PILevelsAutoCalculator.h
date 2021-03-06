//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NeutrinoCore/NUAutoCalculator.h>

#import <PhotoImaging/NUTimeBased-Protocol.h>

@class NSString;

@interface PILevelsAutoCalculator : NUAutoCalculator <NUTimeBased>
{
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (nonatomic) CDStruct_1b6d18a9 time;

- (id)calculateSettingsForImageHistogram:(id)arg1;
- (id)calculateSettingsForSingleChannelHistogram:(id)arg1 suffix:(id)arg2;
- (void)submit:(CDUnknownBlockType)arg1;

@end

