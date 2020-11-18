//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class PFCanceler, PHImportAsset;

@interface PHImportAssetDataRequest : NSObject
{
    PFCanceler *_canceler;
    unsigned char _type;
    unsigned char _priority;
    unsigned long long _longestSide;
    CDUnknownBlockType _cancelBlock;
    PHImportAsset *_asset;
    CDUnknownBlockType _completionHandler;
}

@property (strong, nonatomic) PHImportAsset *asset; // @synthesize asset=_asset;
@property (copy, nonatomic) CDUnknownBlockType cancelBlock; // @synthesize cancelBlock=_cancelBlock;
@property (copy, nonatomic) CDUnknownBlockType completionHandler; // @synthesize completionHandler=_completionHandler;
@property (readonly, nonatomic) unsigned long long longestSide; // @synthesize longestSide=_longestSide;
@property (readonly, nonatomic) unsigned char priority; // @synthesize priority=_priority;
@property (readonly, nonatomic) PHImportAsset *requestAsset;
@property (readonly, nonatomic) unsigned char type; // @synthesize type=_type;

+ (id)stringForRequestType:(unsigned char)arg1;
- (void).cxx_destruct;
- (void)cancel;
- (id)init;
- (id)initWithAsset:(id)arg1 type:(unsigned char)arg2 longestSide:(unsigned long long)arg3 priority:(unsigned char)arg4;
- (BOOL)isCanceled;

@end

