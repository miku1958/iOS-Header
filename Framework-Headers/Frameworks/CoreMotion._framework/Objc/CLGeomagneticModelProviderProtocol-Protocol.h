//
//     Generated by class-dump 3.5-MH (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <CoreMotion/CLNotifierServiceProtocol-Protocol.h>

@protocol CLGeomagneticModelProviderProtocol <CLNotifierServiceProtocol>
- (void)doAsync:(void (^)(struct CLGeomagneticModelProvider *))arg1;
- (void)doAsync:(void (^)(struct CLGeomagneticModelProvider *))arg1 withReply:(void (^)(void))arg2;
- (BOOL)syncgetDoSync:(void (^)(struct CLGeomagneticModelProvider *))arg1;
@end

