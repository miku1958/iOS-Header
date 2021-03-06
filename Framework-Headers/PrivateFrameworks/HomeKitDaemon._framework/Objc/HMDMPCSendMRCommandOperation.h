//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFOperation.h>

#import <HomeKitDaemon/HMFObject-Protocol.h>

@class MPCAssistantRemoteControlDestination, MPPlaybackArchive, NSArray, NSDictionary, NSNumber, NSString;
@protocol HMDMPCSendMRCommandOperationExternalObjectInterface;

@interface HMDMPCSendMRCommandOperation : HMFOperation <HMFObject>
{
    MPCAssistantRemoteControlDestination *_destination;
    MPPlaybackArchive *_playbackArchive;
    NSDictionary *_options;
    NSNumber *_mediaRemoteCommand;
    id<HMDMPCSendMRCommandOperationExternalObjectInterface> _externalObjectInterface;
}

@property (readonly, copy, nonatomic) NSArray *attributeDescriptions;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly, nonatomic) MPCAssistantRemoteControlDestination *destination; // @synthesize destination=_destination;
@property (strong, nonatomic) id<HMDMPCSendMRCommandOperationExternalObjectInterface> externalObjectInterface; // @synthesize externalObjectInterface=_externalObjectInterface;
@property (readonly) unsigned long long hash;
@property (readonly, nonatomic) NSNumber *mediaRemoteCommand; // @synthesize mediaRemoteCommand=_mediaRemoteCommand;
@property (readonly, copy, nonatomic) NSDictionary *options; // @synthesize options=_options;
@property (readonly, nonatomic) MPPlaybackArchive *playbackArchive; // @synthesize playbackArchive=_playbackArchive;
@property (readonly, copy) NSString *privateDescription;
@property (readonly, copy) NSString *propertyDescription;
@property (readonly, copy) NSString *shortDescription;
@property (readonly) Class superclass;

+ (id)shortDescription;
- (void).cxx_destruct;
- (id)initWithCommand:(unsigned int)arg1 options:(id)arg2 destination:(id)arg3;
- (id)initWithPlaybackArchive:(id)arg1 destination:(id)arg2;
- (void)main;

@end

