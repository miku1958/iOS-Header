//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@class NSNumber;

@interface _MPStoreFollow : NSObject
{
    NSNumber *_targetEntityId;
    long long _targetEntityType;
}

@property (strong, nonatomic) NSNumber *targetEntityId; // @synthesize targetEntityId=_targetEntityId;
@property (nonatomic) long long targetEntityType; // @synthesize targetEntityType=_targetEntityType;

+ (id)followWithPerson:(id)arg1;
+ (id)followWithStoreDictionary:(id)arg1;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)arg1;

@end

