//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSSet, PHAssetCollection;

@interface PXCMMSendBackSuggestion : NSObject
{
    NSSet *_participants;
    NSArray *_recipients;
    PHAssetCollection *_assetCollection;
}

@property (readonly, nonatomic) PHAssetCollection *assetCollection; // @synthesize assetCollection=_assetCollection;
@property (readonly, nonatomic) NSSet *participants; // @synthesize participants=_participants;
@property (readonly, nonatomic) NSArray *recipients; // @synthesize recipients=_recipients;

+ (id)new;
- (void).cxx_destruct;
- (id)init;
- (id)initWithAssetCollection:(id)arg1 participants:(id)arg2;

@end

