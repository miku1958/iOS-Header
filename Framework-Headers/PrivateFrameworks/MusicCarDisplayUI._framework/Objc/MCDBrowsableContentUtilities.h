//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface MCDBrowsableContentUtilities : NSObject
{
    NSArray *_nowPlayingIdentifiers;
}

@property (readonly, nonatomic) NSArray *firstPartyAppBundleIDs;
@property (strong, nonatomic) NSArray *nowPlayingIdentifiers; // @synthesize nowPlayingIdentifiers=_nowPlayingIdentifiers;

+ (id)sharedInstance;
- (void).cxx_destruct;

@end

