//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSArray, NSMutableArray, VCAudioTier;

__attribute__((visibility("hidden")))
@interface VCAudioTierPicker : NSObject
{
    NSMutableArray *audioTiers;
    BOOL isUsingCellular;
    VCAudioTier *defaultTier;
    VCAudioTier *fallbackTier;
    int mode;
}

@property (readonly) NSArray *audioTiers; // @synthesize audioTiers;
@property (readonly) VCAudioTier *defaultTier; // @synthesize defaultTier;
@property (readonly) VCAudioTier *fallbackTier; // @synthesize fallbackTier;

+ (BOOL)shouldFilterTierForPayload:(id)arg1 bitRate:(unsigned int)arg2 packetsPerBundle:(unsigned int)arg3 cellular:(BOOL)arg4 operatingMode:(int)arg5;
- (id)AudioTier:(unsigned int)arg1;
- (unsigned long long)LargestCapTier:(unsigned int)arg1;
- (void)dealloc;
- (id)initWithOperatingMode:(int)arg1 payloads:(id)arg2 sampleRate:(unsigned int)arg3 packetsPerBundle:(id)arg4 headerSize:(unsigned int)arg5 usingCellular:(BOOL)arg6 defaultMaxCap:(unsigned int)arg7;
- (id)newTierForPayload:(id)arg1 bitrate:(unsigned int)arg2 sampleRate:(unsigned int)arg3 packetsPerBundle:(unsigned int)arg4 headerSize:(unsigned int)arg5;
- (id)tierForNetworkBitrate:(unsigned int)arg1 duplication:(unsigned int)arg2;

@end
