//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class RadioStationMatchMetadata;

@interface RadioStationMatchContext : NSObject
{
    BOOL _shouldMatchArtist;
    RadioStationMatchMetadata *_matchMetadata;
}

@property (strong, nonatomic) RadioStationMatchMetadata *matchMetadata; // @synthesize matchMetadata=_matchMetadata;
@property (nonatomic) BOOL shouldMatchArtist; // @synthesize shouldMatchArtist=_shouldMatchArtist;

- (void).cxx_destruct;
- (id)copyMatchDictionary;

@end
