//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class FCAssetHandle, NSArray;

@interface FCFlintManifest : NSObject
{
    FCAssetHandle *_mainDocumentAssetHandle;
    NSArray *_fontResourceIDs;
}

@property (readonly, nonatomic) NSArray *fontResourceIDs; // @synthesize fontResourceIDs=_fontResourceIDs;
@property (readonly, nonatomic) FCAssetHandle *mainDocumentAssetHandle; // @synthesize mainDocumentAssetHandle=_mainDocumentAssetHandle;

- (void).cxx_destruct;
- (id)initWithMainDocumentAssetHandle:(id)arg1 fontResourceIDs:(id)arg2;

@end
