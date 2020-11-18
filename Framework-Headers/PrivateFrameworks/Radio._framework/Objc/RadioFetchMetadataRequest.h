//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Radio/RadioRequest.h>

@class NSArray, NSData, SSURLConnectionRequest;

@interface RadioFetchMetadataRequest : RadioRequest
{
    SSURLConnectionRequest *_request;
    NSArray *_itemIDs;
    NSData *_timedMetadata;
    NSArray *_tracks;
}

@property (copy, nonatomic) NSArray *itemIDs; // @synthesize itemIDs=_itemIDs;
@property (copy, nonatomic) NSData *timedMetadata; // @synthesize timedMetadata=_timedMetadata;
@property (strong, nonatomic) NSArray *tracks; // @synthesize tracks=_tracks;

- (void).cxx_destruct;
- (id)_itemIDsToRadioTracks;
- (void)cancel;
- (void)startWithCompletionHandler:(CDUnknownBlockType)arg1;

@end
