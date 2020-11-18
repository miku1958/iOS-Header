//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Photos/PHImportAssetDataRequest.h>

@interface PHImportAssetThumbnailDataRequest : PHImportAssetDataRequest
{
    CDUnknownBlockType _completionHandler;
    unsigned char _priority;
    unsigned long long _longestSide;
}

@property (copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (readonly, nonatomic) unsigned long long longestSide; // @synthesize longestSide=_longestSide;
@property (readonly, nonatomic) unsigned char priority; // @synthesize priority=_priority;

- (void).cxx_destruct;
- (id)description;
- (id)initWithAsset:(id)arg1 longestSide:(unsigned long long)arg2 priority:(unsigned char)arg3;
- (id)requestAsset;

@end
