//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <SoftwareUpdateServices/NSObject-Protocol.h>

@class ASAsset, NSArray, NSString;

@protocol SUAssetMatcher <NSObject>

@property (readonly, nonatomic) NSString *assetType;

- (ASAsset *)findMatchFromCandidates:(NSArray *)arg1 error:(id *)arg2;
@end
