//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <NewsCore/FCContentArchive.h>

@class NTPBAVAsset;

@interface FCAVAssetContentArchive : FCContentArchive
{
    NTPBAVAsset *_avAsset;
}

+ (BOOL)supportsSecureCoding;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (unsigned long long)hash;
- (id)initWithAVAsset:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (id)manifest;
- (id)unarchiveIntoContentContext:(id)arg1;

@end

