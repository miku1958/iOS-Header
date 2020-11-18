//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSEnumerator.h>

@class NSArray, NSString;

@interface AVAssetTrackEnumerator : NSEnumerator
{
    NSString *_mediaType;
    NSArray *_mediaCharacteristics;
    NSEnumerator *_enumerator;
}

+ (id)trackEnumeratorWithAsset:(id)arg1;
- (void)dealloc;
- (id)initWithAsset:(id)arg1;
- (id)initWithAsset:(id)arg1 mediaCharacteristics:(id)arg2;
- (id)initWithAsset:(id)arg1 mediaType:(id)arg2;
- (id)nextObject;
- (void)setMediaCharacteristics:(id)arg1;
- (void)setMediaType:(id)arg1;

@end

