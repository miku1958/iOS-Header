//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDictionary;

@interface ICAuthorizeMachineResponse : NSObject
{
    NSDictionary *_responseDictionary;
}

@property (readonly, copy, nonatomic) NSData *keybagData;
@property (readonly, copy, nonatomic) NSData *tokenData;

- (void).cxx_destruct;
- (id)initWithResponseDictionary:(id)arg1;

@end

