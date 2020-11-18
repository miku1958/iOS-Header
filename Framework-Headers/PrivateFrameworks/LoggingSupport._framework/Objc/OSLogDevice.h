//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString, SimDevice;

__attribute__((visibility("hidden")))
@interface OSLogDevice : NSObject
{
    long long _devType;
    void *_mobDev;
    SimDevice *_simDev;
    NSString *_uid;
}

@property (nonatomic) long long devType; // @synthesize devType=_devType;
@property (nonatomic) void *mobDev; // @synthesize mobDev=_mobDev;
@property (strong, nonatomic) SimDevice *simDev; // @synthesize simDev=_simDev;
@property (strong, nonatomic) NSString *uid; // @synthesize uid=_uid;

- (void).cxx_destruct;
- (id)description;
- (id)init;
- (id)initWithMobileDevice:(void *)arg1 andID:(id)arg2;
- (id)initWithSimualatedDevice:(id)arg1;

@end

