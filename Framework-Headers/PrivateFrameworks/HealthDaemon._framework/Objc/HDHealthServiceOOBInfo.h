//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData;

@interface HDHealthServiceOOBInfo : NSObject
{
    NSData *_oobData;
    NSData *_randomValue;
    NSData *_confirmationValue;
    NSData *_btAddress;
}

@property (readonly, nonatomic) NSData *btAddress; // @synthesize btAddress=_btAddress;
@property (readonly, nonatomic) NSData *confirmationValue; // @synthesize confirmationValue=_confirmationValue;
@property (readonly, nonatomic) NSData *oobData; // @synthesize oobData=_oobData;
@property (readonly, nonatomic) NSData *randomValue; // @synthesize randomValue=_randomValue;

+ (id)reverseData:(id)arg1;
- (void).cxx_destruct;
- (id)description;
- (id)initWithOOBData:(id)arg1 btAddress:(id)arg2;

@end

