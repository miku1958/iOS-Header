//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface MRNowPlayingArtwork : NSObject
{
}

@property (readonly, nonatomic) BOOL hasArtworkData;
@property (readonly, nonatomic) unsigned int type;

+ (id)createNowPlayingArtworkFromXPCDictionary:(id)arg1;
- (void)bindToXPCDictionary:(id)arg1;
- (id)copyImageData;

@end

