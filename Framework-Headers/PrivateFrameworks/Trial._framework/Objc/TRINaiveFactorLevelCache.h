//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Trial/TRIFactorLevelCaching-Protocol.h>

@class NSDictionary;

@interface TRINaiveFactorLevelCache : NSObject <TRIFactorLevelCaching>
{
    NSDictionary *_factorLevels;
}

- (void).cxx_destruct;
- (void)enumerateFactorLevelsUsingBlock:(CDUnknownBlockType)arg1;
- (id)init;
- (id)initWithFactorLevels:(id)arg1;
- (id)objectForKeyedSubscript:(id)arg1;

@end
