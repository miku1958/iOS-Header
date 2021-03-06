//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@interface AVFileProcessor : NSObject
{
    float _percentComplete;
    CDUnknownBlockType _progressBlock;
}

+ (id)fileProcessor;
- (void)dealloc;
- (id)processPurchasedItem:(id)arg1 withAttributes:(id)arg2;
- (id)processPurchasedItem:(id)arg1 withAttributes:(id)arg2 progressBlock:(CDUnknownBlockType)arg3;
- (id)processPurchasedItem:(id)arg1 withAttributes:(id)arg2 resultInfo:(id *)arg3;
- (id)processPurchasedItem:(id)arg1 withAttributes:(id)arg2 resultInfo:(id *)arg3 progressBlock:(CDUnknownBlockType)arg4;
- (id)rentalInfo:(id)arg1;
- (id)sinfInfoFromFilePath:(id)arg1;
- (id)sinfsFromFilePath:(id)arg1;

@end

