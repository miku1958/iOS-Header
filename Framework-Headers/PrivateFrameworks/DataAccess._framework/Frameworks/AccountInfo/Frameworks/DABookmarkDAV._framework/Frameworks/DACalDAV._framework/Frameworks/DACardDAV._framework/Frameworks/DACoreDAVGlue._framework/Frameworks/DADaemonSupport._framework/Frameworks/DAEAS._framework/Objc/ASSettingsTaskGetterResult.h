//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <Foundation/NSObject.h>

@interface ASSettingsTaskGetterResult : NSObject
{
    int _key;
    long long _status;
    id _result;
}

@property (nonatomic) int key; // @synthesize key=_key;
@property (strong, nonatomic) id result; // @synthesize result=_result;
@property (nonatomic) long long status; // @synthesize status=_status;

- (void).cxx_destruct;
- (id)initWithKey:(int)arg1 status:(long long)arg2 result:(id)arg3;

@end
