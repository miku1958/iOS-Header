//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <MediaPlayer/MPPlaybackContext.h>

@class MPIdentifierSet, MPModelRequest, NSDictionary;

@interface MPModelPlaybackContext : MPPlaybackContext
{
    MPModelRequest *_request;
    MPIdentifierSet *_startItemIdentifiers;
    NSDictionary *_startTimeModifications;
    NSDictionary *_endTimeModifications;
    NSDictionary *_assetStoreFronts;
}

@property (copy, nonatomic) NSDictionary *assetStoreFronts; // @synthesize assetStoreFronts=_assetStoreFronts;
@property (copy, nonatomic) NSDictionary *endTimeModifications; // @synthesize endTimeModifications=_endTimeModifications;
@property (copy, nonatomic) MPModelRequest *request; // @synthesize request=_request;
@property (copy, nonatomic) MPIdentifierSet *startItemIdentifiers; // @synthesize startItemIdentifiers=_startItemIdentifiers;
@property (copy, nonatomic) NSDictionary *startTimeModifications; // @synthesize startTimeModifications=_startTimeModifications;

+ (Class)queueFeederClass;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

