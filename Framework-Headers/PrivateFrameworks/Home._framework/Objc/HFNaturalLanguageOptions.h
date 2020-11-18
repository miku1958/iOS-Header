//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <Home/NSCopying-Protocol.h>

@class HMHome, NSMutableDictionary;

@interface HFNaturalLanguageOptions : NSObject <NSCopying>
{
    HMHome *_home;
    NSMutableDictionary *_extraOptions;
}

@property (readonly, nonatomic) NSMutableDictionary *extraOptions; // @synthesize extraOptions=_extraOptions;
@property (readonly, nonatomic) HMHome *home; // @synthesize home=_home;

- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
