//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface TSKLayerPool : NSObject
{
    NSMutableArray *mLayerPool;
    Class mLayerClass;
    id mLayerDelegate;
}

@property (nonatomic) Class layerClass; // @synthesize layerClass=mLayerClass;
@property (nonatomic) id layerDelegate; // @synthesize layerDelegate=mLayerDelegate;

- (void)dealloc;
- (id)init;
- (id)requestLayerFromPool;
- (void)returnLayerToPool:(id)arg1;

@end

