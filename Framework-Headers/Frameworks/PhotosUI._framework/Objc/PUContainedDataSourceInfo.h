//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PUAssetsDataSource;

__attribute__((visibility("hidden")))
@interface PUContainedDataSourceInfo : NSObject
{
    PUAssetsDataSource *_assetsDataSource;
    struct _NSRange _externalSections;
}

@property (strong, nonatomic) PUAssetsDataSource *assetsDataSource; // @synthesize assetsDataSource=_assetsDataSource;
@property (nonatomic) struct _NSRange externalSections; // @synthesize externalSections=_externalSections;

- (void).cxx_destruct;
- (id)description;

@end

