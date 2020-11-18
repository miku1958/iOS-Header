//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableArray;

__attribute__((visibility("hidden")))
@interface VCMediaNegotiatorAudioResults : NSObject
{
    unsigned int _remoteSSRC;
    unsigned int _audioUnitModel;
    BOOL _allowRecording;
    BOOL _allowSwitching;
    int _primaryPayload;
    int _dtxPayload;
    NSMutableArray *_secondaryPayloads;
}

@property (nonatomic) BOOL allowRecording; // @synthesize allowRecording=_allowRecording;
@property (nonatomic) BOOL allowSwitching; // @synthesize allowSwitching=_allowSwitching;
@property (nonatomic) unsigned int audioUnitModel; // @synthesize audioUnitModel=_audioUnitModel;
@property (nonatomic) int dtxPayload; // @synthesize dtxPayload=_dtxPayload;
@property (nonatomic) int primaryPayload; // @synthesize primaryPayload=_primaryPayload;
@property (nonatomic) unsigned int remoteSSRC; // @synthesize remoteSSRC=_remoteSSRC;
@property (readonly, nonatomic) NSArray *secondaryPayloads; // @synthesize secondaryPayloads=_secondaryPayloads;

- (void)addSecondaryPayload:(int)arg1;
- (void)dealloc;
- (id)init;

@end

