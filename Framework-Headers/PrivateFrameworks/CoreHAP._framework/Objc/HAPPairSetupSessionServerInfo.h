//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface HAPPairSetupSessionServerInfo : NSObject
{
    int _maxTries;
    NSString *_productData;
}

@property (nonatomic) int maxTries; // @synthesize maxTries=_maxTries;
@property (strong, nonatomic) NSString *productData; // @synthesize productData=_productData;

- (void).cxx_destruct;
- (id)initWithProductData:(id)arg1 maxTries:(int)arg2;

@end

