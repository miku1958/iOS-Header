//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSError, RMAsset;

@interface RMResolvedAsset : NSObject
{
    RMAsset *_asset;
    NSError *_error;
}

@property (readonly, nonatomic) RMAsset *asset; // @synthesize asset=_asset;
@property (readonly, nonatomic) NSError *error; // @synthesize error=_error;

- (void).cxx_destruct;
- (id)initWithAsset:(id)arg1 error:(id)arg2;

@end
