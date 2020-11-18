//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;

@interface PFMediaCapabilitiesQuery : NSObject
{
    NSMutableDictionary *_capabilitiesInformation;
}

@property (strong) NSMutableDictionary *capabilitiesInformation; // @synthesize capabilitiesInformation=_capabilitiesInformation;

- (void).cxx_destruct;
- (void)addCodecInformation;
- (void)addHEIFContainerInformationToDictionary:(id)arg1;
- (void)addHEVCCodecInformationToDictionary:(id)arg1;
- (void)addLivePhotoInformationToDictionary:(id)arg1;
- (void)addTranscodeChoiceWithOptions:(id)arg1;
- (void)addVendorSpecificInformation;
- (void)addVersion;
- (id)dictionaryRepresentation;
- (void)gatherCapabilitiesWithOptions:(id)arg1;
- (id)init;
- (id)initWithOptions:(id)arg1;

@end

