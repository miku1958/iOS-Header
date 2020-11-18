//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface MusicStreamingItemDescriptor : NSObject
{
    long long _storeID;
    NSArray *_assetDescriptors;
}

@property (readonly, copy, nonatomic) NSArray *assetDescriptors; // @synthesize assetDescriptors=_assetDescriptors;
@property (readonly, nonatomic) long long storeID; // @synthesize storeID=_storeID;

- (void).cxx_destruct;
- (id)_initWithResponseDictionary:(id)arg1;
- (id)description;

@end

