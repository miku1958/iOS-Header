//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray;

@interface WLOHomeKitResult : NSObject
{
    unsigned int _resultType;
    int _resultCode;
    unsigned int _duration;
    unsigned int _transportType;
    unsigned int _isClient;
    NSArray *_serviceTypes;
    NSArray *_characteristicTypes;
}

@property (strong, nonatomic) NSArray *characteristicTypes; // @synthesize characteristicTypes=_characteristicTypes;
@property (nonatomic) unsigned int duration; // @synthesize duration=_duration;
@property (nonatomic) unsigned int isClient; // @synthesize isClient=_isClient;
@property (nonatomic) int resultCode; // @synthesize resultCode=_resultCode;
@property (nonatomic) unsigned int resultType; // @synthesize resultType=_resultType;
@property (strong, nonatomic) NSArray *serviceTypes; // @synthesize serviceTypes=_serviceTypes;
@property (nonatomic) unsigned int transportType; // @synthesize transportType=_transportType;

- (void).cxx_destruct;
- (id)description;

@end
