//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray, PHAsset;

@interface VCPMovieCurationResults : NSObject
{
    PHAsset *_phAsset;
    NSMutableArray *_highlights;
}

@property (readonly, strong, nonatomic) NSMutableArray *highlights; // @synthesize highlights=_highlights;
@property (readonly, nonatomic) PHAsset *phAsset; // @synthesize phAsset=_phAsset;

- (void).cxx_destruct;
- (id)initWithPHAsset:(id)arg1;

@end
