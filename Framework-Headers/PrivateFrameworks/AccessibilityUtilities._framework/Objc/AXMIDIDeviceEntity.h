//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class AXMIDIDevice, NSMutableSet, NSNumber, NSString;

@interface AXMIDIDeviceEntity : NSObject
{
    unsigned int _midiEntity;
    AXMIDIDevice *_device;
    NSMutableSet *_sources;
    NSMutableSet *_destinations;
    NSNumber *_supportsMMC;
}

@property (strong, nonatomic) NSMutableSet *destinations; // @synthesize destinations=_destinations;
@property (weak, nonatomic) AXMIDIDevice *device; // @synthesize device=_device;
@property (readonly, nonatomic) NSNumber *deviceID;
@property (readonly, nonatomic) NSString *driverName;
@property (readonly, nonatomic) NSNumber *isBroadcast;
@property (readonly, nonatomic) NSNumber *isEmbedded;
@property (readonly, nonatomic) NSNumber *isOffline;
@property (readonly, nonatomic) NSNumber *isPrivate;
@property (nonatomic) unsigned int midiEntity; // @synthesize midiEntity=_midiEntity;
@property (readonly, nonatomic) NSString *name;
@property (strong, nonatomic) NSMutableSet *sources; // @synthesize sources=_sources;
@property (readonly, nonatomic) NSNumber *supportsGeneralMIDI;
@property (readonly, nonatomic) NSNumber *supportsMMC; // @synthesize supportsMMC=_supportsMMC;
@property (readonly, nonatomic) NSNumber *uniqueID;

- (void).cxx_destruct;
- (id)_destinationForMidiEndpoint:(unsigned int)arg1 addIfNeeded:(BOOL)arg2;
- (id)_sourceForMidiEndpoint:(unsigned int)arg1 addIfNeeded:(BOOL)arg2;
- (void)addMidiDestination:(unsigned int)arg1;
- (void)addMidiSource:(unsigned int)arg1;
- (id)description;
- (id)initWithMIDIEntity:(unsigned int)arg1 device:(id)arg2;
- (void)removeMidiDestination:(unsigned int)arg1;
- (void)removeMidiSource:(unsigned int)arg1;
- (void)resetAndDetectEndpoints;
- (id)supportsGeneralMMC;

@end

