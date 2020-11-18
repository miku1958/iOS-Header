//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <HMFoundation/HMFObject.h>

@class NSString;

@interface HMDServiceNameComponents : HMFObject
{
    NSString *_rawServiceName;
    NSString *_serviceName;
    NSString *_roomName;
    NSString *_format;
}

@property (strong, nonatomic) NSString *format; // @synthesize format=_format;
@property (strong, nonatomic) NSString *rawServiceName; // @synthesize rawServiceName=_rawServiceName;
@property (strong, nonatomic) NSString *roomName; // @synthesize roomName=_roomName;
@property (strong, nonatomic) NSString *serviceName; // @synthesize serviceName=_serviceName;

+ (id)componentsWithRawServiceName:(id)arg1 rawRoomName:(id)arg2;
+ (id)componentsWithRawServiceName:(id)arg1 rawRoomName:(id)arg2 localizedFormat:(id)arg3;
- (void).cxx_destruct;
- (id)composedName;
- (id)initWithRawServiceName:(id)arg1 rawRoomName:(id)arg2 localizedFormat:(id)arg3;

@end
