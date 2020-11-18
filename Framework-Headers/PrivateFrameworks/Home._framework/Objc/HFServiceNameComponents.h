//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface HFServiceNameComponents : NSObject
{
    NSString *_rawServiceName;
    NSString *_serviceName;
    NSString *_roomName;
}

@property (readonly, nonatomic) NSString *composedString;
@property (strong, nonatomic) NSString *rawServiceName; // @synthesize rawServiceName=_rawServiceName;
@property (strong, nonatomic) NSString *roomName; // @synthesize roomName=_roomName;
@property (strong, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;

- (void).cxx_destruct;
- (unsigned long long)hash;
- (id)initWithRawServiceName:(id)arg1 rawRoomName:(id)arg2;
- (BOOL)isEqual:(id)arg1;

@end
